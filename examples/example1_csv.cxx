#include <CDE_csv.h> 
#include <vector>
#include <string>
#include <iostream>
/// \TODO: MAKE OVERHEAD INCLUDE 

int main(){

    std::vector<std::string> headers{
        "header1",
        "header2",
        "header3",
        "header4",
        "header5",
        "header6",
    };

    // CREATE POINTER TO CSV HANDLER
    const std::string filename = "example1_exported_csv1.csv"; // NOTICE THE STRING MUST BE (COMPILIED) CONSTANT
    CppDataExport::CSVHandler* exporter1 = new CppDataExport::CSVHandler( filename, headers );
    
    CppDataExport::CSVHandler* exporter2 = new CppDataExport::CSVHandler( "example1_exported_csv2.csv", headers );

    // HANDLING DOUBLE EXPORT DATA
    std::vector<double> data_double{
        1.2324423,
        32.12342,
        432.423424,
        644.422342,
        5325.4223,
        242466.635365,
    };

    // HANDLING INTEGER EXPORT DATA
    std::vector<int> data_integer{
        29,
        -9,
        84,
        -43,
        843,
        534,
    };

    // HANDLING STRING EXPORT DATA
    std::vector<std::string> data_string{
        "this",
        "is",
        "something",
        "from",
        "two-thousand",
        "twenty-two",
        "something extra" // NOT LIMITED TO LENGTH OF HEADER SIZE
    };
    
    exporter1 -> exportNumericData<double>(data_double);
    exporter1 -> exportNumericData<int>(data_integer);
    exporter1 -> exportUnDelimitedStringData( data_string );

    exporter2 -> exportUnDelimitedStringData( data_string );
    exporter2 -> exportNumericData<int>(data_integer);
    exporter2 -> exportNumericData<double>(data_double);

    // DELETE POINTER AND RELEASE ALLOCATED TO CSV HANDLER
    delete exporter1;
    delete exporter2;
    
    std::cout << "FINISHED" <<  std::endl;


}