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
    
    int n,l;
    cin>>n>>l;

    double arr[n];
    fo(i,n) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    double minRadius = arr[0] - 0;
    if(minRadius < (l - arr[n-1])) {
        minRadius = l - arr[n-1];
    }

    fo(i,n-1) {
        if(abs(arr[i] - arr[i+1])/2.0 > minRadius) {
            minRadius = abs(arr[i] - arr[i+1])/2.00000;
        }
    }

    cout<<setprecision(9)<<minRadius;

    return 0;
}