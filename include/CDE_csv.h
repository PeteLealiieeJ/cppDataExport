#pragma once 

#include <cppDataExport.h>

#include <vector>
#include <string>

namespace CppDataExport{

    class CSVHandler:public CDEHandler{

        public:

            CSVHandler( const char*  );
            CSVHandler( const std::string&  );
            CSVHandler( const char*, std::vector<std::string>& );
            CSVHandler( const std::string&, std::vector<std::string>& );

            ~CSVHandler( );
            
            void exportUnDelimitedStringData( std::vector<std::string>& )const;

            // TEMPLATE FOR DIFFERENT NUMERIC DATA TYPES
            template<class T> 
            void exportNumericData( std::vector<T>& numeric_data_vector)const{
                std::string delimited_string = "";
                for( T data_element : numeric_data_vector ){
                    std::string delimited_element =  std::to_string(data_element) + ",";
                    delimited_string += delimited_element;
                }
                delimited_string += "\n";
                exportDelimitedLine( delimited_string.c_str() );
            };

    };

}