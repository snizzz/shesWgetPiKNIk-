#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> chars = vector<int>(255);


void lowerString(string& str)
{
	std::transform(str.begin(), str.end(), str.begin(), [](char c) {return tolower(c); });
}
int wordCombinationAmounts(string word)
{
	lowerString(word);
	vector<int> wordChars = vector<int>(255);
	for (int i = 0; i < word.size(); i++)
	{
		++wordChars[word[i]];
	}
	int result = INT32_MAX;
	for (int i = 0; i < 255; i++)
	{
		if (wordChars[i] != 0)
		{
			result = min(result, chars[i] / wordChars[i]);
		}
	}
	return result;
}
int main()
{
	string text;
	int size = 0;
	int rows = 0;
	int words = 0;

	while (getline(cin, text))
	{
		lowerString(text);
		if (text == "\x4")//stops on ctrl + d
		{
			break;
		}
		size += text.size();
		++rows;
		if (!isspace(text[0]))
		{
			++words;
		}
		for (int i = 0; i < (int)text.size() - 1; i++)
		{
			++chars[text[i]];
			if (isspace(text[i]) && !isspace(text[i + 1]))
			{
				++words;
			}
		}
		++chars[text[text.size() - 1]];
	}
	cout << "ilosc znakow: " << size << "\nIlosc linii: " << rows << "\nIlosc slow: " << words
		<< "\nIle razy mozna ulozyc z podanych liter ciag young leosia (bez uwzgledienia wielkosci liter): " << wordCombinationAmounts("young leosia")
		<< "\nIle razy mozna ulozyc z podanych liter jp2gmdswp (bez uwzgledienia wielkosci liter): " << wordCombinationAmounts("jp2gmdswp");
	return 0;
}