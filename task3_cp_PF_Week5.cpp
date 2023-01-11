#include<iostream>
using namespace std;
void symetrical_number(int num);
main(){
int num;
cout<<"Enter Three Digit number =";
cin>>num;
symetrical_number(num);
}
void symetrical_number(int num){
int num_last = num %10;
int num_first =  num/100;
if (num_last == num_first)
{
cout<<"The number is symetrical";
}
else 
{
cout<<"The number is not symetrical ";

}
}