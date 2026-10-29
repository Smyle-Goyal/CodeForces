#include <bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        unordered_map<int,int> freq;
        for(int i = 0; i<n; i++){
            freq[arr[i]]++;
        }
 
        if(freq.size() > 2) cout<<"NO"<<endl;
        else if(freq.size() <= 1) cout<<"Yes"<<endl;
        else{
           auto it = freq.begin();
            int first = it->second; 
            it++;
            int second = it->second;
            if(first == second || first-1 == second || first == second-1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            }
        }
        return 0;
    }