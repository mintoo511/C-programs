#include<stdio.h>
int main()
{
    int n,x,num,r,a=-1;
    printf("            GUESS MY NUMBER          \n");
    printf("enter 1 to start game\n");
    printf("enter 2 to exit game\n");
    while(1)
    {
        scanf("%d",&x);
        if(x==2)
            break;
        if(x==1)
        {
           printf("enter the maximum range of random number\n");
           scanf("%d",&r);
           num=rand()%r;
       //    printf("%d\n",num);             //this is random number generated , uncomment it for debugging purpose.
           printf("enter your expected number\n");
           while(a!=num)
           {

               scanf("%d",&a);
               if(a<num)
               {
                   printf("Lower than X\n");
               }
               else if(a>num)
               {
                   printf("Greater than X\n");
               }
               else if(a==num)
               {
                   printf("Correct,YOU WON !!!!\n");
                   break;
               }
           }
        }
    printf("enter 1 to re-start game\n");
    printf("enter 2 to exit game\n");
    }
    return 0;
}
