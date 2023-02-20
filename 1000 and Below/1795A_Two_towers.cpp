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

        string s,t;
        cin>>s>>t;

        fo(i,t.size()) {
            s.push_back(t[t.size()-1-i]);
        }

        int counter = 0;

        fo(i,n+m-1) {
            if(s[i] == s[i+1]) {
                counter++;
            }
        }

        if(counter > 1) {
            cout<<"NO\n";
        }
        else {
            cout<<"YES\n";
        }
    }

    return 0;
}