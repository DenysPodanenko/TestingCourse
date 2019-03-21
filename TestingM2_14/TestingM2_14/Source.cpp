#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<map>
#include<fstream>
#include<streambuf>
#include <sstream>

using namespace std;

void countRepeats(const string& repeat, map<string, int>& repeatsCount,string text)
{
	size_t found = text.find(repeat);
	if (found != string::npos)
	{
		repeatsCount[repeat]++;
	}
	else
	{
		return;
	}

	while (true)
	{
		text.erase(0, (found + repeat.length()));
		found = text.find(repeat);
		if (found != string::npos)
		{
			repeatsCount[repeat]++;
		}
		else
		{
			return;
		}
	}
}

set<string> createRepeats(vector<string>& words,const int& maxWords)
{
	set<string> repeats;
	string repeat = "";
	for (int i = 3; i <= maxWords; i++)
	{
		for (int j = 0; j < words.size(); j++)
		{
			repeat = "";
			if (j + i > words.size())
			{
				break;
			}

			for (int z = j; z < j + i; z++)
			{
				repeat += words[z];
				if (z != j + i - 1)
				{
					repeat += " ";
				}
			}
			repeats.insert(repeat);
		}
	}

	return repeats;
}

int main()
{
	int maxWords = 0;
	cout << "Enter max words in request ";
	cin >> maxWords;

	map<string, int> repeatsCount;

	string path = "";
	cout << "Enter path to text file ";
	cin >> path;
	ifstream t(path);
		//"test.txt");
	string text((std::istreambuf_iterator<char>(t)),
						std::istreambuf_iterator<char>());

	vector<string> words;
	string word;
	stringstream iss(text);
	while (iss >> word)
	{
		words.push_back(word);
	}

	set<string> repeats = createRepeats(words, maxWords);
	for (string repeat : repeats)
	{
		countRepeats(repeat, repeatsCount, text);
	}

	for (auto p : repeatsCount)
	{
		cout << p.first << " : " << p.second << endl;
	}

	return 0;
}