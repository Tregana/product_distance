set(target product_distance)
add_library(${target} STATIC
  ${PROJECT_SOURCE_DIR}/src/product_distance.cpp
)
install(TARGETS ${target} DESTINATION lib)
