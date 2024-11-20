cmake_minimum_required(VERSION 3.10)
SET(CMAKE_PREFIX_PATH "/usr/lib/x86_64-linux-gnu/cmake")

project(CircleGridStereoCalibrationTool)

set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

########make app run on windows########
#set(CMAKE_SYSTEM_NAME Windows)
#set(CMAKE_SYSTEM_PROCESSOR x86_64)
#set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
#set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)
########

# init_qt: Let's do the CMake job for us
set(CMAKE_AUTOMOC ON) # For meta object compiler
set(CMAKE_AUTORCC ON) # Resource files
set(CMAKE_AUTOUIC ON) # UI files

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

########         !!!!!!!         ########
########double click mouse to run########
set(CMAKE_CXX_FLAGS   "-no-pie")
set(CMAKE_C_FLAGS   "-no-pie")
########         !!!!!!!         ########

# Find the QtWidgets library
find_package(Qt5 REQUIRED COMPONENTS Widgets Core Gui)
find_package(OpenCV REQUIRED)

include_directories(
    #DetectCorner
    #Calibrate
    ${OpenCV_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)
message(STATUS "LOG opencv path: ${OpenCV_INCLUDE_DIRS}")
file(GLOB project_SOURCES "*.cpp" "Easylogger/*.cc" "Easylogger/*.cpp")

add_executable(${PROJECT_NAME} ${project_SOURCES})

target_link_libraries(${PROJECT_NAME} 
${OpenCV_LIBRARIES}
Qt5::Core 
Qt5::Gui 
Qt5::Widgets
)
