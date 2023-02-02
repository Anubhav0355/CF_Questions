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

        int arr[n];
        fo(i,n) {
            cin>>arr[i];
        }

        vi v;

        fo(i,n) {
            if(arr[i]%2==0) {
                v.pb(arr[i]);
            }
        }

        fo(i,n) {
            if(arr[i]&1) {
                v.pb(arr[i]);
            }
        }

        int ans = 0;

        fo(i,v.size()) {
            for(int j=i+1; j<v.size(); j++) {
                if(__gcd(v[i],v[j]*2) > 1) {
                    ans++;
                }
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}