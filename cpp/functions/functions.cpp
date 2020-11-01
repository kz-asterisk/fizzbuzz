#include <iostream>
using namespace std;
void testfunc(int a); //関数プロトタイプ(コンパイラが読み込んでくれる)

    int main(void){
    int ch;
    cin >> ch;
    testfunc(ch);
}

void testfunc(int a){
    if (a <= 0) {
        cout << a << "は0より小さい\n";
    } else {
        cout << a << "は0より大きい\n";
    }
}
