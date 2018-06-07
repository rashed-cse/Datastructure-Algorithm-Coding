#include <stdio.h>
int main()
{
	int a[10000]={0},n,i,k,t,p,c;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		c=0;
		for(i=0;i<n;i++)
		{
			p=i;
			for(k=i+1;k<n;k++)
			{
				if(a[k]<a[p])
					p=k;
			}
			if(a[p]!=a[i])
			{
				t=a[i];
				a[i]=a[p];
				a[p]=t;
				c=c+1;
			}
		}
		//for(i=0;i<n;i++)
			//printf("%d ",a[i]);
		printf("%d\n",c);
	}
	return 0;
}
