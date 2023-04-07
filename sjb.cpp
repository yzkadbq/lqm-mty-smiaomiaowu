#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#define int long long
using namespace std;
inline int read()
{
	register int x=0,f=1;
	register char c;
	c=getchar();
	while(c<'0'||c>'9')
	{
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c<='9'&&c>='0')
	{
		x=(x<<3)+(x<<1)+(c^48);
		c=getchar();
	}
	return x*f;
}
inline void write(register int x)
{
	if(x<0)
	{
		x=~(x-1);
		putchar('-');
	}
	if(x>9) write(x/10);
	putchar(x%10+'0');
}

signed main(signed argc,char** argv)
{
	while(1)
	{
		int x=read();
		cout<<(x*x*x*x-6*x*x*x-49*x*x+420*x-534)/6<<endl;
	}
	return 0;
}

