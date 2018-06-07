/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
/**#include <bits/stdc++.h>*/

/**array compression*/
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

long input[100000], a[100000],n;
map<long,long> mp;

void compress()
{

    long x,c=1,i,p;
    for(i=1;i<=n;i++)
    {
        x=input[i];
        if(mp.find(x)==mp.end())
            mp[x]=c++;
        p=mp[x];
        a[i]=p;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    long i,k,x,q;
    while(cin>>n)
    {
        vector<long> v[100000];
        for(i=1;i<=n;i++)
            cin>>input[i];
        compress();

        for(i=1;i<=n;i++)
            v[a[i]].push_back(i);

        cin>>q;
        for(i=1;i<=q;i++)
        {
            cin>>x;
            x=mp[x];
            for(k=0;k<v[x].size();k++)
                cout<<v[x][k]<<" ";
            if(v[x].size()==0)
                cout<<"The value is not assign"<<endl;
            else
                cout<<endl;
        }
    }
	return 0;
}
