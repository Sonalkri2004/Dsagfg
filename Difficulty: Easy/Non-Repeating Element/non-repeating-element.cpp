//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
    //     int n=arr.size();
    //     for (int i = 0; i < n; i++) {
    //     int j;
    //     // Checking if ith element is present in array
    //     for (j = 0; j < n; j++)
    //         if (i != j && arr[i] == arr[j])
    //             break;
    //     // if ith element is not present in array
    //     // except at ith index then return element
    //     if (j == n)
    //         return arr[i];
    // }
    // return 0;
    
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
        if (mp[arr[i]] == 1)
            return arr[i];
    return 0;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.firstNonRepeating(nums) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends