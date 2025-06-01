#include <iostream>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    map<char, int> freq;

    for (char c : text) {
        if (isalpha(c)) {
            freq[tolower(c)]++;
        }
    }

    cout << "\nAlphabet Frequency Table:\n";
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (freq[ch] > 0) {
            cout << ch << " : " << freq[ch] << endl;
        }
    }
    
    return 0;
}
