cmake_minimum_required(VERSION 3.28)
project(untitled7)

set(CMAKE_CXX_STANDARD 17)

include_directories("SFML-2.6.1/include")
link_directories("SFML-2.6.1/lib")

add_executable(untitled7 main.cpp)

target_link_libraries("${PROJECT_NAME}" sfml-window sfml-system sfml-graphics sfml-audio)

file(COPY "OpenSans.ttf" DESTINATION "./")
file(COPY "sound.mp3" DESTINATION "./")