// print 20 to 99 even nums by using for loop
// print odd nums 1-20 by while loop

#include <iostream>
using namespace std ;

int evennums (int a ,int b){
    for ( int i = a; i <= b; i++){
        if (i%2==0){
            cout<< i << endl;
        }
    }
    return 0;
};

int oddnums(int a ,int b);

int main(){
    evennums (20,99);
    oddnums(1,20);
    return 0;
}

int oddnums(int a, int b)
{
    int i = a;

    while (i <= b){
        if (i % 2 != 0) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}