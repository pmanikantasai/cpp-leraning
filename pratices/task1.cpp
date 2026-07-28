// even or odd nums

# include <iostream>
using namespace std;

int evenodd (int n){
    if (n%2 == 0){
        cout << "its a even num : "<< n << endl ;
    }else {
        cout << "its a odd num : "<< n << endl ;
    }
    return 0;
}

int main (){

    int num ;
    cout << "num is : ";
    cin >> num ;

    evenodd (num);
    return 0;
}