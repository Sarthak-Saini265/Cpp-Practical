#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (!inFile || !outFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        if (!isspace(ch)) {
            outFile << ch;
        }
    }

    inFile.close();
    outFile.close();

    cout << "Contents copied to output.txt without whitespaces." << endl;
    return 0;
}
