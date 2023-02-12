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

    int num1,num2,temp;
    cin>>num1>>num2;

    if(num1&1 && num2&1) {
        for(int i=0; i<n-2; i++) {
            cin>>temp;
            if(temp%2==0) {
                cout<<i+3;
                break;
            }
        }
    }
    else if(num1%2 == 0 && num2%2 == 0) {
        for(int i=0; i<n-2; i++) {
            cin>>temp;
            if(temp&1) {
                cout<<i+3;
                break;
            }
        }
    }
    else {
        cin>>temp;
        if(temp&1) {
            if(num1%2==0) {
                cout<<1;
            }
            else {
                cout<<2;
            }
        }
        else {
            if(num1&1) {
                cout<<1;
            }
            else {
                cout<<2;
            }
        }
    }

    return 0;
}