#include<iostream>
using namespace std;
main()
{
int hours,minutes;
cout<<"Enter Hours= ";
cin>>hours;
cout<<"Enter Minutes=";
cin>>minutes;
int fifteen_minutes = minutes + 15;
if (fifteen_minutes > 59  ){
    int final_hours = hours+1;
    int fifteen_minutes_final = fifteen_minutes-60;
    cout<<final_hours<<":"<<fifteen_minutes_final;
    if ( final_hours > 23 )
    {
        final_hours = 0;
        cout<<final_hours<<":"<<fifteen_minutes_final;
    }
}
else 
cout<<hours<<":"<<fifteen_minutes;
}