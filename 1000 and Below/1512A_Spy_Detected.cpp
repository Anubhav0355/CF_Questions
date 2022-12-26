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
        int arr[n+1];

        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }

        int first = arr[1];
        int last = arr[n];

        //spy is located in the middle of the array
        if(first == last) {
            for(int i=2; i<n; i++) {
                if(arr[i] != first) {
                    cout<<i<<"\n";
                }
            }
        }
        else {
            //this means last element is different
            if(arr[2] == first) {
                cout<<n<<"\n";
            }
            else {  //this means first element is different
                cout<<1<<"\n";
            }
        }

    }

    return 0;
}