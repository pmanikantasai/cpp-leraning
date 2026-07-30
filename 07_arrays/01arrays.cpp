# include <iostream>
# include <string>

using namespace std ;

int main () {
    // declared the array 
    int nums [5];
    // intialized the array
    int evens [5] = {2,4,6,8,10};

    //cout << evens ;
    // cout << evens[0] << endl;
    // cout << evens[1] << endl;
    // cout << evens[2] << endl;
    // cout << evens[3] << endl;
    // //cout << evens[4];
    // evens [4] = 100;
    // cout << evens[4];

    for (int i =0;i<5;i++){ //out put = 2,4,6,8,10
        cout << evens[i] << endl;

    }

    //    for (int i =0;i<=5;i++){   here we out put = 2,4,6,8,10, 0x2345 (we use =5 so last index
                                        // 5 take address
                                        // of memory if there is no emlment)
    //     cout << evens[i] << endl;
    // }

    return 0;
}