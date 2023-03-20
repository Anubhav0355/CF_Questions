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

        ll a[n],b[n];
        fo(i,n) {
            cin>>a[i];
        }
        fo(i,n) {
            cin>>b[i];
        }

        ll diff = INT_MIN;
        fo(i,n) {
            diff = max(a[i]-b[i],diff);
        }

        if(diff < 0) {
            cout<<"NO\n";
            continue;
        }

        fo(i,n) {
            a[i] -= diff;
            if(a[i] < 0) {
                a[i] = 0;
            }
        }

        bool isPossible = true;

        fo(i,n) {
            if(a[i] != b[i]) {
                isPossible = false;
                break;
            }
        }

        if(isPossible) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
        
    }

    return 0;
}