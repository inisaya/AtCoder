#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define all(v) v.begin(),v.end()
#define inf 1000000000000000000//1e18
#define ninpo ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz(cntainer) (int)cntainer.size()
#define tc int t;cin>>t;for(int i=0;i<t;++i)
#define ll long long
#define pii pair<int,int>
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> rows[n];//0indx
    map<int,int> nokarw;
    int a,b,c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a;
            rows[i].push_back(a);
            nokarw[a]=i;
        }
    }
    vector<int> ansrwind;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        ansrwind.push_back(nokarw[a]);
    }
    for (int i = 0; i < m-1; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cin>>a;
        }
    }
    for (auto rr : ansrwind)
    {
        auto v=rows[rr];
        for (auto &&i : v)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    

}
int main()
{
   ninpo;
   tc
    solve();
}