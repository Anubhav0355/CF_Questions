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
    
    int n;
    cin>>n;

    vector<pair<string,int>> vp;

    string str;
    cin>>str;

    vp.pb(mp(str,1));
    vp.pb(mp("temp",0));

    n--;

    while(n--) {
        string temp;
        cin>>temp;

        if(temp == str) {
            vp[0].second++;
        }
        else {
            if(vp[1].first != temp) {
                vp[1].first = temp;
            }
            vp[1].second++;
        }
    }

    if(vp[0].second > vp[1].second) {
        cout<<vp[0].first;
    }
    else {
        cout<<vp[1].first;
    }



    return 0;
}