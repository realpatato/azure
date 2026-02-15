cmake_minimum_required(VERSION 3.20)
project(MyCompiler)

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(MyCompiler src/main.cpp)

llvm_map_components_to_libnames(llvm_libs
    Core
    Support
)

target_link_libraries(MyCompiler ${llvm_libs})
