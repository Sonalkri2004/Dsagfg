//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to calculate sum of all numbers present in a string.
    int findSum(string& s) {

        // Your code here
        int n=s.length();
        string res=" ";
        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                res+=s[i];
            }
            else{
                sum+=atoi(res.c_str());
                res=" ";
            }
        }
        return sum+atoi(res.c_str());
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    // input alphanumeric string
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.findSum(str);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends