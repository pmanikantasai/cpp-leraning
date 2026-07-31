// null pointer

# include <iostream>
using namespace std;

int main (){
    int *x = NULL;
    //-----------------

    //pointer to pointer
    int a= 10;
    int *p =&a;
    int **q=&p;

    cout <<"q address is : " << q << endl;
    cout <<"p address is : " << p << endl;

    cout<< "____________________"<< endl;

    cout <<"q value is : "<< **q << endl;
    cout << "p value is : "<< *p << endl;
    
    return 0;
}