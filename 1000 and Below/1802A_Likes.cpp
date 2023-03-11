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

        int positive = 0;
        int negative = 0;

        while(n--) {
            int num;
            cin>>num;

            if(num > 0) {
                positive++;
            }
            else {
                negative++;
            }
        }

        //printing maximum values
        int i;
        for(i=1; i<=positive; i++) {
            cout<<i<<" ";
        }
        for(int j=i-1; j > (i-negative-1); j--) {
            cout<<j-1<<" ";
        }
        cout<<"\n";

        //printing minimum values
        for(int j=negative; j>0; j--) {
            cout<<"1 0 ";
        }

        positive -= negative;
        for(int j=1; j<=positive; j++) {
            cout<<j<<" ";
        }
        cout<<"\n";

    }

    return 0;
}