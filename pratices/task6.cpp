// count of even numbers
// count of odd numbers
#include <iostream>
using namespace std;
int countevennum(int list[],int size);
int countoddnum(int list[],int size);

int main (){
    int numbers[]={1,2,4,2,6,8,19,20,83,86};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int even=countevennum(numbers,size);
    int odd = countoddnum(numbers,size);
    cout<< even;
    cout << endl;
    cout << odd;
    return 0;
}
int countevennum(int list[],int size){
    int even_count =0;
    for (int i =0;i<size;i++){
        if(list[i]%2==0){
            cout<< list[i] << " ";
            even_count +=1;
        }  
    }
    return even_count;
}

int countoddnum(int list[],int size){
    int odd_count =0;
    for (int i =0;i<size;i++){
        if(list[i]%2!=0){
            cout<< list[i] << " ";
            odd_count +=1;
        }  
    }
    return odd_count;
}

