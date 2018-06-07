#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include <queue>
#include<stack>
#include<set>

using namespace std;
int main()
{
	long n,a,b,i,m,s1,x,p,t=1,res;
	while(scanf("%ld",&n)!=EOF)
	{
		if(n==0)
			break;
		vector<long> v[10001];
		set<long> st;
		for(i=0;i<n;i++)
		{
			scanf("%ld%ld",&a,&b);
			v[a].push_back(b);
			v[b].push_back(a);
			st.insert(a);
			st.insert(b);
		}
		while(scanf("%ld%ld",&s1,&m)!=EOF)
		{
			long cu[32]={0},s=0,c=0;
			int color[100001]={0};
			if(s1==0&&m==0)
				break;
			queue<long> q;
			q.push(s1);
			color[s1]=1;
			cu[0]=1;
			while(q.size()!=0)
			{
				if(cu[s]==0)
					s=s+1;
				x=q.front();
				q.pop();
				cu[s]=cu[s]-1;
				if(s<=m)
					c=c+1;
				for(i=0;i<v[x].size();i++)
				{
					p=v[x][i];
					if(color[p]==0)
					{
						q.push(p);
						color[p]=1;
						cu[s+1]=cu[s+1]+1;
					}
				}
			}
			res=st.size()-c;
			printf("Case %ld: %ld nodes not reachable from node %ld with TTL = %ld.\n",t++,res,s1,m);
		}
	}
  return 0;
}
