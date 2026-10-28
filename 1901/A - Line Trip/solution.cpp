#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int minreq = arr[0] - 0;
        for(int i =1; i<n; i++){
            minreq = max(minreq, arr[i]- arr[i-1]);
        }
        if(minreq > 2*(x- arr[n-1])) cout<<minreq<<endl;
        else cout<< 2*(x- arr[n-1])<<endl;
    }
    return 0;
}