/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include<bits/stdc++.h>

#define pb push_back
#define mp make_pair

#define pi 2*acos(0.0)
#define eps 1e-9
#define mem(x,v) memset(x,v,sizeof(x))

using namespace std;

int dx[]={0,0,1,-1,1,-1,1,-1},dy[]={1,-1,0,0,1,-1,-1,1},n,m;
string a[101];

void dfs(long i,long k, char ch)
{
    int j;
    if(i<0||k<0||i>=n||k>=m||a[i][k]!=ch||isdigit(a[i][k]))
        return ;
    a[i][k]='1';
    for(j=0;j<4;j++)
        dfs(i+dx[j],k+dy[j],ch);
}

int main()
{
   ios_base::sync_with_stdio(0);
   long i,k,j,t,tc,p;
   cin>>tc;
   for(j=1;j<=tc;j++)
   {
       long x[150]={0};
       cin>>n>>m;
       for(i=0;i<n;i++)
        cin>>a[i];

       for(i=0;i<n;i++)
       for(k=0;k<m;k++)
       {
           if(isalpha(a[i][k]))
           {
               x[a[i][k]]++;
               dfs(i,k,a[i][k]);

           }
       }
       long t=0;
       cout<<"World #"<<j<<endl;
       for(i='a';i<='z';i++)
       {
           p=0;
           char ch;
           for(k='a';k<='z';k++)
           {
               if(x[k]>p)
               {
                   p=x[k];
                   ch = k;
               }

           }
           if(p)
           {
               cout<<ch<<": "<<p<<endl;
               x[ch]=0;
           }
       }
   }
	return 0;
}
