LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib/)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
ADD_EXECUTABLE(main main.c)


TARGET_LINK_LIBRARIES(main libhello.so)

