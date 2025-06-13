
idf_component_register(
    SRC_DIRS ${DIRS} "."
    INCLUDE_DIRS "." ${DIRS}
    REQUIRES esp_lcd driver lvgl esp_timer gt911 aw9523 ui
)

target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")

