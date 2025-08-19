#include <iostream>
#include <string>
 

using namespace std;

bool isPalindrome(string str) {
    string cleaned = "";
    
    

    // Check palindrome
    int left = 0, right = cleaned.size() - 1;
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: "<<endl;
    cin>>input;

    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}