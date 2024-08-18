#include<stdio.h>
#include<string.h>
int my_strncmp(char* , char* , int);
int main()
{
    char s1[5] = {1,2,3,4,5} , s2[5] = {2,4,6,8,10};
    int n=3;
    int r= my_strncmp(s1,s2,n);
    if(r == 0)
    {
        printf("strings are equal");
    }
    else if(r>0){
        printf("s1 greater,s2 smaller");
    }
    else{
        printf("s1 smaller,s2 greater");
    }
    int my_strncmp(char*s1, char*s2,int n)
    {
        int i;
        for(i=0;(i<n)&&(s1[i]&&s2[i]&&(s1[i]==s2[i]));i++)
        if(i==n)
        return 0;
        else
        return s1[i]-s2[i];
    }
    
    
}
