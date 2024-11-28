//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int left = 0;
        int right = s.length() - 1;

    // Continue looping while the two pointers
    //  have not crossed each other
    while (left < right)
    {

        // If the characters at the current positions are not equal,
        // return 0 (not a palindrome)
        if (s[left] != s[right])
            return 0;

        // Move the left pointer to the right
        // and the right pointer to the left
        left++;
        right--;
    }

    // If no mismatch is found,
    // return 1 (the string is a palindrome)
    return 1;
        
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        string s;
        cin >> s; // Read the string

        Solution ob; // Create an instance of Solution
        if (ob.isPalindrome(s)) {
            cout << "true"; // Print true if palindrome
        } else {
            cout << "false"; // Print false if not a palindrome
        }
        cout << "\n~\n"; // Print newline after each result
    }

    return 0;
}

// } Driver Code Ends