#include<iostream>
#include<iomanip>
#include<cstring>
#include<ctime>
using namespace std;

struct marks{

    int marks1,marks2;
    int student;
    float CA1,CA2;
};
void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);

int main()
{
    int i,stu;
    marks details[20];

    cout<<"how many student marks do you want to input ? \n";
    cin>>stu;

    for(i=1;i<=stu;i++)
    {
        cout<<"\n \nEnter Marks 1 : ";
        cin>>details[i].marks1;
        cout<<"Enter Marks 2 : ";
        cin>>details[i].marks2;
        cout<<endl;

        details[i].student=i;

        findMarks (details[i].marks1,details[i].marks2,details[i].CA1,details[i].CA2);
    }

    //formating output

    cout<<endl;

    cout<<setw(10)<<"Student"<<setw(10)<<"Marks1"<<setw(10)<<"marks2"<<setw(10)<<"CA1"<<setw(10)<<"CA2"<<endl;
    for(i=1;i<=stu;i++)
    {
        cout<<setw(10)<<details[i].student<<setw(10)<<details[i].marks1<<setw(10)<<details[i].marks2<<setw(10)
        <<setiosflags(ios::fixed)<<setprecision(2)<<details[i].CA1<<setw(10)<<details[i].CA2<<endl;
    }

}

void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2)
{
    t_CA1=t_marks1*(20/100.0);
    t_CA2=t_marks2*(30/100.0);
}
