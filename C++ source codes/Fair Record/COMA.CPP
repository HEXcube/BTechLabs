/*Program to simulate copy command*/
#include<fstream.h>
#include<conio.h>

#define M 200

int main(unsigned int count,char** arg)
{
char* suBuffer;
suBuffer = new char[M];

if(count > 3)
{
cout<<"Invalid number of parameters";
getch();
return 1;
}

if(count < 3)
{
cout<<"Inadequate  number of parameters";
getch();
return 1;
}

ifstream fin;
fin.open(arg[1],ios::nocreate|ios::in|ios::binary);
//arg[1] is intented to be the source filename

if(fin==0)
{
cout<<"\nThe specified source file couldn't be found!";
getch();
return 1;
}

fin.getline(suBuffer,sizeof(suBuffer),EOF);

ofstream fout;
fout.open(arg[2],ios::out);
//arg[2] is intented to be the destination filename
fout.seekp(0);
fout.write(suBuffer,sizeof(suBuffer));

cout<<"\nCopy done successfully";
return 0;
}