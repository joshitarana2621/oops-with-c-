#include<iostream>
#include<string>
using namespace std;

class student
{
public:
    string name;
    int rollNo;
    string course;
    int semester;
    int noOfSub;

    // Parameterized constructor
    student(string name, int rollNo, string course, int semester, int noOfSub)
    {
        cout << "constructor is being called" << endl;

        this->name = name;
        this->rollNo = rollNo;
        this->course = course;
        this->semester = semester;
        this->noOfSub = noOfSub;
    }

    // Default constructor
    student()
    {
        cout <<this->name<<"default constructor is being called" << endl;
    }

    void sleep()
    {
        cout <<this->name<<" student sleeps" << endl;
    }

    //copy ctor
    student(student const &srcobj)
    {
         this->name = srcobj.name;
         this->rollNo = srcobj.rollNo;
         this->course = srcobj.course;
         this->noOfSub = srcobj.noOfSub;
         this->semester = srcobj.semester;
    }
    void eat()
    {
        cout <<this->name<<"student eats" << endl;
    }

    void bunk()
    {
        cout <<this->name<< "student bunked" << endl;
    }

    // Destructor
    ~student()
    {
        cout << "destructor is being called" << endl;
    }
};

int main()
{ //===============================declaring object================================
    student s1("shivani", 34, "CE", 3, 6);
    s1.sleep();

   // student s2;
   // s2.name = "hetvi";
   // s2.rollNo = 40;
   // s2.course = "CSE";
   // s2.semester = 3;
   // s2.noOfSub = 4;
  //  s2.bunk();
//====================== copy ctor ================================
student s3 = s1;
//student s3(s1);
cout<<s3.name<<" "<<s3.rollNo<<endl;
    return 0;
}
