#pragma once 

// FILE MANAGEMENT
#include <fstream>

// STRING MANAGEMENT
#include <sstream>
#include <iostream>

namespace CppDataExport{
    
    // OVERHEAD FOR DIFFERENT EXPORT TYPES
    class CDEHandler{
        protected:
            const char* export_file_path;
            
            void exportDelimitedLine( const char* )const;

        public:
            CDEHandler( const char* );
            virtual ~CDEHandler( );
            
    };

}
