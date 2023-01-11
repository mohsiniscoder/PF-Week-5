#include<iostream>
using namespace std;
main(){
int volume;
int p1;
int p2;
float  hours ;
cout<<"Enter the Volume of the pool=";
cin>>volume;
cout<<"Enter the flow rate of first pipe(per Hour)=";
cin>>p1;
cout<<"Enter the flow rate of second pipe(Per Hour)=";
cin>>p2;
cout<<"Enter the number of hours thee worker is absent=";
cin>>hours;
float p3 = p1*hours;
float p4 = p2*hours;
if ( volume <= 10000 && p3<=5000 && p4<= 5000 && hours <=24.0   )
{
 float pipes = p3+p4;
 float pool_fill_per = (pipes / volume) *100;
 float pipe_one_per = (p3/pipes) *100;
 float pipe_two_per = (p4/pipes) *100;
 if (pool_fill_per <= 100 )
 {
    cout<<"this pool is "<<pool_fill_per<<" Percent Filled";
    cout<<"P1 = "<<pipe_one_per<< " Percent Contribution";
    cout<<"P2 = "<<pipe_two_per<< " Percent Contribution";
 }
 if ( pool_fill_per > 100)
 {
    float pool_overflow = pool_fill_per - 100.0 ;
    cout<<"The pool has overflown "<<pool_overflow<<" Litres" ;
 }

}




}