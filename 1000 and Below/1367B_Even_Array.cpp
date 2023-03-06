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

        int odd = 0;
        int even = 0;

        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];

            if(arr[i]&1) {
                odd++;
            }
            else {
                even++;
            }
        }

        if(n==1) {
            if(arr[0]&1) {
                cout<<-1<<"\n";
            }
            else {
                cout<<0<<"\n";
            }
            continue;
        }

        bool isPossible  = true;
        int ans = 0;

        if(n&1) {
            if(even == odd+1) {
                int temp = 0;
                for(int i=0; i<n; i++) {
                    if(i&1 && arr[i]%2 == 0) {
                        temp++;
                    }
                    else if(i%2 == 0 && arr[i]&1) {
                        temp++;
                    }
                }
                ans = temp/2;
            }
            else {
                isPossible = false;
            }
        }
        else {
            if(even == odd) {
                int temp = 0;
                for(int i=0; i<n; i++) {
                    if(i&1 && arr[i]%2 == 0) {
                        temp++;
                    }
                    else if(i%2 == 0 && arr[i]&1) {
                        temp++;
                    }
                }
                ans = temp/2;
            }   
            else {
                isPossible = false;
            }
        }

        if(isPossible) {
            cout<<ans<<"\n";
        }
        else {
            cout<<-1<<"\n";
        }
    }

    return 0;
}