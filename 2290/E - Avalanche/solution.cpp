#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int> piles(n);
        for(int i=0 ; i<n ; i++) cin>>piles[i];
        
 
        int winner = 0;
        for(int i=0 ; i<n ; i++) {
            if(i % (k+1) == 0) {
                int temp = piles[i]%2;
                winner = winner ^ temp;
            }
        }
 
        if(winner != 0) cout<< "Alice"<<endl;
        else cout<<"Bob"<<endl;
        
    }
    return 0;
}