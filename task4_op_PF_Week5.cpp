    #include<iostream>
    #include <cmath>
    using namespace std;
    main()
    {
    float num1,num2;
    cout<<"Program Starts:\n";
    cout<<"Enter Number 1=";
    cin>>num1;
    cout<<"Enter Number 2=";
    cin>>num2;
    int result = min(num1,num2); 
    cout<<result<< " is the smaller number ";
    cout<<"\nProgram Ends:";
    }