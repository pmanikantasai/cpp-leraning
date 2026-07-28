#include <iostream>
using namespace std;

// function definition
int add (int a, int b=40){ // default parameter
    return a+b;
}

// Lambda expression
auto greet = [] (){
    cout << "Hello Man"<<endl;
};

auto square = [] (int n){
    cout << n*n << endl;
};

int main (){
    int result = add(10);  // function calling
    cout << "function output is : "<< result << endl;
    greet ();
    square(12);
    return 0;
}




