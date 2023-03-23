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
    
    string str;
    cin>>str;

    int found = 0;
    string friendNames[5] = {"Danil","Olya","Slava","Ann","Nikita"};

    int index;
    int i=0;

    while(i < str.size()) {
        index = str.find(friendNames[0],i);
        if(index != string::npos) {
            found++;
            i = index + friendNames[0].size();
        }
        else {
            break;
        }
    }

    i = 0;
    while(i < str.size()) {
        index = str.find(friendNames[1],i);
        if(index != string::npos) {
            found++;
            i = index + friendNames[1].size();
        }
        else {
            break;
        }
    }

    i = 0;
    while(i < str.size()) {
        index = str.find(friendNames[2],i);
        if(index != string::npos) {
            found++;
            i = index + friendNames[2].size();
        }
        else {
            break;
        }
    }

    i = 0;
    while(i < str.size()) {
        index = str.find(friendNames[3],i);
        if(index != string::npos) {
            found++;
            i = index + friendNames[3].size();
        }
        else {
            break;
        }
    }

    i = 0;
    while(i < str.size()) {
        index = str.find(friendNames[4],i);
        if(index != string::npos) {
            found++;
            i = index + friendNames[4].size();
        }
        else {
            break;
        }
    }

    if(found == 1) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}