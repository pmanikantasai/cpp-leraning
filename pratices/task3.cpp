// print array
#include <iostream>
using namespace std;

// Function definition
void numprint(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        cout << nums[i] << endl;
    }
}

int main() {
    int list[] = {1,2,3,4,5,6,7,8,9,0};

    int size = sizeof(list) / sizeof(list[0]);

    numprint(list, size);

    return 0;
}