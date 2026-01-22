#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
    long long k=2,ans=0;
    for(int i=1;i<=n;i++){
        ans += k;
        k *= 2;
    }
    cout<<ans<<"\n";
    return 0;
}