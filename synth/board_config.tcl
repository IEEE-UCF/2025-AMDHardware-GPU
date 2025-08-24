set project_name "gpu_project"
set part_name "xc7z010clg400-1"
set project_dir "./build/${project_name}"

create_project -force gpu_project ./build/gpu_project -part xc7z010clg400-1

add_files -norecurse [glob ../rtl_utils/*.sv]
add_files -norecurse [glob ../src/*.sv]
add_files -norecurse ./top_wrapper.vhd

add_files -fileset constrs_1 -norecurse ./constraints.xdc

set_property top top_wrapper [current_fileset]
update_compile_order -fileset sources_1

puts "project '${project_name}' created successfully for red pitaya."
puts "to build the bitstream, run synthesis and implementation."
