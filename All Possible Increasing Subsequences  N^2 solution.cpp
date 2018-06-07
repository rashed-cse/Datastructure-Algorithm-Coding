/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */

#include <bits/stdc++.h>
#define pi 2*acos(0.0)
#define eps 1e-9
#define mem(x,v) memset(x,v,sizeof(x))

using namespace std;

int main()
{
    int i,k,j,tc;
    scanf("%d",&tc);
    for(j=1;j<=tc;j++)
    {
       long a[100002]={0},r=0,n=0,res[100005]={0},sum=0;

       scanf("%ld",&n);

       for(i=0;i<n;i++)
       {
           scanf("%ld",&a[i]);
           r=1;
           for(k=i-1;k>=0;k--)
           {
               if(a[i]>a[k])
                r=r+res[k];
           }
           res[i]=r;
           sum=sum+r;
       }
       printf("Case %d: %ld\n",j,sum);
    }
	return 0;
}
