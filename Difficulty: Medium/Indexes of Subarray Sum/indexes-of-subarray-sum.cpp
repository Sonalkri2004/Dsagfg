//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
         int n=arr.size();
        int l=0;
        int r=0;
        int csum=arr[l];
        while(r<n && l<=r)
        {
            if(csum==target)
            {
                return {l+1,r+1};
            }
            else if(csum<target)
            {
                r++;
                csum+=arr[r];
            }
            else
            {
                if(csum>target && r-l>0)
                {
                     csum-=arr[l];
                     l++;
                }
                else
                {
                    csum-=arr[l];
                    l++;
                    r++;
                    csum+=arr[r];
                }
            }
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends