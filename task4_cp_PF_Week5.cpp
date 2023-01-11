#include<iostream>
using namespace std;
void evenish_oddish (int);
main(){
int num1;
cout<<"Enter number =";
cin>>num1;
evenish_oddish(num1);
}
void evenish_oddish ( int num1 )
{
int first_num = num1%10;
int num2 = num1/10;
int second_num = num2%10;
int num3 = num2/10;
int third_num = num3%10;
int num4 = num3/10;
int fourth_num = num4%10;
int sum = first_num + second_num + third_num + fourth_num;
cout<<sum<<"\n";
if ( sum % 2 == 0){
    cout<<"Number is evenish";
}
else {
    cout<<"Number is oddish";
}
}