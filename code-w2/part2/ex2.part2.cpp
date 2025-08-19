#include<iostream>
#include<string>

using namespace std;

string reverseString(string str) {
    int n = str.length(); 
    string reversed;


    for (int i = n-1; i >= 0; i--) {
        reversed+= str[i]; 
    }

    return reversed;
}


int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result=reverseString(input);
    cout<<result;
    return 0;
}