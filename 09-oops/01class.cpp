# include <iostream>
using namespace std;

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
    Details s1;
    s1.name = "Manikantasai";
    s1.age = 23;
    s1.subject = "CSE";
    s1.game ="cricket";

    s1.display();
    cout<< "______________________"<<endl;
    s1.games();

    return 0;
}