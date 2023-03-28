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
    
    int n;
    cin>>n;

    int arr[n];
    fo(i,n) cin>>arr[i];

    sort(arr,arr+n);
    int x = arr[n-1];

    for(int i=1; i<=x; i++) {
        if(x%i == 0) {
            for(int j=0; j<n; j++) {
                if(i == arr[j]) {
                    arr[j] = -1;
                    break;
                }
            }
        }
    }

    sort(arr,arr+n);

    int y = arr[n-1];

    cout<<x<<" "<<y;

    return 0;
}