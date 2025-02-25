list(APPEND COMMON_LIB_DEPS)

if (LINUX)
 list(APPEND COMMON_LIB_DEPS m)
endif()

add_subdirectory(calculator)