    #include<iostream>
    #include <cmath>
    using namespace std;
    main()
    {
    float num1,num2;
    cout<<"Program Starts:\n";
    cout<<"Enter a number=";
    cin>>num1;
    cout<<"Enter its power =";
    cin>>num2;
    int result = pow(num1,num2); 
    cout<<num1<<" raise to the power "<<num2<< " is "<<result;
    cout<<"\nProgram Ends:";
    }