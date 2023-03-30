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
        string a,s;
        cin>>a>>s;

        vi b;

        int i = s.size()-1;
        int j = a.size()-1;

        bool isPossible = true;

        while(i >= 0 && j >= 0) {
            if(a[j] - '0' <= s[i] - '0') {
                b.pb((s[i] - '0') - (a[j] - '0'));
                i--;
                j--;
            }
            else {
                int x = (s[i-1]-'0')*10 + (s[i] - '0');
                if( x > (a[j]-'0') && (x >=10 && x <= 18)) {
                    b.pb(x - (a[j] - '0'));
                    i -=2;
                    j--;
                }
                else {
                    isPossible = false;
                    break;
                }
            }
        }

        while(i >= 0) {
            b.pb((s[i] - '0'));
            i--;
        }

        while(j >= 0) {
            isPossible = false;
            break;
        }

        if(isPossible) {
            reverse(all(b));
            bool firstNonZero = false;
            for(auto x : b) {
                if(x > 0) {
                    firstNonZero = true;
                }

                if(firstNonZero) {
                    cout<<x;
                }
            }
            cout<<"\n";
        }
        else {
            cout<<-1<<"\n";
        }

    }

    return 0;
}