cmake_minimum_required(VERSION 3.10)

project(MyVector)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

# Create library
add_library(MyVectorLib
    src/MyVector.cpp
)
target_include_directories(MyVectorLib PUBLIC include)



add_executable(MyVector
    src/main.cpp
)

#target_include_directories(MyVector PRIVATE include)

# Create executable
#target_include_directories(MyVector PRIVATE include)
target_link_libraries(MyVector PRIVATE MyVectorLib)

#enable_testing()
#add_subdirectory(tests)