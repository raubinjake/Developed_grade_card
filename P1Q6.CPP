#include<stdio.h>
#include<conio.h>
void dummy(float *a)
 {
   float b=*a;
   dummy(&b);
 }
struct student
 {
   long int en_no;
   char s_name[22];
   float as_mcs011;
   float as_mcs012;
   float as_mcs013;
   float as_mcs014;
   float as_mcs015;
   float as_mcsl016;
   float as_mcsl017;
   float as_total;
   float as_per;
   float th_mcs011;
   float th_mcs012;
   float th_mcs013;
   float th_mcs014;
   float th_mcs015;
   float th_mcsl016;
   float th_mcsl017;
   float th_total;
   float th_per;
   float g_total;
   float g_per;

 };
int main()
 {
  int i;
  clrscr();
  student s[20];
  for(i=0;i<2;i++)
   {
    printf("Enter Enrollment No.:-");
    scanf("%ld",&s[i].en_no);
    gets("NULL");
    printf("Enter Student Name:-");
    gets(s[i].s_name);
    printf("\nEnter assignment Marks of ");
    printf("\nMCS011=");
    scanf("%f",&s[i].as_mcs011);
    printf("\nMCS012=");
    scanf("%f",&s[i].as_mcs012);
    printf("\nMCS013=");
    scanf("%f",&s[i].as_mcs013);
    printf("\nMCS014=");
    scanf("%f",&s[i].as_mcs014);
    printf("\nMCS015=");
    scanf("%f",&s[i].as_mcs015);
    printf("\nMCSL016=");
    scanf("%f",&s[i].as_mcsl016);
    printf("\nMCSL017=");
    scanf("%f",&s[i].as_mcsl017);
    printf("\n\nEnter Theory Marks of \n");
    printf("\nMCS011=");
    scanf("%f",&s[i].th_mcs011);
    printf("\nMCS012=");
    scanf("%f",&s[i].th_mcs012);
    printf("\nMCS013=");
    scanf("%f",&s[i].th_mcs013);
    printf("\nMCS014=");
    scanf("%f",&s[i].th_mcs014);
    printf("\nMCS015=");
    scanf("%f",&s[i].th_mcs015);
    printf("\nMCSL016=");
    scanf("%f",&s[i].th_mcsl016);
    printf("\nMCSL017=");
    scanf("%f",&s[i].th_mcsl017);
   }
   for(i=0;i<2;i++)
    {
     s[i].as_total=s[i].as_mcs011+s[i].as_mcs012+s[i].as_mcs013+s[i].as_mcs014+s[i].as_mcs015+s[i].as_mcsl016+s[i].as_mcsl017;
     s[i].as_per=s[i].as_total/7;
     s[i].th_total=s[i].th_mcs011+s[i].th_mcs012+s[i].th_mcs013+s[i].th_mcs014+s[i].th_mcs015+s[i].th_mcsl016+s[i].th_mcsl017;
     s[i].th_per=s[i].th_total/7;
     s[i].g_total=s[i].as_total+s[i].th_total;
     s[i].g_per=s[i].g_total/14;
     clrscr();
     printf("\n\t\t\t GRADE CARD OF MCA 1st SEMESTER");
     printf("\nEnrollment No.:-%ld",s[i].en_no);
     printf("\nCandidate Name:-%s",s[i].s_name);
     printf("\nProgram       :-MCA");
     printf("\n\nCourse\t\tAsgn1\tTheory1\t\tLab1");
     printf("\n Code \t\tMarks \t Marks \t\t Marks\n");
     printf("\nMCS011    \t%.2f \t %.2f \t",s[i].as_mcs011,s[i].th_mcs011);
     printf("\nMCS012    \t%.2f \t %.2f \t",s[i].as_mcs012,s[i].th_mcs012);
     printf("\nMCS013    \t%.2f \t %.2f \t",s[i].as_mcs013,s[i].th_mcs013);
     printf("\nMCS014    \t%.2f \t %.2f \t",s[i].as_mcs014,s[i].th_mcs014);
     printf("\nMCS015    \t%.2f \t %.2f \t",s[i].as_mcs015,s[i].th_mcs015);
     printf("\nMCSL016   \t%.2f \t \t\t %.2f",s[i].as_mcsl016,s[i].th_mcsl016);
     printf("\nMCSL017   \t%.2f \t \t\t %.2f",s[i].as_mcsl017,s[i].th_mcsl017);
     printf("\n\nTotal Assignment Marks= %.2f",s[i].as_total);
     printf("\nAssignment Avg= %.2f",s[i].as_per);
     printf("\nTotal Theory Marks= %.2f",s[i].th_total);
     printf("\nTheory Avg= %.2f",s[i].th_per);
     printf("\nGrand Avg=  %.2f",s[i].g_per);
     getch();
    }
   getch();
   return 0;
 }