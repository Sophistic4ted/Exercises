
project(academiaserializer)

set(HEDEAR_FILES AcademiaSerializer.h)
set(SOURCE_FILES AcademiaSerializer.cpp)

add_library(libacademiaserializer STATIC ${SOURCE_FILES})
target_include_directories(libacademiaserializer PUBLIC .)

add_executable(academiaserializer ${SOURCE_FILES} main.cpp)

target_link_libraries(academiaserializer libacademiaserializer)

