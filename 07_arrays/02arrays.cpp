#include <iostream>
using namespace std;

// int evennums(int num[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << num[i] << endl;
//     }
//     return 0;
// }

int evennums(int nums[],int size){
    for (int i = 0; i< size ; i++){
        if(nums[i]%2==0){
            cout << nums [i] << endl;
        }
    }
    return 0;
}

int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int size =sizeof (numbers)/ sizeof numbers[0];
    evennums(numbers,size);
    return 0;
}