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
    
    set<int> s;
    int n,m;
    cin>>n>>m;

    int arr[n],ans[n];

    fo(i,n) {
        cin>>arr[i];
    }

    for(int i=n-1; i>=0; i--) {
        s.insert(arr[i]);
        ans[i] = s.size();
    }

    fo(i,m) {
        int li;
        cin>>li;

        cout<<ans[li-1]<<"\n";

    }

    return 0;
}