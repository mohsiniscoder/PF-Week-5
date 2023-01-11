#include<iostream>
#include<cmath>
using namespace std;
main()
{
float base,height_of_tree;
float degree;
cout<<"Enter Angle in Degrees=";
cin>>degree;
cout<<"Enter The Length of the base= ";
cin>>base;
float degree_to_r = degree/57.298;//giver degree in 30
height_of_tree = tan(degree_to_r)*base;
cout<<"Height of the Tree = "<<height_of_tree;
}