#include<bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    
    while(t--) {
        int k,n;
        cin>>k>>n;
        
        cout<<1<<" ";
        int currentNum = 1;
        
        for(int i=1; i<=k-1; i++) {
            if(n-currentNum-i+1 >= k-i) {
                currentNum += i;
            }
            else {
                currentNum++;
            }
            
            cout<<currentNum<<" ";
        }
        
        cout<<"\n";
    }
    
    return 0;
}