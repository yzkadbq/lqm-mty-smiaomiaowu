#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#include <pthread.h>
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

void* a(void* b)
{
	while(1) MessageBox(NULL,"ÔçÆßÈı°à±ØÊ¤£¡","ÔçÆßÈı°à±ØÊ¤£¡",NULL);
}

signed main(signed argc,char** argv)
{
	int num=50;
	pthread_t c[num];
	int *b;
	system("title ÔçÆßÈı°à±ØÊ¤£¡");
	while(num--) pthread_create(&c[num],NULL,a,NULL);
	while(1) printf("ÔçÆßÈı°à±ØÊ¤£¡\n");
	return 0;
}

