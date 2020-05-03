#include <iostream>
#include "hw1.h"
#include <cassert>

using namespace std;

int first(int const x)
{
	int t = x * x;
	return t * (t + x + 1) + x + 1;
}

int second(int a, int b)
{
	assert(b != 0);
	int i = 0;
	while (a >= b)
	{
		a -= b;
		++i;
	}
	return i;
}


void third(int x, int y)
{
	x += y;
	y = x - y;
	x -= y;
	cout << x << " " << y;
}

void fourth(int* a, int m, int n) 
{
	int i = 0;
	if (m > n)
	{
		i = m;
	}
	else
	{
		i = n;
	}
	int tmp = 0;
	for (int j = 0; j < i; ++j)
	{
		if (j <= n)
		{
			tmp = a[m + j];
			a[m + j] = a[j];
			a[j] = tmp;
		}
		else
		{
			tmp = a[j];
			for (int s = j; s < m + n - j - 1; ++s)
			{
				a[s] = a[s + 1];
			}
			a[m + n] = tmp;
		}
	}
	for (int i = 0; i < m + n;++i)
	{
		cout << a[i] << " ";
	}
}

bool lucky(int x)
{
	if ((x / 100000 + (x / 10000) % 10 + (x / 1000) % 100) == ((x / 100) % 1000 + (x / 10) % 10000 + x % 100000))
	{
		return true;
	}
	return false;
}

int fifth()
{
	int r = 0;
	for (int i = 0; i < 999999; ++i)
	{
		if ((i / 100000 + (i / 10000) % 10 + (i / 1000) % 100) == ((i / 100) % 1000 + (i / 10) % 10000 + i % 100000))
		{
			++r;
		}
	}
	return r;
}

