# include <bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        a += (c+1)/2;
        b += c/2;
        if(a > b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}