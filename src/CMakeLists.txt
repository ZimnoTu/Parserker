project(parserker)

set(SOURCES
	main.cpp
	parserker.cpp
	parserker.hpp
	weapons.cpp
	weapons.hpp
	armor.cpp
	armor.hpp
	skill.cpp
	skill.hpp
)

add_library(${PROJECT_NAME}-lib ${SOURCES})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
