#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
vector<vector<int>> adj;
vector<int> dp;
bitset<100001> visited;
void dfs(int v)
{
  visited[v] = 1;
  for ( int c : adj[v] )
  {
   if(!visited[c])
     dfs(c);
    dp[v] = max ( dp[v], dp[c] + 1 );
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  int n,m;
  cin>>n>>m;
  
  adj.resize(n+1);
  dp.resize(n+1);
  
  int a,b;
  
  for ( int i = 0; i < m; ++ i )
  {
    cin>>a>>b;
    adj[a].push_back(b);
  }
  
  for ( int i = 1; i <= n; ++ i )
    if(!visited[i])
      dfs(i);

  
  cout<<*max_element(dp.begin(),dp.end());
  
 	
  return 0;
}

//4 5
//1 2
//1 3
//3 2
//2 4
//3 4

//1 -> 2 -> 3
//3 -> 2 -> 4
//2 -> 4
