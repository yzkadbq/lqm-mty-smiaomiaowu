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

const int maxn=10000;

struct uzs
{
	int val[maxn],l;
	int operator =(int x)
	{
		int tmp=x;
		memset(val,0,sizeof(val));
		if(x==0)
		{
			l=1;
			val[0]=0;
			return x;
		}
		l=0;
		while(x!=0)
		{
			val[l++]=x%10;
			x/=10;
		}
		return tmp;
	}
	void print(char lst='\n')
	{
		for(int i=l-1;i>=0;i--) putchar(val[i]+'0');
		if(lst) putchar(lst);
	}
	bool operator <(const uzs x)const
	{
		if(l<x.l) return true;
		if(l>x.l) return false;
		for(int i=l-1;i>=0;i--)
		{
			if(val[i]>x.val[i]) return false;
			if(val[i]<x.val[i]) return true;
		}
		return false;
	}
	bool operator >(const uzs x)const
	{
		if(l<x.l) return false;
		if(l>x.l) return true;
		for(int i=l-1;i>=0;i--)
		{
			if(val[i]>x.val[i]) return true;
			if(val[i]<x.val[i]) return false;
		}
		return false;
	}
	bool operator ==(const uzs x)const
	{
		if(l<x.l) return false;
		if(l>x.l) return false;
		for(int i=l-1;i>=0;i--) if(val[i]!=x.val[i]) return false;
		return true;
	}
	uzs operator +(const uzs x)
	{
		uzs ans;
		ans=0; 
		for(int i=0;i<max(l,x.l)||(ans.val[i]!=0);i++)
		{
			ans.l=i+1;
			ans.val[i]+=val[i]+x.val[i];
			ans.val[i+1]+=ans.val[i]/10;
			ans.val[i]%=10;
		}
		return ans;
	}
	void operator +=(const uzs x)
	{
		*this=*this+x;
	}
	uzs operator -(const uzs x)
	{
		uzs ans=*this;
		if(*this<x) return ans;
		for(int i=0;i<l;i++)
		{
			ans.val[i]-=x.val[i];
			if(ans.val[i]!=0) ans.l=i+1;
			if(ans.val[i]<0)
			{
				ans.val[i]+=10;
				ans.val[i+1]--;
			}
		}
		return ans;
	}
	void operator -=(const uzs x)
	{
		*this=*this-x;
	}
	void operator <<=(const int x)
	{
		l+=x;
		for(int i=l-1;i>=x;i--) val[i]=val[i-x];
		for(int i=0;i<x;i++) val[i]=0;
	}
	uzs operator <<(const int x)
	{
		uzs ans=*this;
		ans<<=x;
		return ans;
	}
	uzs times(int x)
	{
		uzs ans=*this;
		for(int i=0;i<ans.l;i++) ans.val[i]*=x;
		for(int i=0;i<l||ans.val[i];i++)
		{
			ans.l=i+1;
			ans.val[i+1]+=ans.val[i]/10;
			ans.val[i]%=10;
		}
		return ans;
	}
	uzs operator *(uzs x)
	{
		if(*this<x) return x*(*this);
		uzs ans;
		for(int i=0;i<x.l;i++) ans+=(this->times(x.val[i])<<i);
		return ans;
	}
	void operator >>=(int x)
	{
		for(int i=0;i<l-x;i++) val[i]=val[i+x];
		for(int i=l-x;i<l;i++) val[i]=0;
		l-=x;
	}
	//uzs >>(int x)
	//{
		
	//}
	/*uzs operator /(uzs x)
	{
		uzs ans;
		int now=l-x.l;
		if(*this<x) return ans;
		x<<=now;
		while(now--)
		{
			x
		}
	}*/
}a,b,c,d;

struct fs
{
	int zi=0,mu=1;
	
}e,f,g,h;

signed main(signed argc,char** argv)
{
	a=114514;
	b=114514;
	while(1)
	{
		a=a*b;
		a.print();
		system("pause");
	}
	return 0;
}

