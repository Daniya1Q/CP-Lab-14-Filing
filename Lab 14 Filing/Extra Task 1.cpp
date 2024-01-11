#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string reversal(string& str);

int main()
{
	ifstream file("String.txt");

	char character;
	string content;

	while (file.get(character))
	{
		content += character;
	}

	file.close();

	content = reversal(content);

	ofstream file_1("String_Reversal.txt");

	file_1 << content;

	file_1.close();

	cout << "\n\nContent of the Orginal file successfully reversed.";

	cout << endl << endl;
	system("pause");
	return 0;
}

string reversal(string& str)
{
	string str_1;

	for (int i = str.length() - 1; i >= 0; i--)
	{
		str_1 += str[i];
	}

	return str_1;
}