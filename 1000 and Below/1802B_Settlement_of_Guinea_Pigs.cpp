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

        int unknown = 0, known = 0, ans = 0;
        int x;

        for(int i=0; i<n; i++) {
            cin>>x;

            if(x == 2) {
                known = unknown + known;
                if(known > 0) {
                    ans = max(ans,(known+2)/2);
                }
                unknown = 0;
            }
            else {
                unknown++;
                if(known > 0) {
                    ans = max(ans,(known+2)/2 + unknown);
                }
                else {
                    ans = max(ans,unknown);
                }
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}