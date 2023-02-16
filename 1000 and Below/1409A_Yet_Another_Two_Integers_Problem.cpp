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
        int a,b;
        cin>>a>>b;

        int diff = abs(a-b);
        int result = 0;

        if(diff == 0) {
            cout<<result<<"\n";
            continue;
        }

        if(diff >= 10) {
            result += diff/10;
            diff = diff%10;
        }

        if(diff != 0) {
            result += 1;
        }

        cout<<result<<"\n";

    }

    return 0;
}