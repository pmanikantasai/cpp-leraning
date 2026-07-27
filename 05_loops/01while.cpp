#include <iostream>
#include <string>

using namespace std;

int main (){
    int cups ;
    cout << "num of cups do you have :" <<endl;
    cin >> cups ;

    while (cups > 0){
        cout << "cup no :"<< cups << " is served "<< endl;
        cups --;

        cout<< "reaming cups : "<< cups << endl;
        
    }
    return 0;
}