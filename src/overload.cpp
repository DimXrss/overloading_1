#include <iostream>
#include <string>
#include <myvec.hpp>

std::ostream& operator<<(std::ostream& stream, myvec& other){
        stream << other.x << ":" << other.y<< ":" << other.z << ":" << other.w << std::endl;
        return stream;
}

		
