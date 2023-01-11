#include<iostream>//To be Done by using Function
using namespace std;
int multiply(int num);
int main(){
int num;
cout<<"Enter a number=";
cin>>num;
multiply(num);
int num2 = multiply(num);
cout<<num2;
}
int multiply(int num)
{
int num2 = num*5;
return num2;
}