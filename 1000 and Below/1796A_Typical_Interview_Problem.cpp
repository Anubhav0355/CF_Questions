#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string fbString;
    for(int i=1; i<=1000; i++) {
        if(i%15 == 0) {
            fbString.push_back('F');
            fbString.push_back('B');
        }
        else if(i%3 == 0) {
            fbString.push_back('F');
        }
        else if(i%5 == 0) {
            fbString.push_back('B');
        }
    }
    
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        if(fbString.find(s) != string::npos) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
        
    }
    
}