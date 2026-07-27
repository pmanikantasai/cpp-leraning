#include <iostream>

using namespace std;

int main (){
    // && (and), || (or)
    // && where all conditions are true
    // || any one condition is true

    int a,b,c;
    a=20;
    b=20;
    c=10;
    cout << (a == b && a > c) << endl;
    cout << (a == b && a < c) << endl;
    cout << (a == b || b != a);
    // here we bool values 1(true),0(false)

    return 0;
}