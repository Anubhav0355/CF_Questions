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

        int matrix[n][n-1];
        fo(i,n) {
            fo(j,n-1) {
                cin>>matrix[i][j];
            }
        }

        int first,prev,ans;
        first = matrix[0][0];

        if(matrix[1][0] != first) {
            prev = first;
            first = matrix[1][0];

            if(matrix[2][0] == first) {
                ans = first;
            }
            else {
                ans = prev;
            }
        }
        else {
            ans = first;
        }

        cout<<ans<<" ";

        for(int i=0; i<n; i++) {
            if(matrix[i][0] != ans) {
                for(int j=0; j<n-1; j++) {
                    cout<<matrix[i][j]<<" ";
                }
            }
        }

        cout<<"\n";

    }

    return 0;
}