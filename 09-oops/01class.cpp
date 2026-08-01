# include <iostream>
using namespace std;

// Class Definition
class Details {
    public :
        string name;
        int age;
        string subject;
        string game;
        void display (){
            cout << "Name : " <<name << endl;
            cout << "Age : " <<age << endl;
            cout << "Course : "<<subject<< endl;
        }
        void games (){
            //  cout << "Name : " <<name << endl;
            //  cout << "Age : " <<age << endl;
             cout << "Game : "<<game << endl;
        }
};
int main(){
    // Object Creation
    Details s1;
    // Assigning values
    s1.name = "Manikantasai";
    s1.age = 23;
    s1.subject = "CSE";
    s1.game ="cricket";
     // Calling member function
    s1.display();
    return 0;
}