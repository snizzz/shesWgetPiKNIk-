#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct Child
{
	int score = 0;
	string name;
};
vector<Child> children;
void printChild(Child& child, int place)
{
	cout << place << ' ' <<  child.name << ' ' << child.score << endl;
}
int main()
{
	int n;
	cin >> n;
	children.reserve(n);
	for (int i = 0; i < n; i++)
	{
		Child temp;
		cin >> temp.name;
		for (int j = 0; j < 5; j++)
		{
			int x;
			cin >> x;
			temp.score += x;
		}
		children.push_back(temp);
	}
	sort(children.begin(), children.end(), [](Child& a, Child& b) {return a.score > b.score; });
	int place = 1;
	printChild(children[0], place);
	for (int i = 1; i < children.size(); i++)
	{
		place += children[i].score != children[i - 1].score;
		printChild(children[i], place);
	}
}