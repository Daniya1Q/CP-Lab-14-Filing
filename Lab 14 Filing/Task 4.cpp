#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Students
{
	string name;
	string age;
	string CGPA;
	string DOB;
	string Place_of_birth;
};


int main()
{

	ofstream file("Data.txt");

	Students student[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "\n\nStudent " << i + 1;
		cout << "\n\nEnter Name: ";
		getline(cin, student[i].name);
		cout << "\n\nEnter Age: ";
		getline(cin, student[i].age);
		cout << "\n\nEnter CGPA: ";
		getline(cin, student[i].CGPA);
		cout << "\n\nEnter Date of birth: ";
		getline(cin, student[i].DOB);
		cout << "\n\nEnter Place of Birth: ";
		getline(cin, student[i].Place_of_birth);
	}

	for (int i = 0; i < 5; i++)
	{
		file << "Student " << i + 1 << ":\n";
		file << "Name: " << student[i].name << "\n";
		file << "Age: " << student[i].age << "\n";
		file << "CGPA: " << student[i].CGPA << "\n";
		file << "DOB: " << student[i].DOB << "\n";
		file << "Place of Birth: " << student[i].Place_of_birth << "\n\n";
	}

	file.close();

	cout << "\n\nStudent data has been saved to 'Data.txt' successfully.\n\n";

	cout << "\n\n";
	system("pause");
	return 0;
}