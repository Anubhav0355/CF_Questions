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
    
    ll s,n;
    cin>>s>>n;

    vpii vp;
    while(n--) {
        int x,y;
        cin>>x>>y;
        vp.pb(mp(x,y));
    }

    sort(all(vp));

    bool isPossible = true;

    fo(i,vp.size()) {
        if(s <= vp[i].first) {
            isPossible = false;
            break;
        }
        else {
            s += vp[i].second;
        }
    }

    if(isPossible) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }

    return 0;
}