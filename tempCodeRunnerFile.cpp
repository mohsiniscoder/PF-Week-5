#include<iostream>
#include <string>
using namespace std;
string one_to_10(int,string);
void twenty_ninety(int);
main()
{
int num1 ;
cout<<"Enter a two digit Number =";
cin>>num1;
twenty_ninety(num1);
string alpha;
one_to_10(num1,alpha);
if ( num1 > 20 && num1<30)
{
one_to_10(num1,alpha);
cout<<"Twenty"<<" "<<alpha;
}
if ( num1 >  30 && num1<40)
{
one_to_10(num1,alpha);
string result1 = one_to_10(num1,alpha);
cout<<"Thirty"<<" "<<result1;
}
if ( num1 > 40 && num1<50)
{
one_to_10(num1,alpha);
string result1 = one_to_10(num1,alpha);
cout<<"Fourty"<<" "<<result1;
}
if ( num1  50 && num1<60)
{
one_to_10(num1,alpha);
string result1 = one_to_10(num1,alpha);
cout<<"Fifty"<<" "<<result1;
}

if ( num1 > 60 && num1<70)
{
one_to_10(num1,alpha);
string result1 = one_to_10(num1,alpha);
cout<<"Sixty"<<" "<<result1;
}

if ( num1 > 70 && num1 < 80)
{
one_to_10(num1,alpha);
string result1 = one_to_10(num1,alpha);
cout<<"Seventy"<<" "<<result1;
}
if ( num1 > 80 && num1 < 90)
{
one_to_10(num1,alpha);
cout<<"Eighty"<<" "<<alpha;
}
if ( num1 > 90 && num1 < 100)
{
one_to_10(num1,alpha);
string result1 = one_to_10(num1,alpha);
cout<<"Ninety"<<" "<<result1;
}
one_to_10(num1,alpha);
cout<<alpha;
}
string one_to_10(int num1,string alpha)
{
if (num1 ==10){    
alpha = "ten";
cout<<alpha;
}
int num2 = num1%10;
if (num2 ==1){
alpha = "one";
return alpha;
}
if (num2 ==2){
alpha = "two";
return alpha;
}
if (num2 ==3){
alpha = "Three";
return alpha;
}
if (num2 ==4){
alpha = "four";
return alpha;
}
if (num2 ==5){
alpha = "five";
return alpha;
}
if (num2 ==6){
alpha = "six";
return alpha;
}
if (num2 ==7){
alpha = "seven";
return alpha;
}
if (num2 ==8){
alpha = "eight";
return alpha;
}
if (num2 ==9){
alpha = "nine";
return alpha;
}
}
void twenty_ninety (int num1)
{
if (num1 == 20)
cout<<"Twenty";
if (num1 == 30)
cout<<"Thirty";
if (num1 == 40)
cout<<"Fourty";
if (num1 == 50)
cout<<"Fifty";
if (num1 == 60)
cout<<"Sixty";
if (num1 == 70)
cout<<"Seventy";
if (num1 == 80)
cout<<"Eighty";
}
