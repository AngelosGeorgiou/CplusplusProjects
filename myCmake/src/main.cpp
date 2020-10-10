#include <iostream>
#include <ctime>

using namespace std;

int main(){
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
}
