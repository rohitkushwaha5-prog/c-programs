#include <stdio.h>
#define maX 1000
int getline(char line[], int max)
{
    int c,i=0;
    while((c=getchar())!=EOF && --max>0 && c !='\n') 
    {
      line[i++]=c;
    }
    if(c=='\n')
     line[i++]=c;
    line[i]='\0';
    return i;
}
int strindex(char s[],char p[])
{
     int i ,j,k;
     for(i=0;s[i]!='\0';i++){
       for(j=i,k=0;p[k]!='\0'&& s[j]==p[k];j++,k++);
       if(k>0 && p[k]=='\0')
         return i;}
         return -1;
}
int main()
{
 char s[maX] ;
 char p[]="rohit";
 int z;
while(getline(s,maX)>0){
   z=strindex(s,p);
   if(z>=0){
    printf("%s",s);
    printf("at index  %d \n",z);
   }
}
return 0;}



