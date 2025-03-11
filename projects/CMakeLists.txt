if (LINUX)
 list(APPEND COMMON_DEPS m)
endif()

add_subdirectory("simple_calc")
add_subdirectory("fast_matrix")
add_subdirectory("geom_2d")