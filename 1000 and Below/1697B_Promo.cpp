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
    
    ll n,q;
    cin>>n>>q;

    ll arr[n];
    fo(i,n) {
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<int>());

    ll preSum[n] = {0};
    preSum[0] = arr[0];

    for(int i=1; i<n; i++) {
        preSum[i] = arr[i] + preSum[i-1]; 
    }

    while(q--) {
        int x,y;
        cin>>x>>y;

        if(x == y) {
            cout<<preSum[x-1]<<"\n";
            continue;
        }

        cout<<(preSum[x-1] - preSum[x-y-1])<<"\n";
    }

    return 0;
}