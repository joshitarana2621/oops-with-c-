#include<iostream>
#include<string>
using namespace std;

class student
{
    string name;
    int rollNo;
    string course;
    int semester;
    int noOfSub;

public:

    student(string name, int rollNo, string course, int semester, int noOfSub)
    {
        cout<<"constructer is being called"<<endl;
        this->name = name;
        this->rollNo = rollNo;
        this->course = course;
        this->semester = semester;
        this->noOfSub = noOfSub;
    }

    void sleep()
    {
        cout << "student sleeps" << endl;
    }

    void eat()
    {
        cout << "student eats" << endl;
    }

    ~student()
    {
        cout<<"destructure is being called"<<endl;
    }
};

int main()
{
    student s1("shivani", 34, "CE", 3, 6);
    s1.sleep();

    student s2;
    s2.name = "hetvi";
    s2.rollNo = 40;
    s2.course = "CSE";
    s2.semester = 3;
    s2.noOfSub = 4;
    s2.bunk()
    return 0;
}
