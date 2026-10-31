#include <bits\stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t; 
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int total = x+y+z;
        if(x>=y && x>=z){
            cout<< string(total,'P')<<endl;
        }
        else if(y>=x && y>=z){
            cout<< string(total,'R')<<endl;
        }else{
            cout<<string(total,'S')<<endl;
        }
 
    }
    return 0;
 
}