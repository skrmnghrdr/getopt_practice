#PRIMER: Learn how to implement modularity :)


project(optionhandler)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

add_executable(optionhandler)
target_link_libraries(optionhandler m)
target_sources(optionhandler PRIVATE src/main.c src/option_handler.c)

target_include_directories(optionhandler PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_compile_options(optionhandler PRIVATE
  $<$<CONFIG:Debug>:-g -O0>
)
