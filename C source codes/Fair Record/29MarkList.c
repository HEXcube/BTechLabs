/*Program to print the Mark list of N students. (Use necessary details).*/

typedef struct
{
 char name[30],branch[4];
 unsigned int roll,year,age,phy,mat,com;
} student;

typedef union
{
 int total;
 float avg;
} result;

void main()
{
 student S[50];
 result tmp;
 unsigned int lim,i;                       //lim is the number of students
 clrscr();

 printf("Enter the number of students : ");
 scanf("%u",&lim);

 printf("Enter the details of each student:\n");
 for(i=0;i<lim;i++)
 {
  flushall();
  printf("\nStudent %u -\n",i+1);
  printf("Name     :");gets(S[i].name);
  printf("Roll no  :");scanf("%u",&S[i].roll);
  printf("Enter the marks-\n");
  printf("Physics   :");scanf("%u",&S[i].phy);
  printf("Maths     :");scanf("%u",&S[i].mat);
  printf("Computer  :");scanf("%u",&S[i].com);
 }

 printf("\nThe Marklist of %u students are-\n",lim);
 for(i=0;i<lim;i++)
 {
  tmp.total=S[i].phy+S[i].mat+S[i].com;
  printf("\nStudent %u -\n"
         "Name     : %s\n"
         "Roll no  : %u\n"
         "Marks-\n"
         "Physics  : %u\n"
         "Maths    : %u\n"
         "Computer : %u\n"
         "Total    : %u\n"
	,i+1,S[i].name,S[i].roll
	,S[i].phy,S[i].mat,S[i].com
	,tmp.total);
  tmp.avg=tmp.total/3.0;
  printf("Average  : %.2f\n",tmp.avg);
 }

 printf("\nPress any key....");
 getch();
}
/*OUTPUT

Enter the number of students : 3
Enter the details of each student:

Student 1 -
Name     :Majin Buu
Roll no  :666
Enter the marks-
Physics   :99
Maths     :45
Computer  :78

Student 2 -
Name     :Cell
Roll no  :21
Enter the marks-
Physics   :90
Maths     :89
Computer  :94

Student 3 -
Name     :Broly
Roll no  :10000
Enter the marks-
Physics   :98
Maths     :67
Computer  :44

The Marklist of 3 students are-

Student 1 -
Name     : Majin Buu
Roll no  : 666
Marks-
Physics  : 99
Maths    : 45
Computer : 78
Total    : 222
Average  : 74.00

Student 2 -
Name     : Cell
Roll no  : 21
Marks-
Physics  : 90
Maths    : 89
Computer : 94
Total    : 273
Average  : 91.00

Student 3 -
Name     : Broly
Roll no  : 10000
Marks-
Physics  : 98
Maths    : 67
Computer : 44
Total    : 209
Average  : 69.67

Press any key....
*/