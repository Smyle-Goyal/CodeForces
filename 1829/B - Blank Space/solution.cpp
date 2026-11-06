#include <bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int> a(n);
       for(int i=0; i<n ;i++){
        cin>>a[i];
       } 
       int maximum = 0;
       int cnt = 0;
       for(int i=0; i<n; i++){
        cnt++;
        if(a[i] == 1) cnt =0;
        
        maximum = max(maximum, cnt);
 
       }
       cout<<maximum<<endl;
    }
    return 0;
}