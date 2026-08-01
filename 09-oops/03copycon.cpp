#include <iostream>
using namespace std;

class Student {
public:
    string name;
    //Copy constructor
    Student(string n) {
        name = n;
    }
};
int main() {
    Student s1("Manikanta");
    Student s2 = s1;
    cout << s2.name;
}