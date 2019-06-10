cmake_minimum_required (VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)
project (ScottsSimpleVLCEncoder)
add_executable(ScottsSimpleVLCEncoder SimpleVlcEncoder.cpp SimpleHistogramContainer.cpp SimpleCodewordTableContainer.cpp)