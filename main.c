#include<stdio.h>
int main(int args, char **argv)
{
    int sum=0;
    for(int i=1;argv[i]!=NULL;i++)
    {
        int s=0;
        for(int j=0;argv[i][j] != '\0'; j++)
        {
                s=s*10+argv[i][j]-48;
        }
        sum+=s;
    }
    float avrg=sum/(float)(args-1);
    printf("Average is %g\n",avrg);
    
}
