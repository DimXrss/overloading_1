#include <string>
#include <vector>
#include <myvec.hpp>

void operator>>(std::string source, myvec& other){
        std::vector<std::string> str;
        char dl = '\\';

        std::string word = "";
        source += dl;

        for(int i=0; i<source.size(); i++){
                if(source[i] != '\\')
                        word += source[i];
                else{
                        if(word.size() != 0)
                                str.push_back(word);
                        word = "";
                }
        }

        other.x = stoi(str[0]);
        other.y = str[1];
        other.z = str[2];
        other.w = stoi(str[3]);
}
