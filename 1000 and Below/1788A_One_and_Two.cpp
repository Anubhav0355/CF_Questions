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
        int two = 0;
        fo(i,n) {
            cin>>arr[i];
            if(arr[i] == 2) {
                two++;
            }
        }

        if(two&1) {
            cout<<-1<<"\n";
        }
        else if(two == 0) {
            cout<<1<<"\n";
        }
        else {
            int temp=0;
            fo(i,n) {
                if(arr[i] == 2) {
                    temp++;
                    if(temp == two/2) {
                        cout<<i+1<<"\n";
                        break;
                    }
                }
            }
        }

    }

    return 0;
}