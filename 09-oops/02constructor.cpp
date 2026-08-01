#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    //Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << name << "\n" << age;
    }
};
int main() {
    Student s1("Manikanta",22);
    s1.display();
}