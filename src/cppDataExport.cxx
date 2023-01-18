#include <cppDataExport.h>

namespace CppDataExport{

    // CONSTRUCTOR AND DESTRUCTOR 
    CDEHandler::CDEHandler( const char* filenamei ):export_file_path( filenamei ){ 
        std::ofstream file;
        // OPEN FILE SPECIFIED DURING CONSTRUCTION (AND KILL ANY INFORMATION WITHIN)
        file.open( this->export_file_path, std::ios::out | std::ios::trunc );
        if(!file.is_open()){
            throw std::runtime_error("[ERROR][CPPDATAEXPORT] - EXPORT FILE DID NOT OPEN AT INIT");
            return;
        }
        file.close();
    };

    CDEHandler::~CDEHandler(){};


    void CDEHandler::exportDelimitedLine( const char* delimited_data_string )const{
        
        std::ofstream file;
        // OPEN FILE SPECIFIED DURING CONSTRUCTION (AND APPEND TO ANY INFORMATION WITHIN)
        file.open( this->export_file_path, std::ios::out | std::ios::app );
        if(!file.is_open()){
            throw std::runtime_error("[ERROR][CPPDATAEXPORT] - EXPORT FILE DID NOT OPEN AT EXPORT");
            return;
        }

        file << delimited_data_string; // THIS STRING SHOULD END WITH AN "\n"
        
        // CLOSE THE STREAM TO THE FILE
        file.close();
        return;
    };


}
