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

        int a[n],b[n],c[n];
        fo(i,n) cin>>a[i];
        fo(i,n) cin>>b[i];
        fo(i,n) c[i] = a[i];

        sort(c,c+n);
        sort(b,b+n);

        multimap<int,int> mp;
        fo(i,n) {
            mp.insert({c[i],b[i]});
        }

        // for(auto x : mp) {
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }

        fo(i,n) {
            auto it = mp.lower_bound(a[i]);
            cout<<it->second<<" ";
            mp.erase(it);
        }
        cout<<"\n";

    }

    return 0;
}