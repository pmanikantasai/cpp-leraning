// Maximum element
# include <iostream>

using namespace std;

int maxnum(int list[],int size){
    int max = list[0];

    for (int i = 1; i< size; i++){
        if(max < list[i]){
            max =list[i];
        }
    }
    return max; 
}

int main (){
    int list[5] = {20,10,5,30,7};
    int maxof =maxnum(list,5);
    cout <<"max num is : " << maxof << endl ;
    return 0;

}