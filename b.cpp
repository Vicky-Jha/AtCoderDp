#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n,k;
  cin>>n>>k;
  vector<int> h(n);
  for ( int i = 0; i < n; ++ i )
    cin >> h[i];

  vector<int> dp(n,INT_MAX);
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);
  for ( int i = 2; i < n; ++ i )
  {
    for ( int j = i-1,jump=0; j >= 0 && jump < k ; -- j, jump ++ )
    {
      dp[i] = min ( dp[i], dp[j] + abs(h[i] - h[j]) );
    }
  }
  cout<<dp[n-1];
    return 0;
}

