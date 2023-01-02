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

        fo(i,n) {
            cin>>arr[i];
        }

        int minDiff = INT_MAX;

        fo(i,n) {
            fo(j,n) {
                if(i==j) {
                    continue;
                }
                else {
                    if(abs(arr[i] - arr[j]) < minDiff) {
                        minDiff = abs(arr[i] - arr[j]);
                    }

                    if(minDiff == 0) {
                        break;
                    }
                }
            }
        }

        cout<<minDiff<<"\n";

    }

    return 0;
}