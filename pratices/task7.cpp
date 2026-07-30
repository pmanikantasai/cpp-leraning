//Print reverse
# include <iostream>

using namespace std;

int main (){
    int list [5]={1,2,3,4,5};
    int size =sizeof(list)/sizeof(list[0]);
    for (int i =size -1;i>=0;i-- ){
        cout << list[i] << " ";
    }
    return 0;
}