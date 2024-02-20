#include<stdio.h>
        struct student
        {
          int sub1;
          int sub2;
          int sub3;
          int sub4;
          int sub5;
        };
            int main()
        {
             struct student s[10];
             int i,total=0;
      
             for(i=1;i<=5;i++)
                 {
                        printf("\nEnter Marks in 5 Subjects = ");
                        scanf("%d%d%d%d%d",& s[i].sub1,&s[i].sub2,&s[i].sub3,&s[i].sub4,&s[i].sub5);
                        total=s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5;
                        printf("\n Total Marks of s[%d] Student= %d",i,total);
                return 0;
         }
        }
