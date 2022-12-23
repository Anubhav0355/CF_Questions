#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        int sum = 0;
        int ans = 21;

        for(int i=0; i<n; i++) {
            cin>>arr[i];
            sum += arr[i];
        }

        if(sum&1) {
            for(int i=0; i<n; i++) {
                int currentAns = 0;
                int temp = arr[i];

                if(temp&1) {
                    while(temp&1) {
                        currentAns++;
                        temp /= 2;
                    }
                }
                else {
                    while(!(temp&1)) {
                        currentAns++;
                        temp /= 2;
                    }
                }
                
                ans = min(ans,currentAns);
            }
        }
        else {
            ans = 0;
        }

        cout<<ans<<"\n";
        
    }

    return 0;
}