/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include<bits/stdc++.h>

#define pi 2*acos(0.0)
#define eps 1e-9
#define mem(x,v) memset(x,v,sizeof(x))

using namespace std;
int path[100005];

int Find(int i)
{
    if(path[i]==i)
        return i;
    return path[i]=Find(path[i]);
}

void unit(int i,int j)
{
    path[i]=j;
}

int main()
{
    ios_base::sync_with_stdio(0);
    long i,k,n,m,x,y,f,p,f1;
    while(cin>>n>>m)
    {
        for(i=1;i<=n;i++)
            path[i]=i;
        for(i=1;i<=m;i++)
        {
            cin>>x>>y;
            f=Find(x);
            f1=Find(y);
           // cout<<f<<" "<<f1<<endl;
            unit(f1,f);
        }
        cin>>p;
        for(i=0;i<p;i++)
        {
            cin>>x>>y;
            if(Find(x)==Find(y))
                cout<<"Friend"<<endl;
            else
                cout<<"Not Friend"<<endl;
        }
    }
	return 0;
}
