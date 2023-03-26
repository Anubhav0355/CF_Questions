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
        int n,m;
        cin>>n>>m;

        int ans = 0;

        vector<string> vs;
        fo(i,n) {
            string str;
            cin>>str;
            vs.pb(str);
        }

        fo(i,n) {
            
            if(vs[i][m-1] == 'R') {
                ans++;
            }

            if(i == n-1) {
                fo(j,m) {
                    if(vs[i][j] == 'D') {
                        ans++;
                    }
                }
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}