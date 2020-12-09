#include <myvec.hpp>
#include <opread.hpp>
#include <oppush.hpp>
#include <iostream>

int main(int argc, char* argv[]){
	myvec v(12, "fold", "check", 6);

	std::cout << v << std::endl;
	
	"13\\helo\\heyyyyyyy\\12" >> v;

	std::cout << v<< std::endl;

	return 0;

}
