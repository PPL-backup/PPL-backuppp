 #include<stdio.h>
 struct student {
     int fail_cnt;
     int sub1;
     int sub2;
     int sub3;
     int sub4;
     int sub5;
     int percentage;

   }Std[10];

   
int main()
{
    int i;
   
    int oneSubFail=0;
    int overall =0;
    int totalpassing=0;
    int distinction_ct=0;
   
    for(i=1;i<=10;i++)
    {
     Std[i].fail_cnt=0;
     printf("Enter the marks of Student %d in 5 subjects :\n" ,i);
     scanf("%d",&Std[i].sub1);
       if(Std[i].sub1<35)
  Std[i].fail_cnt++;
       scanf("%d",&Std[i].sub2);
       if(Std[i].sub2<35)
          Std[i].fail_cnt++;
       scanf("%d",&Std[i].sub3);
       if(Std[i].sub3<35)
          Std[i].fail_cnt++;
       scanf("%d",&Std[i].sub4);
       if(Std[i].sub4<35)
          Std[i].fail_cnt++;
       scanf("%d",&Std[i].sub5);
       if( Std[i].sub5<35)
          Std[i].fail++;
         
          if(Std[i].fail_cnt==1){
        oneSubFail++;
}


}
printf("Total number of students failed in exactly one subject is: ",oneSubFail);
         
       
    return 0;
}

  

