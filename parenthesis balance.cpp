
#include <bits/stdc++.h>
#define pi 2*acos(0.0)
#define eps 1e-9
#define mem(x,v) memset(x,v,sizeof(x))

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    long i,l;
    string s;
    while(cin>>s)
    {
        stack<char> stk;
        l=s.size();

        for(i=0;i<l;i++)
        {
            if(!stk.empty()&&stk.top()=='('&&s[i]==')')
                stk.pop();
            else if(!stk.empty()&&stk.top()=='{'&&s[i]=='}')
                stk.pop();
            else if(!stk.empty()&&stk.top()=='['&&s[i]==']')
                stk.pop();
            else
                stk.push(s[i]);
        }
        if(stk.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
	return 0;
}
