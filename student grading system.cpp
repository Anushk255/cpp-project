#include<iostream>
using namespace std;
int main(){
	int i;
	float marks, sum=0, avg;
	cout<<"enter marks obtained in 5 subject: ";
	for(i=0; i<5; i++)
	{
		cin>>marks;
		sum=sum+marks;
	}
	if(i<5) 
	cout<<"invalid";
	avg=sum/5;
	cout<<"\nGrade=";
	if(avg>=91 && avg<=100)
	cout<<"A+";
	else if(avg>=75 && avg<91)
	cout<<"A";
	else if(avg>=60 && avg<75)
	cout<<"B+";
	else if(avg>=55 && avg<60)
	cout<<"B";
	else if(avg>=30 && avg<55)
	cout<<"C+";
	else if(avg>=0 && avg<30)
	cout<<"C";
	else
	cout<<"Invalid!";
	cout<<endl;
	return 0;
}
