#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file  
#include <ext/pb_ds/tree_policy.hpp>  
#include <functional> // for less  
using namespace         std;
#define                 int long long
#define                 pb push_back
#define                 mp make_pair
#define st(arr,a)       memset(arr,a,sizeof arr)
#define                 nl cout<<'\n'
#define bitcount(x)     __builtin_popcountll(x)
const int MOD = 1000000007ll;
#define forn(i,a,b)     for(int i=a;i<=b;i++)
#define rfor(i,a,b)     for(int i=a;i>=b;i--)
#define all(x)          x.begin() , x.end()
#define pi pair<int,int>
#define X first
#define Y second
#define sz(A) (int)A.size()
#define N 1014159
#define  vi vector<int>
#define  v  vector
#define die exit(0)
#define alln(arr) arr+1 , arr+1+n
using namespace __gnu_pbds;  
typedef tree<int, null_type, less<int>, rb_tree_tag,  
            tree_order_statistics_node_update> oset; 

// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).

#define in input_int()
#define ins input_string()
bool sb(int a,int i){return (a&(1LL<<i))>0;}
int p2(int a){return (1LL<<a);}
int input_int(){int a;cin>>a;return a;}
string input_string(){string s;cin>>s;return s;}
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int ceil(int a,int b){return (a+b-1)/b;}
int ct,visited[N],ans;
vi adj[N];
int n,m,k,a,b,c,d,x,y,arr[N];
void clr()
{
    forn(i,0,n+10)adj[i].clear(),visited[i]=0,arr[i]=0;
}


string s;
void solve()
{
    
}


signed main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    int t = 1;
    //cin>>t;
    forn(i,1,t)
    {
        //cout<<"Case #"<<i<<": ";
        solve();
        nl;
    }



    return 0;

}
//       clang++ c.cpp ; ./a.out < a.txt ;  