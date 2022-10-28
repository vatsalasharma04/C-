#include<iostream>
#include<conio.h>
using namespace std;
class student
{
  int rollno;
  char name[20];
  float marks;
public:
  void input()
  {
    cout<<"enter roll no";
    cin>>rollno;
    cout<<"enter name";
    cin>>name;
    cout<<"enter marks";
    cin>>marks;
  }
  void output()
  {
    cout<<"your name" <<name;
    cout<<"your rollno"<<rollno;
    cout<<"your marks"<<marks;
  }
}
;
int main()
{
  student raj;
  student rohit;

  raj.input();
  raj.output();

  rohit.input();
  rohit.output();
  return 0;
}
