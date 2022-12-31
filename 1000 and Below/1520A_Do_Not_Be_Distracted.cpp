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
        
        string str;
        cin>>str;

        bool willBeSuspicious = false;

        fo(i,str.size()-1) {
            if(str[i] != str[i+1]) {
                int index = str.find(str[i],i+2);
                
                if(index != string::npos) {
                    willBeSuspicious = true;
                    break;
                }
                else {
                    continue;
                }
            }
        }

        if(willBeSuspicious) {
            cout<<"NO\n";
        }
        else {
            cout<<"YES\n";
        }

    }

    return 0;
}