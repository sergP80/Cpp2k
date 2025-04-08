project("functional")

file(GLOB SRC src/*.cpp src/*.cxx)

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} ${COMMON_DEPS})