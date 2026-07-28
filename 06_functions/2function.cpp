#include <iostream>
using namespace std;

void greet (){
        cout << "Hello Man" << endl;
}

// function definition
int add (int a, int b);

int main (){

    // (10,20) are parameters
    int result = add(10,20);  // function calling
    cout << "function output is : "<< result << endl;

    greet();

    return 0;
}

int add (int a, int b){  // function declaration
    return a+b;
}


