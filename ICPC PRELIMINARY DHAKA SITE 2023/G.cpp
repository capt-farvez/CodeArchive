/* Bismillahir Rahmanir Raheem */
#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#define readFirst() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) (x/gcd(x,y))*y
#define pi M_PI
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define lpi(strt,en) for(ll i=strt; i<en; i++)
#define lpj(strt,en) for(ll j=strt; j<en; j++)
using namespace std;
const ll INF = 10e9;
const ll mod = 1e9 + 7;

/********* START *********/
void solve(){
    string s;
    cin >> s;
    ll b=s.size();

    ll r = 0;
    ll w = 0;

    for(ll i=0; i<b; i++){
        if(s[i]>='0' && s[i]<='6'){
            r+=s[i]-'0';
        }
        else{
            w++;
        }
    }

    ll ov=b/6;
    ll ovs=b%6;

    string over= " Over ";
    if(b>6){
        over= " Overs ";
    }
    string wc=" Wicket.";
    if(w>1){
        wc= " Wickets.";
    }
    string rn=" Run ";
    if(r>1){
        rn=" Runs ";
    }
    
    cout<<ov<<"."<<ovs<<over<<r<<rn<<w<<wc<<endl;
}
int main(){   
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    //cin.ignore();
    ll cnt=1;
    while (tCases--){
        //cout<<"Case "<<cnt<<": ";
        solve();
        //cout<<cnt<<endl;
       // cnt++;

    }
    return 0;
}