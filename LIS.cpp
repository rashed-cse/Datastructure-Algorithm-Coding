/**Longest increasing subsequence.*/
/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long i,k,x,c;
    while(cin>>x)
    {
        long a[100],n[100]={0};
        for(i=0;i<x;i++)
            cin>>a[i];
        for(i=0;i<x;i++)
        {
            c=0;
            for(k=i-1;k>=0;k--)
            {
                if(a[k]<a[i]&&n[k]>c)
                    c=n[k];
            }
            n[i]=c+1;
        }
        for(i=0;i<x;i++)
            cout<<n[i]<<" ";
        cout<<endl;
    }
	return 0;
}
