#include <bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int start = 0;
        int end = n-1;
        int ans = 0;
        while(start<end){
            if(s[start] != s[end]){
                start++; end--;
            }else{
                ans = end-start+1;
                break;
            }
        }
        if( ans == 0 && n%2==1) cout<<1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}