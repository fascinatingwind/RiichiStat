cmake_minimum_required(VERSION 3.16)
project(MahjongStatistic)

include_directories(include)
link_directories(src)

set(HEADER_FILES ${SOURCE_FILES}
	"include/main.h"
)
set(SOURCE_FILES ${SOURCE_FILES}
	"src/main.cpp"
)
add_executable(MahjongStatistic ${HEADER_FILES} ${SOURCE_FILES})