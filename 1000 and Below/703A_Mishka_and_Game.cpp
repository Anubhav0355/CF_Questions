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

    int Mishka = 0,Chris = 0;
    int num1,num2;

    while(n--) {
        cin>>num1>>num2;
        if(num1 > num2) {
            Mishka++;
        }
        else if(num1 < num2) {
            Chris++;
        }
    }

    if(Mishka > Chris) {
        cout<<"Mishka";
    }
    else if(Mishka < Chris) {
        cout<<"Chris";
    }
    else {
        cout<<"Friendship is magic!^^";
    }

    return 0;
}