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

        ll minSkill1 = INT_MAX;
        ll minSkill2 = INT_MAX;
        ll minBoth = INT_MAX;
        ll minTime = -1;

        bool s1 = false, s2 = false;

        while(n--) {
            ll m;
            string str;
            cin>>m>>str;

            if(str == "01") {
                if(m < minSkill2) {
                    minSkill2 = m;
                }
                s1  = true;
            }
            else if(str == "10") {
                if(m < minSkill1) {
                    minSkill1 = m;
                }
                s2 = true;
            }
            else if(str == "11") {
                if(minBoth > m) {
                    minBoth = m;
                }
            }

            if(minSkill1 + minSkill2 > minBoth) {
                minTime = minBoth;
            }
            else if(minSkill1 + minSkill2 < minBoth) {
                minTime = minSkill1 + minSkill2;
            }
        }

        if((s1 && s2) || (minTime != INT_MAX)) {
            cout<<minTime<<"\n";
        }
        else {
            cout<<-1<<"\n";
        }

    }

    return 0;
}