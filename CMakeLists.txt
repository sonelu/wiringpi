cmake_minimum_required(VERSION 3.8)
project(wiringpi)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_gen_version_h REQUIRED)

add_library(wiringpi SHARED
  src/wiringPi.c
  src/wiringPiLegacy.c
  src/softTone.c
  src/softPwm.c
)
target_compile_features(wiringpi PUBLIC cxx_std_17)
target_include_directories(wiringpi PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include/${PROJECT_NAME}>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
)

install(
  DIRECTORY include/
  DESTINATION include/wiringpi
)

install(
  TARGETS
    wiringpi
  EXPORT export_wiringpi
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)

ament_package()
ament_generate_version_header(${PROJECT_NAME})

