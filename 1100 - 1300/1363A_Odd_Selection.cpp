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
        int n,x;
        cin>>n>>x;
        int temp = n;

        int even = 0,odd = 0;
        while(temp--) {
            int num;
            cin>>num;
            if(num&1) {
                odd++;
            }
            else {
                even++;
            }
        }

        if(x == n) {
            if(odd&1) {
                cout<<"YES\n";
            }
            else {cout<<"NO\n";}
        }
        else {
            if(x&1) {
                if(odd > 0) {
                    cout<<"YES\n";
                }
                else {
                    cout<<"NO\n";
                }
            }
            else {
                if(odd > 0 && even > 0) {
                    cout<<"YES\n";
                }
                else {
                    cout<<"NO\n";
                }
            }
        }

    }

    return 0;
}