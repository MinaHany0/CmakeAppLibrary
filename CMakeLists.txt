
### THIS MAKE FILE HAS MAKING THE LIBRARY
#the minimum version required of cmake
cmake_minimum_required(VERSION 3.22)
#name of the application and sets the PROJECT_SOURCE_DIR variable to where this call was made
project(application)
#print project folder path 
message(STATUS "Project path is ${PROJECT_SOURCE_DIR}")
#set a variable for source files
set(SRC_FILES ${CMAKE_SOURCE_DIR}/application/main.cpp)
#extract the executable with given source files as argument
add_executable(application ${SRC_FILES})
#make a new library out of the two cpp and hpp files
# add_library(teacofee ${CMAKE_SOURCE_DIR}/../library/teaCofeeLib.cpp ${CMAKE_SOURCE_DIR}/../library/teaCofeeLib.hpp)
add_subdirectory(${CMAKE_SOURCE_DIR}/library)


#the directories to get source and header files
target_include_directories(application PUBLIC ${PROJECT_SOURCE_DIR}/application ${PROJECT_SOURCE_DIR}/library )
target_link_libraries(application PUBLIC teacofee )
