// reversing of array

# include <iostream>
using namespace std;


class Reverse{
public:
    void reversing(int array[], int size){
        for(int i =size-1;i>=0;i--){
            cout << array[i]<<" ";
        }
    }
 };
 int main(){
    int array[]={1,2,3,4,5,6,7,9,8,10};
    int size = sizeof(array)/sizeof(array[0]);
    Reverse r;
    r.reversing(array,size);
    
    return 0;
 }