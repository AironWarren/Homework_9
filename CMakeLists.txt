# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("Homework_9")

set(INCLUDE
	"inc/main.h"
	"inc/figure.h"
	"inc/operations.h"
)

set(SRC
	"src/main.cpp"
	"src/figure.cpp"
	"src/operations.cpp"
)

add_executable (Homework_9 
	${INCLUDE} 
	${SRC}
)

target_include_directories(Homework_9
        PUBLIC
        ./inc
        ./src
)