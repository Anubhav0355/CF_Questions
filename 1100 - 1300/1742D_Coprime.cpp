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
        map<int,int> mp1,mp2;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            mp1[arr[i]] = i;
            mp2[arr[i]] = i;
        }

        int ans = -1;

        for(auto x : mp1) {
            for(auto y : mp2) {
                if(__gcd(x.first,y.first) == 1) {
                    ans = max(ans,x.second+y.second+2);
                }
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}