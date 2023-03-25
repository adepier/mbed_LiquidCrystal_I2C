 
set(LIQUID_SOURCES  LiquidCrystal_I2C.cpp) 
add_library(LiquidCrystal_I2C STATIC ${LIQUID_SOURCES})
target_link_libraries(LiquidCrystal_I2C  mbed-os   )
set(LIQUID_DIR ${CMAKE_CURRENT_SOURCE_DIR} )
target_include_directories(LiquidCrystal_I2C PUBLIC ${LIQUID_DIR})