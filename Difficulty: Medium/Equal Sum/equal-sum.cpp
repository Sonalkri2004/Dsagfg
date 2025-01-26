//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        // code here
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     int leftsum=0;
        //     for(int j=0;j<i;j++){
        //         leftsum+=arr[j];
        //     }
        //     int rightsum=0;
        //     for(int j=i+1;j<n;j++){
        //         rightsum+=arr[j];
        //     }
        //     if(leftsum==rightsum){
        //         return "true";
        //     }
        // }
        // return "false";
        
        int n = arr.size();
  
    vector<int> pref(n, 0);
      vector<int> suff(n, 0);

    // Initialize the ends of prefix and suffix array
    pref[0] = arr[0];
    suff[n - 1] = arr[n - 1];

    // Calculate prefix sum for all indices
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + arr[i];

    // Calculating suffix sum for all indices
    for (int i = n - 2; i >= 0; i--) 
        suff[i] = suff[i + 1] + arr[i];

    // Checking if prefix sum is equal to suffix sum
    for (int i = 0; i < n; i++) {
        if (pref[i] == suff[i]) 
            return "true";
    }
      
      // if equilibrium index doesn't exist
    return "false";
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        string res = obj.equilibrium(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends