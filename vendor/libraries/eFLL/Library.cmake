file(GLOB DUNE_EFLL_FILES
  vendor/libraries/eFLL/*.cpp
  vendor/libraries/eFLL/*.h
  vendor/libraries/eFLL/*.o
 )

set_source_files_properties(${DUNE_EFLL_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")
  
list(APPEND DUNE_VENDOR_FILES ${DUNE_EFLL_FILES})
