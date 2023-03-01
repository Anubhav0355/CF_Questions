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

        int l=-1,r,sum=0;

        for(int i=0; i<n; i++) {
            int num;
            cin>>num;

            if(num%x) {
                if(l==-1) {
                    l = i;
                }
                r = i;
            }

            sum += num;

        }

        if(sum%x) {
            cout<<n<<"\n";
        }
        else if(l==-1) {
            cout<<-1<<"\n";
        }
        else {
            cout<<(n-min(l+1,n-r))<<"\n";
        }


    }

    return 0;
}