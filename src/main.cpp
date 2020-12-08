#include <myvec.hpp>
#include <iostream>
#include <string>

std::ostream& operator<<(std::ostream& stream, myvec& other){
        stream << other.x << ":" << other.y<< ":" << other.z << ":" << other.w << std::endl;
        return stream;
}


int main(int argc, char* argv[]){
	myvec v(12, "fold", "check", 6);

	std::cout << v << std::endl;

	return 0;

}
