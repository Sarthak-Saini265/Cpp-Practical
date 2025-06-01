#include <iostream>
using namespace std;

class PROVIDER
{
private:
    string str;

public:
    PROVIDER(string str)
    {
        this->str = str;
    }
    void showAdress()
    {
        cout << "Address: " << &str << endl;
    }
    void concatenate(string str1)
    {
        cout << "Concatenated String: " << str + str1 << endl;
    }
    void compare(string str1)
    {
        if (str == str1)
            cout << "Strings are equal" << endl;
        else
            cout << "Strings are not equal" << endl;
    }
    int calcLength()
    {
        int counter = 0;
        while (str[counter] != '\0')
        {
            counter++;
        }
        // cout << "Length of string: " << counter << endl;
        return counter;
    }
    void toUpperCase()
    {
        string str2 = "";
        for (char ch : str)
        {
            str2 += toupper(ch);
        }
        cout << "Uppercase String: " << str2 << endl;
    }
    void reverse()
    {
        string str2 = "";
        for (int i = calcLength() - 1; i >= 0; i--)
        {
            str2 += str[i];
        }
        cout << "Reversed String: " << str2 << endl;
    }
    void insertString(string str1, int pos)
    {
        string str2 = "";
        string str3 = "";

        for (int i = 0; i < pos; i++)
        {
            str2 += str[i];
        }
        for (int i = pos; i < calcLength(); i++)
        {
            str3 += str[i];
        }
        cout << "Inserted String: " << str2 + str1 + str3 << endl;
    }
};

int main()
{
    PROVIDER p("123 Main St, City, Country");
    p.showAdress();
    p.concatenate(" - Apt 4B");
    p.compare("123 Main St, City, Country");
    cout << p.calcLength() << endl;
    p.toUpperCase();
    p.reverse();
    p.insertString(" - Apt 4B", 12);
    p.insertString(" - Apt 4B", 2);
    return 0;
}
