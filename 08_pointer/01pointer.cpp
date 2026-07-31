# include <iostream>
using namespace std;

int main (){
    int x =10; // nrml asingning variable to value
    int *pnt = &x; //* as pointer and & as address

    cout<< x << endl;
    cout<< pnt<< endl;;
    cout << "________________________"<< endl;

    cout << *pnt<<endl;
    cout << &x;
    return 0;
}