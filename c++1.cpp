#include<iostream>
using namespace std;
class Student {
	string name;
	int age;
	
   public:
   	Student()
   	{
   		cout<<"Student Constructer called";
   	}
   	~Student()
   	{
   		cout<<" Student Destructor called ";
   	}
   	void getdata()
	{
		cout<<"\nenter your name ";
		cin>>name;
		cout<<"\nenter your age ";
		cin>>age;
	}
	void showdata()
	{
		cout<<"name:"<<name;
		cout<<"\t-age:"<<age;
	}
};
int main()
{
	Student S1;
	S1.showdata();
	S1.getdata();
}