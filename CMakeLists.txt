cmake_minimum_required(VERSION 3.16)
project(hotmail-regen CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hotmailregen
    src/main.cpp
    src/regen.cpp
    src/captcha.cpp
)

target_include_directories(hotmailregen PRIVATE include)

if(WIN32)
    target_link_libraries(hotmailregen PRIVATE userenv)
endif()
