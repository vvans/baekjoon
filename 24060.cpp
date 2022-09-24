#include<iostream>
using namespace std;
int cnt = 0;
void merge_sort(int* A, int p, int r, int k);

void merge(int* A, int p, int q, int r, int k);
void merge_sort(int* A, int start, int end, int k)
{
	int p, q, r;
	p = start;
	q = end;
	if (p < r) {
		int q;
		q = (p + r) / 2;
		merge_sort(A, p, q,k);
		merge_sort(A, q + 1, r, k);
		merge(A, p, q, r, k);

	}
}
void merge(int* A,int p,int q,int r,int k)
{
	int i, j, t;
	i = p;
	j = q+1;
	t = 1;
	while (i <= q && j <= r) {
		if (A[i] <= A[j]) {
			A[t++] =A[i++];
		}
		else {
			A[t++]=A[j++];
		}
	}
	while (i <=q) 
		A[t++] =A[i++];
	while (j <=r)
		A[t++] =A[j++];
	i =p; 
	t = 1;
	while (i <= r)
	{
		A[i++] = A[t++];
		cnt++;
		if (++cnt == k) {
			cout << A[t - 1];
		}
	}
}
int main()
{
	int a, k;
	cin >> a >> k;
	int* A;
	A = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> A[i];
	}
	merge_sort(A, 0, a-1, k);
	for (int i = 0; i < a; i++)
	{
		cout << A[i] << ' ';
	}
}