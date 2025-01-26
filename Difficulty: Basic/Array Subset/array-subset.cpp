//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        int n=a.size();
        int m=b.size();
        // int j=0;
        // while(j<m){
        //     for(int i=0;i<n;i++){
        //         if(b[j]==a[i]){
        //             j++;
        //         }
                 
        //     }
        // }
        // return true;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int i=0,j=0;
        while(i<n && j<m){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(j==m){
        return true;
    }
    return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a1, a2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a1.push_back(number);
        }
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            a2.push_back(number);
        }
        Solution s;
        bool ans = s.isSubset(a1, a2);
        if (ans) {
            cout << "true"
                 << "\n";
        } else {
            cout << "false"
                 << "\n";
        }
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends