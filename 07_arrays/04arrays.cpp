// sum of the array

#include <iostream>
using namespace std;

int numsum(int nums[], int size) {
    int sum =0;
    for (int i = 0; i < size; i++) {
        sum += nums[i]; 
    }
    return sum ;
}
int main() {
    int list[10] = {1,2,3,4,5,6,7,8,9,0};
    int total = numsum(list,10);
    cout << total ;
    return 0;
}