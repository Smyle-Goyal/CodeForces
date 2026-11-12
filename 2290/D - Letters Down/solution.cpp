#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int operations = 0;
        while(true) {
            bool flag = true;
            char globalMaxima = 'a' - 1;
            for(int i = 0; i < n / 2; i++) {
                if(s[i] != s[n - i - 1]) {
                    flag = false;
                    char charMax = max(s[i], s[n - i - 1]);
                    globalMaxima = max(globalMaxima, charMax);
                }   
            }
 
            if(flag) {
                break; 
            }
            
            char goal = globalMaxima - 1;
            for(int j = 0; j < n; j++) {
                if(s[j] == globalMaxima) {
                    s[j] = goal;
                }
            }
            
            operations++;
        }
 
        cout << operations << endl;
    }
    return 0;
}