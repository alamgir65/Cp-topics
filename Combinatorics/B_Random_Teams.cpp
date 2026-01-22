#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m; cin>>n>>m;
    ll max_ans = (n-m+1)*(n-m)/2;
    ll x = n/m;
    bool flag = (n%m!=0);
    ll min_ans = 0;
    if(flag){
        ll y = n%m;
        min_ans += ((x+1)*x/2)*y;
        min_ans += (x*(x-1)/2)*(m-y);
    }else{
        min_ans += (x*(x-1)/2)*m;
    }
    cout<<min_ans<<" "<<max_ans<<"\n";
    return 0;
}