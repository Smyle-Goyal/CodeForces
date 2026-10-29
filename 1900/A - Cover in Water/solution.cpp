#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        int continuous = 0;
        bool chk = false;
        for(int i = 0; i<n; i++){
            if(s[i] == '.'){
                count++;
                continuous++;
            }else{
                continuous = 0;
            }
 
            if(continuous >= 3) {
                chk = true;
                break;
            }
           
        }
        if(chk) cout<<2<<endl;
        else cout<<count<<endl;
    }
    return 0;
}