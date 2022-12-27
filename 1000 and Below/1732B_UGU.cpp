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

        string str;
        cin>>str;

        int flag=0,ans=0;

        for(int i=1; i<n; i++) {
            if(str[i] != str[i-1]) {
                //first transition from 1 to 0
                if(flag==0 && str[i] == '0') {
                    flag = 1;
                    ans++;
                }   
                else if(flag == 1) { // transition of 10 or 01
                    ans++;
                }
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}