#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(int argc, char* argv[])
{
	int n;
	cin >> n;
	vector<int> N;
	N.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		N.push_back(temp);
	}
	reverse(N.begin(), N.end());
	int q, amount, a;
	cin >> q;
	for (int j = 0; j < q; ++j)
	{
		cin >> amount;
		int i = 0;
		while (amount > 0)     
		{
			if (amount >= N[i]) 
			{
				a = amount / N[i]; 
				amount = amount - (N[i] * a);
				cout << N[i] << " x " << a << endl;
			}
			i++;    
		}
	}
	return 0;
}