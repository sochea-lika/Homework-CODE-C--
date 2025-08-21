#include<iostream>
using namespace std;
void remove(int arr[],int size){
    int newsize=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i];
            newsize+=1;
        }
    }
    cout<<endl;
    cout<<"newsize="<<newsize;

}
int main(){
    int n;
    cout<<"How many elemnt: ";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter index "<<i<<" ";cin>>arr[i];
    }
    remove(arr,n);
    return 0;
}