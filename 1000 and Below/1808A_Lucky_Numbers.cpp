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
        int l,r;
        cin>>l>>r;

        int maxDiff = -1;
        int ans;

        for(int i=l; i<= min(l+100,r); i++) {
            string str = to_string(i);
            int mx = (int)str[0];
            int mn = (int)str[0];

            for(int j=1; j<str.size(); j++) {
                mx = max(mx,(int)str[j]);
                mn = min(mn,(int)str[j]);

            }
            if(mx - mn > maxDiff) {
                maxDiff = mx-mn;
                ans = i;
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}