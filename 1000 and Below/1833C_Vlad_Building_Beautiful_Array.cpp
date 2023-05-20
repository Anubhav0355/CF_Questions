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
        vector<int> oddNumbers,evenNumbers;
        int odd = 0, even = 0;
        fo(i,n) {
            cin>>arr[i];
            if(arr[i]&1) {
                odd++;
                oddNumbers.pb(arr[i]);
            }
            else {
                even++;
                evenNumbers.pb(arr[i]);
            }
        }

        if(odd == 0 || even == 0) {
            cout<<"YES\n";
            continue;
        }

        sort(all(evenNumbers));
        sort(all(oddNumbers));

        if(evenNumbers[0] > oddNumbers[0]) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }

    }

    return 0;
}