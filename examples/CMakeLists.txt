
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY 
    ${CMAKE_SOURCE_DIR}/examples/bin
    )

###################################################
# CMAKE FOR EXAMPLE 1

add_executable(example1_csv example1_csv.cxx)

target_link_libraries(
  example1_csv
  CppDataExportCSV
)

###################################################