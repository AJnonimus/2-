add_library(computer computer.cc computer.h)
target_link_libraries(computer PUBLIC product)
target_include_directories(computer PUBLIC 
                            ${CMAKE_CURRENT_LIST_DIR}
                            ${PROJECT_SOURCE_DIR}/src/product)
# ${CMAKE_CURRENT_LIST_DIR} dir. de este CMakeLisis.txt

add_executable(computer_main computer_main.cc)
target_link_libraries(computer_main PUBLIC computer product)
