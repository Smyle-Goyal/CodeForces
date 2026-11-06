#include <bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b > d){
            cout<<-1<<endl;
        }else{
            int ans = d-b;
            a += ans;
            if( a < c){
                cout<<-1<<endl;
            }else{
                ans += a-c;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}