/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include<set>
#include<string>

#define pi 2*acos(0.0)
#define eps 1e-9
#define mem(x,v) memset(x,v,sizeof(x))

using namespace std;

string a[30];
long n;

int color[30][30];
int dx[]={0,0,1,-1,1,-1,1,-1},dy[]={1,-1,0,0,1,-1,-1,1};

void dfs(long i, long k)
{
    if(i>=n||k>=n||i<0||k<0)
        return ;
    if(color[i][k]==1||a[i][k]=='0')
        return ;

    color[i][k]=1;

    for( int j=0; j<8; j++)
         dfs(i+dx[j],k+dy[j]);
}

int main()
{
    long i,k,j,res,tc=1;
    while(cin>>n)
    {
        res=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        for(k=0;k<n;k++)
        {
            if(a[i][k]=='1'&&color[i][k]==0)
            {
                res=res+1;
                dfs(i,k);
            }
        }
        cout<<"Image number "<<tc++<<" contains "<<res<<" war eagles."<<endl;
        memset(color,0,sizeof(color));

    }
	return 0;
}
