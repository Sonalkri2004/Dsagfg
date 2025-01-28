//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        int n=s.length();
        string res=" ";
        for(int i=0;i<n;i++){
            if((s[i]>='a'&& s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                res+=s[i];
            }
        }
        if(res!=" ") return res;
        return "-1";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.removeSpecialCharacter(s) << "\n";
    
cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends