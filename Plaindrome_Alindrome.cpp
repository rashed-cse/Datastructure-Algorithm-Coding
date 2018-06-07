// Plaindrome or Not plaindrome.

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#include<string>
#include<iostream>
#define siz 200005
using namespace std;
int plaindrome(char a[],int start, int end)
{
	int i,x,k=end,m;
	m=(end-start)/2;
	x=start+m;
	for(i=start;i<=x;i++,k--)
		if(a[i]==a[k])
			continue;
		else
			return 1;
   return 0;
}
int main()
{
	int i,l,j,tc,s,p1,p2;
	scanf("%d",&tc);
	for(j=0;j<tc;j++)
	{
		s=0;
		char *a;
		a=(char*)malloc(siz*sizeof(char));	
		scanf("%s",a);
		l=strlen(a);
		l=l-1;
		if(plaindrome(a,0,l)==0)
		{
			s=1;
			printf("Plaindrome\n");
		}
		else
			printf("Not Plaindrome\n");
		/*for(i=0;i<=l;i++)
		{
			p1=plaindrome(a,0,i);
			p2=plaindrome(a,i+1,l);
			if(p1==0&&p2==0)
			{
				s=2;
				break;
			}
		}
		if(s==2)
			printf("alindrome\n");
		else if(s==1)
			printf("palindrome\n");
		else
			printf("simple\n");*/
	}
	return 0;
}
