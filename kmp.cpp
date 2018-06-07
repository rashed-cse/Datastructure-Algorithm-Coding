/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
/**#include <bits/stdc++.h>*/

/** Find a string P in string S */

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

long f[100000];

void fail_function(string p)
{
    long k=1,len=0,l;
    f[0]=0;
    l=p.size();
    while(k<l)
    {
        if(p[len]==p[k])
            f[k++]=++len;
        else
        {
            if(len)
                len=f[len-1];
            else
                f[k++]=0;
        }
    }
}

void kmp(string s,string p)
{
    fail_function(p);

    long i=0,j=0,ret=-1,ls,lp;

    ls=s.size();
    lp=p.size();

    while(i<ls)
    {
        if(s[i]==p[j])
        {
            i++;
            j++;
            if(j==lp)
            {
                ret=i-lp;
                cout<<"A match found from index "<<ret<<endl;
                j=f[j-1];
            }
        }
        else
        {
            if(j)
                j=f[j-1];
            else
                i++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    long i,k,n,x;
    string s,p;
    while(cin>>s>>p)
    {
        mem(f,0);

        kmp(s,p);
    }
	return 0;
}
