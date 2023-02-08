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

        int front = 0;
        int back = str.size()-1;

        while(front < back) {
            if((str[front] == '0' && str[back] == '1') || (str[front] == '1' && str[back] == '0')) {
                front++;
                back--;
            }
            else {
                break;
            }
        }

        int ans = back - front + 1;

        cout<<ans<<"\n";

    }

    return 0;
}