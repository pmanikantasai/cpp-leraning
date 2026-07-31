# include <iostream>
using namespace std;

int *pointerofarray (int nums){
   int *numbers = new int [nums];// creating dynamic memory of array
   for (int i =0;i<nums;i++){
    numbers[i]=(i+1)*2;
   }
   return numbers;
}
int main (){
    int * even = pointerofarray(10);
    for (int i =0;i<10;i++){
        cout << even[i] << " ";
    }
    delete []even;

    return 0;
}