# include <iostream>

using namespace std;

int main (){
    int nums [] ={1,2,3,4,5,6,7};
    int size = sizeof (nums) / sizeof (nums[0]) ;

    for (int i : nums){
        cout << i << endl;
    }
    return 0;
}