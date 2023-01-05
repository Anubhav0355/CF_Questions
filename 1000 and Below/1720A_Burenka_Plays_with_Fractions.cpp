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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a*d == c*b) {
            cout<<0<<"\n";
        }
        else if(((a*d) != 0 && (b*c)%(a*d) == 0) || ((b*c) != 0 && (a*d)%(b*c) == 0)) {
            cout<<1<<"\n";
        }
        else {
            cout<<2<<"\n";
        }

    }

    return 0;
}