#include <iostream>
using namespace std;

int main(void){
    int n;

    cout << "Please type 1 or 3\n";
    cin >> n;

    switch (n){
        case 1:
            cout << "you typed 1 !!\n";
            break;
        case 3:
            cout << "you typed 3!!\n";
            break;
        default:
            cout << "Please type 1 or 3 (^o^)/\n";
    }

    return 0;
}