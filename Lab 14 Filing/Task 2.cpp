#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile("MyFile1.txt");

    string userInput;

    cout << "\n\nEnter a string to write to the file: ";

    getline(cin, userInput);

    if (!outputFile.is_open())
    {
        cerr << "\n\nError: File could not be opened!\n\n";
        return 0;
    }

    outputFile << userInput;

    outputFile.close();

    cout << "\n\nString has been written to the file successfully.";

    cout << endl << endl;
    cout << "Press Enter to exit...";
    cin.get();

    return 0;
}
