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
    
    int n,m;
    cin>>n>>m;

    vector<pair<string,string>> serverIP;
    vector<pair<string,string>> commandIP;

    while(n--) {
        string x,y;
        cin>>x>>y;
        serverIP.pb(mp(x,y));
    }

    while(m--) {
        string x,y;
        cin>>x>>y;
        commandIP.pb(mp(x,y));
    }

    fo(i,commandIP.size()) {
        int s = commandIP[i].second.length();
        string temp = commandIP[i].second.substr(0,s-1);

        fo(j,serverIP.size()) {
            if(temp == serverIP[j].second) {
                cout<<commandIP[i].first<<" "<<commandIP[i].second<<" #"<<serverIP[j].first<<"\n";
                break;
            }
        }
    }

    return 0;
}