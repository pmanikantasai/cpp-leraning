#include <iostream>
using namespace std;

class Car{
    private:
        string brand;
        int speed;
    public:
        // setter on brand
        void setBrand(string b){brand = b;}
        // setter on speed
        void setSpeed(int s){speed = s;}

        // car start
        void start(){cout<< brand <<" is started"<<endl;}

        // accelerate
        void  accelerate(){
            speed += 10;
            cout<<"speed is "<<speed<<endl;
        }
        //break
        void breaks (){
            if (speed > 0){
                speed -= 5;
                cout << "speed is desceared by 5"<<endl;
                cout << speed<< endl;
            }else{
                cout<< "car has stopped"<<endl;;
            }
        }
        //display spped
        void displaySpeed(){
            cout<<brand<<endl;
            cout<<"speed is : "<<speed<<endl;
        }
        //stop the car
        void stop (){
            speed =0;
            cout << "car has stopped";
        }

};
int main(){
    Car car;
    car.setBrand("ferrari");
    car.setSpeed(0);
    car.start();
    car.accelerate();
    car.accelerate();
    car.accelerate();
    car.breaks();
    car.breaks();
    car.breaks();
    car.breaks();
    car.breaks();
    car.breaks();
    car.breaks();
    car.breaks();
    car.displaySpeed();

    return 0;
}