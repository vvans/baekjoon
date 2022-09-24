#include<iostream>
using namespace std;
int main() {
	int num;
	int x1, y1, r1, x2, y2, r2;
	int result;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int dist, result;
		int len1,len2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		len1 = (r1 + r2) * (r1 + r2);
		len2 = (r1 - r2) * (r1 - r2);
		if (dist == 0) {
			if (r1 == r2) {
				result= -1;
			}
			else {
				result = 0;
			}
		}
		else if (dist==len1 || dist==len2) {
			result = 1;
		}
		else if(dist<len1 && dist>len2) {
			result = 2;
		}
		else {
			result = 0;
		}
		cout << result << endl;
	}
}