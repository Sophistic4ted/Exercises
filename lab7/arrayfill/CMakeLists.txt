
project(arrayfill)

set(HEDEAR_FILES ArrayFill.h UniformFill.h)
set(SOURCE_FILES ArrayFill.cpp UniformFill.cpp)

add_library(libarrayfill STATIC ${SOURCE_FILES})
target_include_directories(libarrayfill PUBLIC .)

add_executable(arrayfill ${SOURCE_FILES} main.cpp IncrementalFill.cpp IncrementalFill.h ArrayFillBase.cpp ArrayFillBase.h)

target_link_libraries(arrayfill libarrayfill)

