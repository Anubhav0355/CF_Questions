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

    int size = 100001;

    ll arr[size] = {0};

    for(int i=1; i<size; i++) {
        arr[i] = arr[i-1] + (2*i) + (i-1);
    }

    while(t--) {
        ll n;
        cin>>n;

        ll ans = 0;

        while(n >= 2) {
            int i = 1;
            while(arr[i] <= n) {
                i++;
            }

            //cout<<"arr[i] mila ye : "<<arr[i]<<"\n";

            ans += (n/arr[i-1]);
            n = (n%arr[i-1]);
        }

        cout<<ans<<"\n";

    }

    return 0;
}