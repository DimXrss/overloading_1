#include <myvec.hpp>
#include <iostream>
#include <string>
#include <vector>

std::ostream& operator<<(std::ostream& stream, myvec& other){
        stream << other.x << ":" << other.y<< ":" << other.z << ":" << other.w << std::endl;
        return stream;
}

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

int main(int argc, char* argv[]){
	myvec v(12, "fold", "check", 6);

	std::cout << v << std::endl;
	
	"13\\helo\\heyyyyyyy\\12" >> v;

	std::cout << v<< std::endl;

	return 0;

}
