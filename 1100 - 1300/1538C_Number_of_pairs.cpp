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
        ll n,l,r;
        cin>>n>>l>>r;

        ll arr[n];
        fo(i,n) cin>>arr[i];

        sort(arr,arr+n);

        ll ans = 0;
        fo(i,n) {
            ans += lower_bound(arr,arr+i,l-arr[i]) - arr;
            ans -= upper_bound(arr,arr+i,r-arr[i]) - arr;
        }

        cout<<abs(ans)<<"\n";
    }

    return 0;
}