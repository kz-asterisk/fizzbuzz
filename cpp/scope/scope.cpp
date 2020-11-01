#include <iostream>

int dt = 999;

int main(){
    int dt = 100;
    std::cout << "Hello!\n";
    std::cout << "main dt=" << dt << '\n';
    std::cout << "::dt="   << ::dt << '\n';

    return 0;
}