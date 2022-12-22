#include<bits/stdc++.h>
using namespace std;

bool checkBeautiful(int arr[][2]) {
    if(arr[0][0] < arr[0][1] && arr[0][1] < arr[1][1] && arr[0][0] < arr[1][0] && arr[1][0] < arr[1][1]) {
        return true;
    }
    return false;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    
    int arr[2][2];
    
    while(t--) {
        
        for(int i=0; i<2; i++) {
            for(int j=0; j<2; j++) {
                cin>>arr[i][j];
            }
        }
        
        bool isBeautiful = false;
        
        if(checkBeautiful(arr)) {
            isBeautiful = true;
        }
        else {
            for(int i=0; i<4; i++) {
                swap(arr[0][0],arr[1][0]);
                swap(arr[0][1],arr[1][1]);
                swap(arr[0][1],arr[1][0]);
                
                if(checkBeautiful(arr)) {
                    isBeautiful = true;
                    break;
                }
                else {
                    continue;
                }
            }
        }
        
        if(isBeautiful) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    
    return 0;
}