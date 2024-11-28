// C++ Program to Check if a Given String is Palindrome or Not

// C++ program to check whether the string
// is palindrome or not using loop
#include <bits/stdc++.h>
using namespace std;

void isPalindrome (string str) {
  
      // Specify the starting and ending indexes
    int left = 0, right = str.size() - 1;
  
      // Flag to terminate the loop if mismatch
      // characters found
      bool flag = true;
      
      // Till the left is less than right
    while (left < right) {

        // If any character not match, break the
        // loop, string is not palindrome
        if (str[left] != str[right]) {
            flag = false;
            break;
        }
        left++;
        right--;
    }
      
      if (flag)
        cout << "\"" << str
          << "\" is palindrome." << endl;
          
    else
        cout << "\"" << str
          << "\" is NOT palindrome." << endl;
}
  

int main() {
  
      // Checking if given strings are palindrome
      isPalindrome("ABCDCBA");
    isPalindrome("ABCD");            
    return 0;
}


// Output
// Palindrome
// Time Complexity: O(n), where n is the length of string.
// Auxiliary Space: O(1)