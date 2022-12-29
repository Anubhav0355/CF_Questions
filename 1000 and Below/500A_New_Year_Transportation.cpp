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
    
    int n,t;
    cin>>n>>t;

    int arr[n];

    for(int i=1; i<n; i++) {
        cin>>arr[i];
    }

    int i=1;
    int jump;
    bool isPossible = false;

    while(i <= n) {
        
        if(i == t) {
            isPossible = true;
            break;
        }
        else if(i > t) {
            break;
        }
        else {
            i += arr[i];
        }
    }

    if(isPossible) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}
