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
    
    int n,m;
    cin>>n>>m;

    vector<pair<string,string>> vp;
    fo(i,m) {
        string a,b;
        cin>>a>>b;

        vp.pb(mp(a,b));
    }

    fo(i,n) {
        string word;
        cin>>word;

        fo(i,vp.size()) {
            if(vp[i].first == word || vp[i].second == word) {
                if(vp[i].first.size() <= vp[i].second.size()) {
                    cout<<vp[i].first<<" ";
                    break;
                }
                else {
                    cout<<vp[i].second<<" ";
                    break;
                }
            }
        }

    }

    return 0;
}