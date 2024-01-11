#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream file_1("Input_file");

	file_1 << "\n\nName: Arham\nEnrollment: 01-131232-013\nClass: BSE-1A";

	file_1.close();

	ifstream file_2("Input_file");

	if (!file_2.is_open())
	{
		cerr << "\n\nFile not Found!\n\n";
		return 0;
	}

	char characters;
	int count = 0;

	cout << "\n\nFile content: ";

	while (file_2.get(characters))
	{
		cout << characters;
		count++;
	}

	file_2.close();

	cout << "\n\nCharacters in this file: " << count;



	cout << "\n\n";
	system("pause");
	return 0;
}