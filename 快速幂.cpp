#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#define int long long
using namespace std;
int a,b,c,ans[32768],m; 
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
inline int ksm(int a,int k,int mod) 
{
	if(k==0) return 1;
	if(k%2) return a*ksm(a,k-1,mod)%mod;
	int tmp=ksm(a,k/2,mod)%mod;
	return tmp*tmp%mod;
}
inline void check()
{
	int bg;
	while(1)
	{
		bg=read();
		if(bg<0)return;
		else printf("%-9d\n",ans[bg]);
	}
}
signed main()
{
	srand(time(0));
	memset(ans,0,sizeof(ans));
	while(1)
	{
		a=rand(),b=rand(),c=rand();
		m=ksm(a,b,c);
		ans[a]++,ans[b]++,ans[c]++,ans[m]++;
		char ch=getch();
		if(ch=='!')system("cls");
		else if(ch=='@')exit(0);
		else if(ch=='#')check();
		else printf("%-6d%-6d%-6d%-6d\n",a,b,c,m);	
	}
	return 0;
}

