/*Use class string and count the number of vowels present in the 
  entered string*/

#include <iostream.h>
#include <conio.h>

#define M 50

class String
{
 unsigned int vowels;
 char string[M];
 void check();
public:
 void accept();
 void display();
};

void String::check()
{
 vowels = 0; 
 for(int i=0;string[i]!='\0';i++)
 switch(string[i])
 {
  case 'a' :
  case 'A' :
  case 'e' :
  case 'E' :
  case 'i' :
  case 'I' :
  case 'o' :
  case 'O' :
  case 'u' :
  case 'U' :vowels++;
 }
}
void String::accept()
{
 cout<<"Enter a string : ";
 cin.getline(string,M);
}

void String::display()
{
 check();
 cout<<"The number of vowels : "<<vowels;
}

void main()
{
 String S;
 clrscr();
 
 S.accept();
 S.display();
 
 getch();
}

/*OUTPUT
Enter a string : How many teeth do you have?
The number of vowels : 9
*/