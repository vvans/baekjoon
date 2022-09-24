#include<iostream>
#include<algorithm>
using namespace std;
int a[500001], b[500001], c[500001];
int main()
{

	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a + n);
	for (int i = 0; i < m; i++)
	{
		int find, mid, l, r;
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
				if (find > a[mid])
				{
					l = mid+1;
				}
				else {
					r = mid-1;
				}
			}
		}
		if (chk == false)
			c[i] = 0;
	}
	for (int i = 0; i < m; i++)
		cout << c[i] << ' ';

}