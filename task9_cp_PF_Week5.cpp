#include<iostream>
#include<cmath>
using namespace std;
main(){
int a=5;
int b=6;
int c=1;
int four_a_c = 4*a*c;
int two_a = 2*a;
float x1 = (-b + sqrt(b*b - four_a_c))/two_a;
float x2 = (-b - sqrt(b*b - four_a_c))/two_a;
cout<<"x ="<<x1<<" or x ="<<x2; 
}