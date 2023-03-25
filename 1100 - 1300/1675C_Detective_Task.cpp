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
        int ans = 0;
        string str;
        cin>>str;

        int firstZero = str.size()-1;
        int lastOne;

        for(int i=str.size()-1; i>=0; i--) {
            if(str[i] == '0') {
                firstZero = i;
            }
        }

        for(int i=firstZero; i>=0; i--) {
            ans++;
            if(str[i] == '1') {
                break;
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}