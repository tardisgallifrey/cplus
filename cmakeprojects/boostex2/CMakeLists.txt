cmake_minimum_required(VERSION 3.1.0)

project(BoostExampleLibrary)

include_directories(/usr/local/boost)

add_executable(boostex2 boostex2.cpp)

link_directories(/usr/local/boost/stages)