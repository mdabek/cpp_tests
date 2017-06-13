#include <iostream>
#include <regex>
#include <vector>
#include "Poco/String.h"

using std::regex;

int main (int argc, char* argv[])
{
    std::string cmd("/bin/ps");

    std::string::size_type  n = cmd.find("ps");
    cmd.replace(n, std::string("ps").length(), "bash");

    std::cout << "Cmd: " << cmd << std::endl;
/* //Replace test
    for (int i = 0; i < 100000; i++) {
        std::string fox("Brown ox jumped over red carpet");
        
        std::string::size_type n = fox.find("ox");
        fox.replace(n, std::string("ox").length(), "fox");
    }

    for (int i = 0; i < 100000; i++) {
        std::string fox("Brown ox jumped over red carpet");
        std::regex_replace(fox, std::regex("ox"), "fox");
    }

    for (int i = 0; i < 100000; i++) {
        std::string fox("Brown ox jumped over red carpet");
        Poco::replace(fox, "ox", "fox");
    }*/

    //Concatenate test
    std::vector<std::string> str10;
    str10.push_back("Quick");
    str10.push_back("red");
    str10.push_back("fox");
    str10.push_back("jumped");
    str10.push_back("over");
    str10.push_back("big");
    str10.push_back("brown");
    str10.push_back("bear");
    str10.push_back("and");
    str10.push_back("farted");

  /*  for (int i = 0; i < 100000; i++) {
        std::string s;
        for (auto str : str10) {
            s = str + " ";
        }     
    }*/

    for (int i = 0; i < 100000; i++) {
        std::string s = Poco::cat(std::string(" "), str10.begin(), str10.end());
    }
    return 0;
}
