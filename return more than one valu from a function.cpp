/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
/**#include <bits/stdc++.h>*/
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

typedef pair< pair<long,long> , pair<long,long> > pr;

pr res(long a,long b)
{
    pr p;
    p.first.first=a+b;
    p.first.second=a-b;
    p.second.first=a*b;
    p.second.second=a/b;
    return p;
}

int main()
{
    ios_base::sync_with_stdio(0);
    long n,i,k,a,b;

    pr x;

    cin>>a>>b;

    x=res(a,b);
    cout<<x.first.first<<" "<<x.first.second<<" "<<x.second.first<<" "<<x.second.second<<endl;

	return 0;
}
