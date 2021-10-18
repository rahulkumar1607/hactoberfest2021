#include<bits/stdc++.h>
using namespace std;

int solve(long long n, long long k, long long d, vector<long long> v){
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += v[i];
    if(sum < k)
        return 0;
    if(sum > (k*d))
        return d;
    
    return (sum/k);
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, k, d, n1;
        cin>>n>>k>>d;
        vector<long long> v;
        for(int i=0; i<n; i++){
            cin>>n1;
            v.push_back(n1);
        }
        cout<<solve(n, k, d, v)<<endl;
    }
}