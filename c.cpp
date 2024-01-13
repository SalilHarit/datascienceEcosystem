#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string,int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;
int main (){

    number_t age=21;
    text_t firstName="John";

    std::cout << "Hello, " << firstName << "!\n";
    std::cout << "You are " << age << " years old.\n";
    
    return 0;
}

//instead of typedef, we can use using keyword as well to define a type alias as follows:   