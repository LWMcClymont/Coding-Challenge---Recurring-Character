#include <iostream>
#include <map>

// Note: the input is treated as case-sensitive:- ('X' is not same as as 'x')

using namespace std;

char solution(const string& str); 

int main()
{
	string testString = "";

	cin >> testString;

	cout << "First recurring character: " << solution(testString) << endl;

	return 0;
}

char solution(const string& str)
{
	map<char, int> list;

	list[str[0]] = 1;

	for (int i = 1; i < str.size(); ++i)
	{
		if (list.find(str[i]) == list.end()) // if cant find the character
		{
			list[str[i]] = 1;
		}
		else
		{
			return str[i];
		}
	}

	return '\0';
}
