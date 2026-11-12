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
        int cnt = 0;
        bool switchColor = false;   //  default red
        for(char ch: s){
            if(!switchColor){
                if(ch == 'B') {
                    cnt++;
                    switchColor = true;
                }
            }else{
                if(ch == 'R') {
                    cnt++;
                    switchColor = false;}
            }
            switchColor = !switchColor;
        }
        cout<<cnt<<endl;
    }
    return 0;
}