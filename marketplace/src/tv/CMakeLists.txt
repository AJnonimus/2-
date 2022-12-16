add_library(tv tv.cc tv.h)
target_link_libraries(tv PUBLIC product)
target_include_directories(tv PUBLIC
                          ${CMAKE_CURRENT_LIST_DIR}
                          ${PROJECT_SOURCE_DIR}/src/product)
# ${CMAKE_CURRENT_LIST_DIR} dir. de este CMakeLisis.txt

add_executable(tv_main tv_main.cc)
target_link_libraries(tv_main PUBLIC tv product)



