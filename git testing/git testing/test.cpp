#include<iostream>
#include<conio.h>
using namespace std;
int sum (int a, int b);
int sub(int a, int b);
int main()
{
	int a,b;
cout<<"please enter two numbers";
cin>>a>>b;
int c=sum(a,b);
int d=sub(a,b);
cout<<"sum is "<<c;
cout<<"subtract is"<<d;
getch();
}