#include <bits\stdc++.h>
using namespace std;
int visibleBooks(vector<int> &ans, vector<int>& heights, int n){
    int cnt = 0;
    vector <int> leftBooks, middle, rightBooks;
    for(int i=0 ; i<n ; i++)  {
        if (i == 0 || heights[i] != heights[i - 1]) {
                leftBooks.push_back(heights[i]);
                cnt++;
            }
            else if (i == 1 || heights[i] != heights[i - 2]) {
                rightBooks.push_back(heights[i]);
                cnt++;
            }
            else  middle.push_back(heights[i]);
        }
        for(int i=0 ; i<leftBooks.size() ; i++) ans.push_back(leftBooks[i]);
        for(int i=0 ; i<middle.size() ; i++) ans.push_back(middle[i]);   
        for(int i = rightBooks.size()-1; i>=0; i--) ans.push_back(rightBooks[i]); 
 
        return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> heights(n);
        for(int i=0; i<n; i++){
            cin>>heights[i];
        }
        sort(heights.begin(), heights.end());
        vector<int> ans;
        cout<< visibleBooks(ans, heights,n)<<endl;
        
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}