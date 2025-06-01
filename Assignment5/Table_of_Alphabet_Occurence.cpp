// Not Case Sensitive: The program treats uppercase and lowercase letters as the same character.

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





// Case Sensitive: The program treats uppercase and lowercase letters as different characters.
// Uncomnment to use

// #include <iostream>
// #include <map>
// #include <cctype>

// using namespace std;

// int main() {
//     string text;
//     cout << "Enter the text: ";
//     getline(cin, text);

//     map<char, int> freq;

//     for (char c : text) {
//         if (isalpha(c)) {
//             freq[c]++;
//         }
//     }

//     cout << "\nAlphabet Frequency Table (Case-Sensitive):\n";
//     for (char ch = 'A'; ch <= 'Z'; ch++) {
//         if (freq[ch] > 0) {
//             cout << ch << " : " << freq[ch] << endl;
//         }
//     }
//     for (char ch = 'a'; ch <= 'z'; ch++) {
//         if (freq[ch] > 0) {
//             cout << ch << " : " << freq[ch] << endl;
//         }
//     }

//     return 0;
// }

