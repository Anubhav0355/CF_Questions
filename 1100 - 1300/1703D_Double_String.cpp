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

        vector<string> vs;
        map<string,int> mp;
        vi v;

        fo(i,n) {
            string str;
            cin>>str;
            vs.pb(str);
            mp[str]++;
        }

        fo(i,n) {
            bool isPossible = false;
            for(int j=0; j<vs[i].size()-1; j++) {
                string temp = vs[i].substr(0,j+1);
                string temp2 = vs[i].substr(j+1);
                if(mp[temp] && mp[temp2]) {
                    v.pb(1);
                    isPossible = true;
                    break;
                }
            }
            if(!isPossible) {
                v.pb(0);
            }
        }

        for(auto x : v) {
            cout<<x;
        }
        cout<<"\n";
    }

    return 0;
}