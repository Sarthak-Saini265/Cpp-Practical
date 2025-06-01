#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string className;
    int year;
    float totalMarks;

    void display() {
        cout << rollNo << "\t" << name << "\t" 
             << className << "\t" << year << "\t" 
             << totalMarks << endl;
    }
};

int main() {
    Student s[5] = {
        {101, "Rahul", "10th", 2023, 450},
        {102, "Priya", "9th", 2023, 480},
        {103, "Amit", "11th", 2023, 425},
        {104, "Neha", "12th", 2023, 495},
        {105, "Sonia", "10th", 2023, 460}
    };

    // Write to file
    ofstream out("students.txt");
    for(int i=0; i<5; i++) {
        out << s[i].rollNo << endl
            << s[i].name << endl
            << s[i].className << endl
            << s[i].year << endl
            << s[i].totalMarks << endl;
    }
    out.close();

    // Read from file
    ifstream in("students.txt");
    Student temp;
    cout << "Roll\tName\tClass\tYear\tMarks\n";
    cout << "---------------------------------------\n";
    while(in >> temp.rollNo >> ws && getline(in, temp.name) &&
          getline(in, temp.className) && in >> temp.year >> 
          temp.totalMarks >> ws) {
        temp.display();
    }
    in.close();

    return 0;
}