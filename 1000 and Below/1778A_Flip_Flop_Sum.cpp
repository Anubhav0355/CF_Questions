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

        bool consecutiveMinus = false;
        bool minusOne = false;
        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        if(arr[n-1] == -1) {
            minusOne = true;
        }

        for(int i=0; i<n-1; i++) {

            if(arr[i] == -1) {
                minusOne = true;
            }

            if(arr[i] == -1 && arr[i+1] == -1) {
                consecutiveMinus = true;
                arr[i] *= -1;
                arr[i+1] *= -1;
                break;
            }
        }

        int sum=0;
        for(int i=0; i<n; i++) {
            sum += arr[i];
        }

        if(consecutiveMinus) {
            cout<<sum<<"\n";
        }
        else {
            if(minusOne) {
                cout<<sum<<"\n";
            }
            else {
                cout<<sum-4<<"\n";
            }
        }

    }

    return 0;
}