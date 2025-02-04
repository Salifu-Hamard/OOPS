#include <iostream>

using namespace std ;
int main(void) {

int max;
int number1, number2,number3;

cout<<"Enter the first : ";
cin>>number1;

cout<< "Enther the second numberb: " ;
cin>>number2;

cout<< "Enter the third number: " ;
cin>>number3;


max= number1;

if( number2>max)
max=number2;


if(number3>max)
max=number3;

cout <<"  The largest number is " << max <<endl ;

return 0;
}


