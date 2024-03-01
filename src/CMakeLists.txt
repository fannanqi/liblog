set(SOURCELIST
    ${PROJECT_SOURCE_DIR}/src/logger.cc
)
add_library(Log ${SOURCELIST})
target_link_libraries(Log pthread)