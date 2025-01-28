//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        int n=string1.length();
        int m=string2.length();
        string res=" ";
        int hash[256]={0};
        for(int i=0;i<m;i++){
            hash[string2[i]]++;
        }
        for(int i=0;i<n;i++){
            if(hash[string1[i]]==0){
                res+=string1[i];
            }
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends