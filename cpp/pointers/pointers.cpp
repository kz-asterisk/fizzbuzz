#include <iostream>
#include <sstream>
int main(){
    int a = 123, b;
    int* p;

    p = &a;
    b = *p;

    std::cout << "a=" << a << " &a=" << &a << " *p=" << *p << " p=" << p << " b=" << b << '\n';

    return 0;
}