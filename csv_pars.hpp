//CSV parser my mknRuSp
#ifndef CSV_PARS_IS_INCLUDED
    #define CSV_PARS_IS_INCLUDED 1
    #include <string>
    #include <vector>
    #include <initializer_list>
    namespace csv 
    {
        auto parsing( const std::string_view CSV_TXT )
        {
            std::string temp{};
            std::vector<std::string> ParsedCsv{};
            for( const auto &i : CSV_TXT )
            {
                if( i == ',' ) 
                {
                    ParsedCsv.push_back(temp);
                    temp.clear();  
                }
                else { temp += i; }
            }
            return std::initializer_list{ParsedCsv.get_allocator()};
        }        
    }

#endif
