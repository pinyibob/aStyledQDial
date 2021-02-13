cmake_minimum_required(VERSION 3.4)
project(StyledDial)

file(GLOB headFiles ${CMAKE_SOURCE_DIR}/*.h)
file(GLOB srcFiles ${CMAKE_SOURCE_DIR}/*.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_PREFIX_PATH "D:/qt5.90/5.9/msvc2017_64")

add_executable(${PROJECT_NAME}
	${headFiles}
	${srcFiles}
	)
	
source_group("headFiles" FILES ${headFiles})
source_group("srcFiles" FILES ${srcFiles})

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)
target_link_libraries(${PROJECT_NAME}
	PUBLIC
	Qt5::Widgets
	Qt5::Core
	Qt5::Gui
	)