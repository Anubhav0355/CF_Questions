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
        string str;
        char ch;
        cin>>n>>ch>>str;

        bool done = false;

        for(int i=0; i<str.size(); i++) {
            if(str[i] >= ch) {
                cout<<str[i];
            }
            else {
                cout<<ch;
                for(int j=i; j<str.size(); j++) {
                    cout<<str[j];
                }
                cout<<"\n";
                done = true;
                break;
            }

            if(done) {
                break;
            }
        }

        if(!done) {
            cout<<ch<<"\n";
        }

    }

    return 0;
}