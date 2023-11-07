#include <iostream>
using namespace std;

class Grades
{
    double grade1, grade2, grade3;

    public:
    void setGrades(double, double, double);

    double avgGrade()
    {
        return (grade1 + grade2 + grade3)/3;
    }
};

void Grades::setGrades(double x, double y, double z)
{
    grade1 = x;
    grade2 = y;
    grade3 = z;
}

int main()
{
    Grades cadet1, cadet2;

    cadet1.setGrades(10,20,30);
    cadet2.setGrades(40,50,60);

    cout << "Cadet 1 Avg: " << cadet1.avgGrade() << "\nCadet 2 Avg: " << cadet2.avgGrade();

    return 0;
}