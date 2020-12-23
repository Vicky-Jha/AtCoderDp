#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, w;
  cin>>n>>w;
  vector<lli> dp(w+1);
  for ( int i = 0; i < n; ++ i )
  {
    int wt,v;
    cin>>wt>>v;
    for ( int j = w - wt; j >= 0; -- j )
    {
      dp[j + wt] = max (dp[j + wt], v + dp[j]);
    }
  }
  cout<<dp[w];


    return 0;
}
