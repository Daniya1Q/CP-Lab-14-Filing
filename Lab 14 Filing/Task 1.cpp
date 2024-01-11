#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("TxtFile.txt");

    if (!inputFile.is_open()) {
        cerr << "\n\nUnable to open file!\n\n";
        return 0;
    }

    char ch;

    cout << "\nContents of the file:\n\n";

    while (inputFile.get(ch)) {
        cout << ch;
    }

    inputFile.close();

    cout << endl << endl;
    cout << "Press Enter to exit...";
    cin.get();

    return 0;
}
