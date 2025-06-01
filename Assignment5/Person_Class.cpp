#include <iostream>
#include <string>

using namespace std;

class PERSON
{
protected:
    string name;

public:
    PERSON(string n) : name(n) {}
    virtual void display()
    {
        cout << "Name: " << name << endl;
    }
};

class STUDENT : public PERSON
{
private:
    string course;
    int marks;
    int year;

public:
    STUDENT(string n, string c, int m, int y) : PERSON(n), course(c), marks(m), year(y) {}
    void display() override
    {
        PERSON::display();
        cout << "Course: " << course << "\nMarks: " << marks << "\nYear: " << year << endl;
    }
};

class EMPLOYEE : public PERSON
{
private:
    string department;
    double salary;

public:
    EMPLOYEE(string n, string d, double s) : PERSON(n), department(d), salary(s) {}
    void display() override
    {
        PERSON::display();
        cout << "Department: " << department << "\nSalary: " << salary << endl;
    }
};

int main()
{
    STUDENT s("Alice", "Computer Science", 90, 2024);
    EMPLOYEE e("Bob", "HR", 50000);

    cout << "Student Details:\n";
    s.display();
    cout << "\nEmployee Details:\n";
    e.display();

    return 0;
}
