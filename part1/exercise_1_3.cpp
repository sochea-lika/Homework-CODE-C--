#include <iostream>
using namespace std;

int findMax(int arr[], int size){ 
    int max_num = arr[0]; 
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i];
        }
    }
    return max_num;
}
int main(){
    int arr[5];
    cout <<"Enter 5 numbers: ";
    for (int i= 0; i<5; i++){
        cin >>arr[i];
    }
int result= findMax(arr, 5);
cout <<"Max Num is:"<<result;
return 0;
}