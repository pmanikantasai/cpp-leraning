#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasLicense = true;

    if (age >= 18) {
        if (hasLicense) {
            cout << "You can drive.";
        }
        else {
            cout << "Get a driving license first.";
        }
    }
    else {
        cout << "You are too young to drive.";
    }

    return 0;
}