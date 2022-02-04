cmake_minimum_required(VERSION 3.21)
project(FibSoli)

set(CMAKE_CXX_STANDARD 14)

add_executable(FibSoli main.cpp Card.h Deck.h Deck.cpp Card.cpp)
