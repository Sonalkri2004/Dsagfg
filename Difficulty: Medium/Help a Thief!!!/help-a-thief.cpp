//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        vector<pair<int, int>> goldBoxes;
    for (int i = 0; i < N; i++) {
        goldBoxes.push_back({B[i], A[i]});
    }

    // Sort the goldBoxes based on the number of gold coins per plate in descending order
    sort(goldBoxes.rbegin(), goldBoxes.rend());

    int totalGoldCoins = 0;
    for (auto &box : goldBoxes) {
        int coinsPerPlate = box.first;
        int platesAvailable = box.second;

        if (T == 0) break;

        int platesToTake = min(T, platesAvailable);
        totalGoldCoins += platesToTake * coinsPerPlate;
        T -= platesToTake;
    }

    return totalGoldCoins;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends