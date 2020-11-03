#include <iostream>
#include <ctime>
//#include "myLib.hpp"

using namespace std;

int main(){
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
}
