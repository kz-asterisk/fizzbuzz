#include <iostream>
bool is_fizz(int i);
bool is_buzz(int i);

int main(){
    for(int i = 1; i <= 30 ; i++){
        if(is_fizz(i) && is_buzz(i)){
            std::cout << "fizzbuzz\n";
        }
        else if(is_fizz(i)){
            std::cout << "fizz\n";
        }
        else if(is_buzz(i)){
            std::cout << "buzz\n";
        }
        else{
            std::cout << i << '\n';
        }
    }
}

bool is_fizz(int i){
    if( i % 3 == 0){
        return true;
    }
    else{
        return false;
    }
}

bool is_buzz(int i){
    if( i % 5 == 0){
        return true;
    }
    else{
        return false;
    }
}