#include <bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        int count1 = 0;
        int countMinus1 = 0;
        for(int i=0; i<n; i++){
            cin>>nums[i];
            if(nums[i] == 1) count1++;
            else countMinus1++;
        }
        int opReq= 0;
        if(count1 < countMinus1){
            int diff =  (countMinus1 - count1 +1)/2;
            countMinus1 -= diff;
            count1 += diff;
            opReq += diff;
        }
        if(countMinus1%2 == 1) {
            opReq += 1;
        }
        cout<<opReq<<endl;
    }
    return 0;
}