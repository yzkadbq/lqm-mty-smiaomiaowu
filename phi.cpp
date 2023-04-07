#include <bits/stdc++.h>
#define int long long
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

	return 0;
}


