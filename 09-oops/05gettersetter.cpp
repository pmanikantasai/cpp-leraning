#include <iostream>
using namespace std;

class Student {
    private:
    string name;
    int age;

    public:
    //setter for name
    void setName(string n){
        name = n;
    }

    //getter for name
    string getName(){
        return name;
    }

    //setter for age
    void setAge(int a){
        age = a;
    }
    int getAge(){
        return age;
    }
};
int main (){
    Student s1;
    // setting data
    s1.setName("mani");
    s1.setAge(23);
    //getting data
    cout<< "My name is "<< s1.getName()<<"\n";
    cout<< "age is "<< s1.getAge();
    return 0;
}