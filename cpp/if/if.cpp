#include <iostream>
using namespace std;
int main(void)
{
    int a = 10;
    int b = 0;
    int c = 0;

    if (a < 10){
        b = 20;
        c = 20;
    } else {
        b = 10;
        c = 10;
    }
    
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n";
    cout << "a + b + c = "  << a + b + c << "\n";

    return 0;
}