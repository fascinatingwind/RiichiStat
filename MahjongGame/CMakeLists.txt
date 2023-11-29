cmake_minimum_required(VERSION 3.16)
project(MahjongGame)

include_directories(include)
link_directories(src)

set(SOURCE_FILES ${SOURCE_FILES}
	"src/main.cpp"
)
add_executable(MahjongGame ${HEADER_FILES} ${SOURCE_FILES})