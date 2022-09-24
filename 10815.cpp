#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	
	int n, m;
	int a[500001],b[500001],c[500001];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a + n);
	for (int i = 0; i < m; i++)
	{
		int find,mid,l,r;
		find = b[i];
		l = 0;
		r = n - 1;
		bool chk;
		chk = false;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (a[mid] == find)
			{
				c[i] = 1;
				chk = true;
				break;
			}
			else {
				if (find > b[i])
				{
					l = mid;
				}
				else {
					r = mid;
				}
			}
		}
		if (chk = false)
			c[i] = 0;
	}
	for (int i = 0; i < m; i++)
		cout << c[i]<<' ';
		
}