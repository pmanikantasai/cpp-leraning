// Create a Student class with private name, age, and marks. Use a constructor to initialize them,
//  getters/setters to access them, and a function that determines whether the student passed or failed. 
// A student passes if marks ≥ 40.
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int marks;

public:
    // Constructor
    Student(string n, int a, int m) {
        name = n;
        age = a;
        marks = m;
    }

    // Set name
    void setName(string n) {
        name = n;
    }

    // Set age
    void setAge(int a) {
        age = a;
    }

    // Set marks
    void setMarks(int m) {
        marks = m;
    }

    // Get name
    string getName() {
        return name;
    }

    // Get age
    int getAge() {
        return age;
    }

    // Get marks
    int getMarks() {
        return marks;
    }

    // Check result
    void checkresult() {
        if (marks >= 40) {
            cout << name << " is passed" << endl;
        } else {
            cout << name << " is failed" << endl;
        }
    }
};

int main() {

    string name;
    int age;
    int marks;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter marks: ";
    cin >> marks;

    // Create object using constructor
    Student s1(name, age, marks);

    cout << "\nStudent Details\n";
    cout << "Name : " << s1.getName() << endl;
    cout << "Age : " << s1.getAge() << endl;
    cout << "Marks : " << s1.getMarks() << endl;

    // Check result
    s1.checkresult();

    return 0;
}

