# make static library for minmax
add_library(minmax
  STATIC minmax.cpp)

# attach header file to minmax
target_include_directories(minmax
  PUBLIC ${CMAKE_CURRENT_DIR})

# build main.cpp
add_executable(main
  ${CMAKE_CURRENT_LIST_DIR}/main.cpp)

# add header file
target_link_libraries(main
  minmax)


# make static library for keisan
add_library(keisan
  STATIC keisan.cpp)

# attach header file to keisan
target_include_directories(keisan
  PUBLIC ${CMAKE_CURRENT_DIR})

# build problem1.cpp
add_executable(day2-problem1
  ${CMAKE_CURRENT_LIST_DIR}/problem1.cpp)

# add header file
target_link_libraries(day2-problem1
  keisan)


# add target for day2
add_custom_target(day2)
add_dependencies(day2
  main
  day2-problem1)
