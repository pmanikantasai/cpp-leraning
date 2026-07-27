#include <iostream>

using namespace std;

int main (){
    // =, +=, -=, *=, %=, /=


    int a;
    a=5 ;// here 5 is assign to a

    a += 1;
    cout << a << endl;
    // a= a+1

    a -=1;
    cout << a << endl;
    // a = a - 1

    a *= 2;
    cout << a << endl;
    // a =a*2

    a %= 2;
    cout << a << endl;
    // a = a%2

    a /= 2;
    cout << a << endl;
    // a = a/2

    a=5;

    // Increment and Decrement Operators
    // ++ , --

    // per-Increment 
    cout << ++a << endl;// Before excute 1 is add so a=6
    // post-Increment 
    cout << a++ << endl;// after excute 1 is add so a=6 
    cout << a << endl;// here come a= 7  by above step

    // here we get a=7

    // per-Decrement 
    cout << --a << endl;// Before excute 1 is sub so a=6
    // post-Decrement 
    cout << a-- << endl;// after excute 1 is sub so a=6 
    cout << a ;// here come a= 5  by above step

    return 0;
}