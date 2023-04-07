#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#define int long long
int calcc=0; 
using namespace std;

inline int read()
{
	register int x = 0, f = 1;
	register char c;
	c = getchar();
	while(c < '0' || c > '9')
	{
		if(c == '-')f = -1;
		c = getchar();
	}
	while(c <= '9' && c >= '0')
	{
		x = x * 10 + c - '0';
		c = getchar();
	}
	return x * f;
}

signed main()
{
	system("title calczzz"); 
	srand(time(0));
	while(1)
	{
		int t=rand()%40+1;
		calcc+=t;
		getch();
		printf("´À£º%-2d %-9d\n",t,calcc);
		while(t--) WinExec("calc.exe",SW_SHOW);
	} 
	return 0;
}


