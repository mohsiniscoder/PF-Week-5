#include<iostream>
using namespace std;
int sum(int num1,int num2);
int main()
{
int num1,num2,addition;
cout<<"Enter number one = ";
cin>>num1;
cout<<"Enter number two = ";
cin>>num2;
sum(num1,num2);
}
int sum(int num1,int num2){
int addition = num1+num2; 
cout<<"Sum="<<addition;
return 0;
}
