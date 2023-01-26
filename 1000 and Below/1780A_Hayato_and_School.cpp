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

        int arr[n];
        int odd[4] = {0},even[3] = {0};
        int oddIndex=1,evenIndex=1;

        fo(i,n) {
            cin>>arr[i];

            if(arr[i]&1) {
                if(oddIndex == 4) {
                    continue;;
                }
                odd[oddIndex++] = i+1;
                
            }
            else {
                if(evenIndex == 3) {
                    continue;
                }
                even[evenIndex++] = i+1;
                
            }
        }

        if(odd[1] > 0 && odd[2] > 0 && odd[3] > 0) {
            cout<<"YES\n";
            for(int i=1; i<=3; i++) {
                cout<<odd[i]<<" ";
            }
            cout<<"\n";
        }
        else if((odd[1] > 0 && even[1] >0 && even[2] > 0)) {
            cout<<"YES\n";
            cout<<odd[1]<<" ";
            for(int i=1; i<=2; i++) {
                cout<<even[i]<<" ";
            }
            cout<<"\n";
        }
        else {
            cout<<"NO\n";
        }

    }

    return 0;
}