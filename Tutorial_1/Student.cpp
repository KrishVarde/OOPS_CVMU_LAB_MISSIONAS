#include<iostream>
using namespace std;
class Student
{
private:
    char stu_name[30];
    int age;
public:
    void set(void)
    {
        cout<<"enter your name: ";
        cin>>stu_name;
        cout<<endl<<"enter your age: ";
        cin>>age;
    }
    void get(void)
    {
        cout<<endl<<"student name is "<<stu_name;
        cout<<endl<<"student age is"<<age;
    }
};

int main()
{
    //we can take as much student as we want by applying a for loop
    Student stu[3];
    stu[0].set();
    stu[0].get();
    return 0;
}