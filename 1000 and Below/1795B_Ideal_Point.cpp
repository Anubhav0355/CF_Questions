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

        int n,k;
        cin>>n>>k;

        int maxL = -1; 
        int minR = 51;

        while(n--) {
            int l,r;
            cin>>l>>r;

            if(k >= l && k <= r) {
                maxL = max(maxL,l);
                minR = min(minR,r);
            }
        }

        if(maxL == minR) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }

    }

    return 0;
}