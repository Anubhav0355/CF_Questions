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

        int b[n-1];
        fo(i,n-1) {
            cin>>b[i];
        }

        int arr[n];
        arr[0] = b[0];

        for(int i=0; i<n-2; i++) {
            arr[i+1] = min(b[i],b[i+1]);
        }

        arr[n-1] = b[n-2];

        for(int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";

    }

    return 0;
}