# build list1-*.cpp
add_executable(list1-1
  ${CMAKE_CURRENT_LIST_DIR}/list1-1.cpp)

add_executable(list1-2
  ${CMAKE_CURRENT_LIST_DIR}/list1-2.cpp)

add_executable(list1-3
  ${CMAKE_CURRENT_LIST_DIR}/list1-3.cpp)

add_executable(list1-4
  ${CMAKE_CURRENT_LIST_DIR}/list1-4.cpp)


# build problem*.cpp
add_executable(problem1
  ${CMAKE_CURRENT_LIST_DIR}/problem1.cpp)

add_executable(problem2
  ${CMAKE_CURRENT_LIST_DIR}/problem2.cpp)

add_executable(problem3
  ${CMAKE_CURRENT_LIST_DIR}/problem3.cpp)

add_executable(problem4
  ${CMAKE_CURRENT_LIST_DIR}/problem4.cpp)

add_executable(problem5
  ${CMAKE_CURRENT_LIST_DIR}/problem5.cpp)

add_executable(problem6
  ${CMAKE_CURRENT_LIST_DIR}/problem6.cpp)


# add target for day1
add_custom_target(day1)
add_dependencies(day1
  list1-1 list1-2 list1-3 list1-4
  problem1 problem2 problem3 problem4 problem5 problem6)
