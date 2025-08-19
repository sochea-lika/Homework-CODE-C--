#include<iostream>
using namespace std;

int countWords(string str){
    int n = str.length(); 
    bool newWord=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
           count++;
           newWord=1;
        }else{
            newWord=0;
        }
    }return count;
}
int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int result=countWords(input);
    return 0;
}