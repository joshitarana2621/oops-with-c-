#include<iostream>
using namespace std;
class student{
    private:
    string name ;
    int cpga ;
    int roll_no;
    string branch;
    public:
    void setName(string name)
    {
          name = name;
    }
    void getName()
    {
        cout<<"student name"<<name;
    }

};
int main()
{
    int roll_no,cgpa;
    string name,branch;
    student s1;
    cout<<"enter name:";
    cin>>name;
    s1.setName(name);
    s1.getName();

}