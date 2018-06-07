/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include<bits/stdc++.h>

#define pb push_back
#define mp make_pair

#define pi 2*acos(0.0)
#define eps 1e-9
#define mem(x,v) memset(x,v,sizeof(x))

using namespace std;

struct node
{
    long x,y,w;
};
bool operator<(const node &a, const node &b)
{
    return a.w<b.w;
}

vector<node> v;
long pr[100000];

long Find(long r)
{
   if(pr[r]==r)
       return r;
   else
       return Find(pr[r]);
}

long mst(long n)
{
    long i,x,y,cnt=0,s=0;
    for(i=0;i<=n;i++)
        pr[i]=i;
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        x=v[i].x;
        x=Find(x);
        y=v[i].y;
        y=Find(y);
        if(x!=y)
        {
            pr[x]=y;
            s=s+v[i].w;
            cnt++;
            if(cnt==n-1)
                break;
        }
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);

    long i,j,k,n,m,x,y,w,res=0;

    node p;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        p.x=x;
        p.y=y;
        p.w=w;
        v.push_back(p);
    }
    res=mst(n);
    cout<<res<<endl;

	return 0;
}
