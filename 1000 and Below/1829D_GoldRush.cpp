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

void fillSet(set<int> &s, int n) {
    if(n%3 == 0) {
        s.insert(n/3);
        s.insert(2*n/3);
        fillSet(s,n/3);
        fillSet(s,2*n/3);
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;

        if(m > n) {
            cout<<"NO\n";
            continue;
        }
        else if(m == n) {
            cout<<"YES\n";
            continue;
        }
        else if(n%3 != 0) {
            cout<<"NO\n";
            continue;
        }
        
        set<int> s;
        s.insert(n);
        fillSet(s,n);

        if(s.find(m) != s.end()) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
        s.clear();
    }

    return 0;
}