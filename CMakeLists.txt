cmake_minimum_required(VERSION 3.21)
project(e_book)

set(CMAKE_CXX_STANDARD 14)

add_executable(e_book main.cpp book/Book.cpp book/Book.h user/User.cpp user/User.h cdate/CDate.cpp cdate/CDate.h)
