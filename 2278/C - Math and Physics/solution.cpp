#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        int sum = 0;
        bool greaterMiddle = false;
        bool greaterExist = false;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++) {
            int a;
            cin >> a;
            arr[i] = a;
            sum += a;
 
            if(a >= 2) {
                greaterExist = true;
                if(i > 0 && i < n-1) {
                    greaterMiddle = true;
                }
            }
        }
 
        if(n == 1) {
            cout << arr[0] << endl;
            continue;
        }
 
        if(!greaterExist) {
            cout << -1 << endl;
            continue;
        }
 
        if(greaterMiddle) {
            cout << sum - 1 << endl;
        }
        else {
            cout << sum - (n-1) << endl;
        }
 
    }
    return 0;
}