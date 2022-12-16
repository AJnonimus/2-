add_library(seller seller.cc)
target_link_libraries(seller PUBLIC person)
target_include_directories(seller PUBLIC 
                            ${CMAKE_CURRENT_LIST_DIR}
                            ${PROJECT_SOURCE_DIR}/src/person)
# ${CMAKE_CURRENT_LIST_DIR} dir. de este CMakeLisis.txt
target_link_libraries(seller PUBLIC basket)
target_include_directories(client PUBLIC 
                            ${CMAKE_CURRENT_LIST_DIR}
                            ${PROJECT_SOURCE_DIR}/src/basket)

add_executable(seller_main seller_main.cc)
target_link_libraries(seller_main seller)
