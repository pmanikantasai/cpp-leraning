#include <iostream>
using namespace std;

int main() {

    int arr[2][3];

    cout << "Enter 6 numbers:\n";

    for (int i = 0; i < 2; i++) {
        
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
        
    }

    cout << "\nArray is:\n";

    for (int i = 0; i < 2; i++) {
        cout<< "row no : "<< i+1 << "\n";
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}