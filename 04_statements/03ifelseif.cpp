#include <iostream>

using namespace std;

int main (){
    int marks;
    cout << "enter the marks : ";
    cin >> marks ;
    if (marks >= 90){
        cout<< "grade 'A'" << "very Good";
    }else if (marks >= 80){
        cout<< "grade 'B'" << "Good";
    }else if (marks >= 60){
        cout<< "grade 'C'" << "Good";
    }else {
        cout << "FAIL";
    }   
    return 0;

}