#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
    string name;
    int age;
    float cgpa;
    char grade;

    cin >> name >> age >> cgpa >> grade;

    cgpa = floor(cgpa * 100) / 100.0;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << fixed << setprecision(2) << cgpa << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
