# include <iostream>
using namespace std;

class Details{
public :
    Details(){
        cout << "constructor is created"<< endl;
    }
    ~Details(){
        cout << "destructor is created"<< endl;
    }
};
int main (){
    Details s1;
    return 0;
}