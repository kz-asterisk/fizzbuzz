#include <iostream>
void sub();

int global_dt = 0;

int main(){
    sub();
    sub();
    sub();

    return 0;
}

void sub(){
    int auto_dt = 0;
    static int static_dt = 0;

    ++global_dt;
    ++auto_dt;
    ++static_dt;

    std::cout << "global_dt=" << global_dt ;
    std::cout << "auto_dt=" << auto_dt; 
    std::cout << "static_dt=" << static_dt << '\n';
}