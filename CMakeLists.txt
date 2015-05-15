cmake_minimum_required(VERSION 3.1)
project(length)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(GTEST_FILES lib/gtest/gtest.h)
set(GMOCK_FILES lib/gmock/gmock.h lib/gmock-gtest-all.cc)


set(SOURCE_FILES src/main.cpp)
add_executable(length ${SOURCE_FILES} ${GTEST_FILES} ${GMOCK_FILES} test/LengthTest.cpp test/LengthTest.h src/Length.cpp src/Length.h src/LengthUnit.cpp src/LengthUnit.h)