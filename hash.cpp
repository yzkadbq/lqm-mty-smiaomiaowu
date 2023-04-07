#include <iostream>
using namespace std;
#define MOD 1635
int k[21] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
int s[21] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
int hash(int a)
{
	for(int i = 1;i <= 20;i++)
	{
		a = a * k[i] + s[i];
        a %= MOD;
	}
	return a;
}

int main()
{
	
	return 0;
}
