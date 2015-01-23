/*
   nitesh kumar ( codeshaker )
*/

/**********START HERE ************/

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <vector>
#include <string>
#include <bitset>
#include <climits>
#include <complex>
typedef long long ll;
using namespace std;

#define pb push_back
#define nl puts ("")
#define ff first
#define ss second
#define mp make_pair
#define FOR(i,x,y) for(int i = (x) ; i <= (y) ; ++i)
#define ROF(i,x,y) for(int i = (y) ; i >= (x) ; --i)
#define CLR(x,y) memset(x,y,sizeof(x))
#define UNIQUE(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define NUMDIGIT(x,y) (((int)(log10((x))/log10((y))))+1)
#define SQ(x) ((x)*(x))
#define ABS(x) ((x)<0?-(x):(x))
#define FABS(x) ((x)+eps<0?-(x):(x))
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  vector<string> vs;
typedef  pair<int,int> pii;
typedef  pair<pii,int> ppi;
typedef  vector<pii> vpii;

#define mx7   10000007
#define mx6   1000006
#define mx5   100005
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mod   1000000007

/********** END HERE ***********/

ll dp[mx5+10];
int p[mx5+10];

inline int isSpaceChar(char c)
{
return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
}

inline int FAST_IO()
{
char ch;
int val=0;
ch=getchar();
while(isSpaceChar(ch))
ch=getchar();
val=0;
while(!isSpaceChar(ch))
{
val=(val*10)+(ch-'0');
ch=getchar();
}
return val;
}

int main(void)
{
    #ifndef ONLINE_JUDGE
   // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
    #endif
         ios::sync_with_stdio(false);
         int tc;
         tc=FAST_IO();
         while(tc--)
         {
             int n,s=0;
             n=FAST_IO();
             cout<<"n"<<n<<endl;

             FOR(i,0,9)
             p[i]=0;
             FOR(i,1,n)
             {
                 cout<<"i "<<i<<endl;
                 p[n+10-i]=FAST_IO();
             }
             cout<<"cc";
             CLR(dp,0);

             int s1,s2,s3;

             FOR(i,10,n+9)
             {
                 cout<<"cc";
                 s1=0;
                 s1=p[i];
                 s2=s1+p[i-1];
                 s3=s2+p[i-2];

                 dp[i]=MAX(dp[i],MAX(s1+dp[i-2],MAX(s2+dp[i-4],s3+dp[i-6])));
                 cout<<" i "<<dp[i]<<endl;
             }

             printf("%lld\n",dp[n+9]);

           //  printf("%lld\n",ans);
         }

    return 0;
}

