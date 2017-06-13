#include "Poco/StringTokenizer.h"
#include <iostream>
#include <algorithm>

using Poco::StringTokenizer;

struct Display {
    Display():x(0){}
    void operator()(std::string str) { 
        x++;
//                                 std::cout << "Token:" << str << std::endl;
    }
    int x;
};

int main(int argc, char** argv)
{

    const std::string long_path("/this/is/the/long/path.001/_to some/magic/file.idl");
    const std::string separators("/");
    int x = 0;

   
    for (int i = 0; i < 100000; i++) {
        StringTokenizer st(long_path, separators, StringTokenizer::TOK_TRIM);
        st.count();

        //Option 1
        //for (auto str : st) { 
        //    std::cout << "Token:" << str << std::endl;
        //}
        

        //Option 2
        //std::for_each(st.begin(), st.end(), Display());
    }

    return 0;
}
