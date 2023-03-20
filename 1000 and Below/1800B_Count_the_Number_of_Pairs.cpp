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
        int n,k;
        cin>>n>>k;

        int small[26] = {0}, big[26] = {0};

        string str;
        cin>>str;

        for(int i=0; i<str.size(); i++) {
            if(islower(str[i])) {
                small[str[i]-'a']++;
            }
            else {
                big[str[i] - 'A']++;
            }
        }

        int ans = 0;

        for(int i=0; i<26; i++) {
            if(small[i] > 0 && big[i] > 0) {
                ans += min(small[i],big[i]);
            }
        }

        for(int i=0; i<26 && k>0; i++) {

            int diff = abs(small[i] - big[i]);

            if(diff > 1) {
                int canMake = diff/2;
                if(canMake <= k) {
                    ans += canMake;
                    k -= canMake;
                }
                else {
                    ans += min(canMake,k);
                    k -= min(canMake,k);
                }
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}