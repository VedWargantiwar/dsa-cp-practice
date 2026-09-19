#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        long long sum = 0;
        for(int i = 0; i < n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        sort(arr,arr + n);
        long long ans = 0;
        long long sm = 0;
        for(long long i = 1; i <= n; i++){
            sm += arr[n - i];
            ans = max(ans,(sum*(i) + sm*(n - 2 * i)));
        }
        cout<<ans<<'\n';
    }
    return 0;
}