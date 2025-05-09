# shell.nix for setting up development environment for Nixos/Nix
with (import <nixpkgs> {}); let
  my-python = python-packages:
    with python-packages; [
      find-libpython
      pip
    ];
  python-with-my-packages = python3.withPackages my-python;
in
  mkShell {
    buildInputs = [
      python-with-my-packages
      libgcc
      gnumake
      gtkwave
      python312Packages.flask
      python312Packages.pip
    ];
    shellHook = ''
      alias vivado="nix run gitlab:doronbehar/nix-xilinx#vivado"
      pip3 install cocotb
    '';
  }
