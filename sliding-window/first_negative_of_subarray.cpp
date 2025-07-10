#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n,k; 
    cin>>n>>k;
    vii v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    deque<int> dq;
    int i=0,j=0;
    while(j<n){
        if(v[j] < 0) dq.push_back(v[j]);
        if(j-i+1 == k){
            if(!dq.empty()) cout<<dq.front()<<" ";
            else cout<<0<<" ";
            if(v[i]<0) dq.pop_front();
            i++;
        }
        j++;
    }
}
love{
    Alamgir
    int t=1; 
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}