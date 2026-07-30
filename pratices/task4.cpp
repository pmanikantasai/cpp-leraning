// sum of the array

#include <iostream>
using namespace std;

int numsum(int nums[], int size) {
    int sum =0;
    int avg;
    for (int i = 0; i < size; i++) {
        sum += nums[i]; 
    }
    avg = sum / size ;
    return avg ;
}
int main() {
    int list[10] = {1,2,3,4,5,6,7,8,9,0};
    float avg = numsum(list,10);
    cout << avg ;
    return 0;
}