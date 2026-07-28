#include <iostream>
using namespace std;

// function definition
int add (int a, int b){  // function declaration
    return a+b;
}

int main (){
    int result = add(10,20);  // function calling
    cout << "function output is : "<< result;

    return 0;
}