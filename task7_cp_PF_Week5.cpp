    #include<iostream>
    #include <cmath>
    using namespace std;
    main()
    {
    float degree;
    cout<<"Program Starts:\n";
    cout<<"Enter Angle in degrees to calculate it's sin()=";
    cin>>degree;
    float radian = degree*0.01744444444;
    float result = sin(radian); 
    cout<<"Sin of "<<degree << " is =  "<<result;
    cout<<"\nProgram Ends:";
    }