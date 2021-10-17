#include <iostream>
#include <vector>
using namespace std;

struct Pos
{
	int x, y;
};
vector<Pos> knights;
vector<Pos> getThreatenedFields(Pos a)
{
	return { {a.x + 2, a.y + 1}, {a.x + 2, a.y - 1}, {a.x - 2, a.y + 1}, {a.x - 2, a.y - 1}, {a.x + 1, a.y + 2}, {a.x - 1, a.y + 2},{a.x + 1, a.y - 2},{a.x - 1, a.y - 2}, };
}
int main()
{
	for (int i = 0; i < 4; i++)
	{
		string pos;
		cin >> pos;
		knights.push_back({ pos[0] - 'a', pos[1] - '1'});
	}
	for (int i = 0; i < 4; i++)
	{
		if(knights[i].x < 0 || knights[i].x > 7 || knights[i].y < 0 || knights[i].y > 7)
		{
			cout << "BLAD";
			return 0;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if(i != j && knights[i].x == knights[j].x && knights[i].y == knights[j].y)
			{
				cout << "BLAD";
				return 0;
			}
		}
	}
	for(Pos& a : getThreatenedFields(knights[0]))
	{
		if((knights[2].x == a.x && knights[2].y == a.y) || (knights[3].x == a.x && knights[3].y == a.y) )
		{
			cout << "TAK";
			return 0;
		}
	}
	for (Pos& a : getThreatenedFields(knights[1]))
	{
		if ((knights[2].x == a.x && knights[2].y == a.y) || (knights[3].x == a.x && knights[3].y == a.y))
		{
			cout << "TAK";
			return 0;
		}
	}
	cout << "NIE";
	return 0;
}