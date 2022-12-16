add_library(client client.cc)
target_link_libraries(client PUBLIC person)
target_include_directories(client PUBLIC 
                            ${CMAKE_CURRENT_LIST_DIR}
                            ${PROJECT_SOURCE_DIR}/src/person)
# ${CMAKE_CURRENT_LIST_DIR} dir. de este CMakeLisis.txt
target_link_libraries(client PUBLIC basket)
target_include_directories(client PUBLIC 
                            ${CMAKE_CURRENT_LIST_DIR}
                            ${PROJECT_SOURCE_DIR}/src/basket)

add_executable(client_main client_main.cc)
target_link_libraries(client_main client)
