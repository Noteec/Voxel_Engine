cmake_minimum_required(VERSION 3.10)
project(MineCraft)

# Укажите стандарт C++
set(CMAKE_CXX_STANDARD 17)

# Указываем пути к библиотекам и заголовкам GLEW, GLFW и GLAD
set(GLEW_LIBRARIES "${CMAKE_SOURCE_DIR}/lib/GLEW/glew32s.lib")
set(GLEW_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include/GL")

set(GLFW_LIBRARIES "${CMAKE_SOURCE_DIR}/lib/GLFW/glfw3.lib")
set(GLFW_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include/GLFW")


# Подключаем заголовочные файлы
include_directories(
    "${GLEW_INCLUDE_DIR}"
    "${GLFW_INCLUDE_DIR}"
)

# Укажите исходные файлы
add_executable(MineCraft src/voxel_engine.cpp src/window/Window.cpp)

# Линкуем библиотеки
target_link_libraries(MineCraft 
    ${GLEW_LIBRARIES}
    ${GLFW_LIBRARIES}
    opengl32
)
