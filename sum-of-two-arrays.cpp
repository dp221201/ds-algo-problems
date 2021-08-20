#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>a2[i];

    }
    int n3=n1>n2? n1:n2;
    int sum[n3];
    int c=0;
    int i=n1-1;
    int j=n2-1;
    int k=n3-1;
    while(k>=0){
        int d=c;
        while(i>=0){
            d+=a1[i];

        }
        while(j>=0){
            d+=a2[j];

        }
        c=d/10;
        d=d%10;
        sum[k]=d;
        i--;
        j--;
        k--;

    }
    if(c!=0){
        cout<<c;

    }
    for(int val:sum){
        cout<<val;
    }

    


    return 0;
}
