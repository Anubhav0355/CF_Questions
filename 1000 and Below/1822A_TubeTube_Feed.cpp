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
        int n,time;
        cin>>n>>time;

        int a[n],b[n];
        fo(i,n) {
            cin>>a[i];
        }

        fo(i,n) {
            cin>>b[i];
        }

        vpii vp;
        for(int i=0; i<n; i++) {
            vp.pb(mp(a[i],b[i]));
        }

        int ans = -1;
        int entertainment = 0;

        for(int i=0; i<vp.size(); i++) {
            if(vp[i].first <= time && vp[i].second > entertainment) {
                ans = i+1;
                entertainment = vp[i].second;
            }
            time--;
        }

        cout<<ans<<"\n";
    }

    return 0;
}