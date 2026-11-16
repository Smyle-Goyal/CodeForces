#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long minimum = LLONG_MAX;
        for(int i=1; i<n; i++){
            minimum = min(minimum, arr[i]- arr[i-1]);
        }
        if(minimum < 0) cout<<0<<endl;
        else cout<<(minimum/2) +1<<endl;
    }
    return 0;
}