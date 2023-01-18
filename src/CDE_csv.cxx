#include <CDE_csv.h>

namespace CppDataExport{

    // INHERIT CONSTRUCTOR/DESTRUCTOR FROM OVERHEAD
    CSVHandler::CSVHandler( const char* filenamei ) : CDEHandler( filenamei ){};
    CSVHandler::CSVHandler( const std::string& filenamei ) : CDEHandler( filenamei.c_str() ){};
    
    CSVHandler::CSVHandler( const char* filenamei, std::vector<std::string>& header_names )  : CDEHandler( filenamei ){ 
        exportUnDelimitedStringData(header_names);    
    };
    CSVHandler::CSVHandler( const std::string& filenamei, std::vector<std::string>& header_names )  : CDEHandler( filenamei.c_str() ){ 
        exportUnDelimitedStringData(header_names);    
    };

    CSVHandler::~CSVHandler(){};

    void CSVHandler::exportUnDelimitedStringData( std::vector<std::string>& string_data_vector)const{
        std::string delimited_string = "";
        for( std::string data_element : string_data_vector ){
            std::string delimited_element =  data_element + ",";
            delimited_string += delimited_element;
        }
        delimited_string += "\n";
        exportDelimitedLine( delimited_string.c_str() );
    };

}