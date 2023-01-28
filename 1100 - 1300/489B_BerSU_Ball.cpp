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
    cin>>n;

    int boy[n];
    fo(i,n) {
        cin>>boy[i];
    }

    cin>>m;
    int girl[m];
    fo(i,m) {
        cin>>girl[i];
    }

    sort(boy,boy+n);
    sort(girl,girl+m);

    int counter = 0;

    fo(i,n) {
        fo(j,m) {
            if(boy[i] == girl[j] || abs(boy[i]-girl[j]) == 1) {
                counter++;
                girl[j] = -999;
                break;
            }
        }
    }

    cout<<counter;

    return 0;
}