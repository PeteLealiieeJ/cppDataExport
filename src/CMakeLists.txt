add_library( CppDataExportBASE cppDataExport.cxx )

# TODO: ADD COMPILE FLAGS FOR EACH DESIRED EXPORTER TYPE (WHEN MORE ARE ADDED)

add_library( CppDataExportCSV CDE_csv.cxx )
target_link_libraries( CppDataExportCSV CppDataExportBASE )