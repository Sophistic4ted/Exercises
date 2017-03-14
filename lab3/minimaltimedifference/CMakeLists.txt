
project(minimaltimeddifference)

set(HEDEAR_FILES MinimalTimedDifference.h)
set(SOURCE_FILES MinimalTimedDifference.cpp)

add_library(libminimaltimeddifference STATIC ${SOURCE_FILES})
target_include_directories(libminimaltimeddifference PUBLIC .)

add_executable(minimaltimeddifference ${SOURCE_FILES} main.cpp)

target_link_libraries(minimaltimeddifference libminimaltimeddifference)

