#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++) {
            cin >> arr[i];
        }
 
        sort(arr.begin() , arr.end());
        long long median = arr[n / 2];
        long long minCost = 0;
        for(int i=0 ; i<n ; i++) {
            minCost += abs(arr[i] - median);
        }
 
        long long minOpr = arr.back() - arr.front();
        cout << minCost << " " << minOpr << endl;
    }
    return 0;
}