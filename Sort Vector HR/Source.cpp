#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<iterator>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N;
	cin >> N;
	vector<int> vect;
	int num;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		vect.push_back(num);
	}
	sort(vect.begin(), vect.end());
	copy(vect.begin(), vect.end(), ostream_iterator<int>(cout, " "));
	return 0;
}
