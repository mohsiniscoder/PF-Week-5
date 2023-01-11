#include<iostream>
#include <cctype>
int check_character(char character);
using namespace std;
main(){
char character;
cout<<"enter a character=";
cin>>character;
check_character(character);
}
int check_character(char character){
if (isupper(character))
{
    cout<<"You Entered an Uppercase character";
}
else {
cout<<"You entered a lowercase character";    
}
return 0;
}