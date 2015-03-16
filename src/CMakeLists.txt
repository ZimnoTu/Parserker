project(parserker)

set(SOURCES
	main.cpp
	parserker.cpp
	parserker.hpp
)

add_library(${PROJECT_NAME}-lib ${SOURCES})

add_executable(${PROJECT_NAME} main.cpp parserker.cpp parserker.hpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
