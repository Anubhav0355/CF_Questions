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
        ll n,m,h;
        cin>>n>>m>>h;

        vector<vector<int>> vv;
        for(int i=0; i<n; i++) {
            vector<int> temp;
            for(int j=0; j<m; j++) {
                int num;
                cin>>num;
                temp.pb(num);
            }
            vv.pb(temp);
        }

        for(int i=0; i<n; i++) {
            sort(vv[i].begin(),vv[i].end());
        }

        ll rudolfRank = 1;
        ll rudolfPoint = 0;
        ll rudolfPenalty = 0;

        ll currentTime = h;
        for(int i=0; i<vv[0].size(); i++) {
            if(vv[0][i] <= currentTime) {
                rudolfPoint++;
                rudolfPenalty += ((h - currentTime) + vv[0][i]);
                currentTime -= vv[0][i];
            }
        }

        for(int i=1; i<n; i++) {
            currentTime = h;
            ll tempPoint = 0;
            ll tempPenalty = 0;
            for(int j=0; j<m; j++) {
                if(vv[i][j] <= currentTime) {
                    tempPoint++;
                    tempPenalty += ((h-currentTime) + vv[i][j]);
                    currentTime -= vv[i][j];
                }
            }

            if(tempPoint > rudolfPoint) {
                rudolfRank++;
            }
            else if(tempPoint == rudolfPoint) {
                if(tempPenalty < rudolfPenalty) {
                    rudolfRank++;
                }
            }
        }

        cout<<rudolfRank<<"\n";

    }

    return 0;
}