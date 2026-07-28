#include <iostream>
using namespace std;

// function definition
int add (int a, int b=40){ // default parameter
    return a+b;
}

int main (){
    int result = add(10);  // function calling
    cout << "function output is : "<< result << endl;
    return 0;
}




