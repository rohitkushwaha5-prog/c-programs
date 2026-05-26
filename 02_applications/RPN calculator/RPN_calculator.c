#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

#define SIZE 1000
#define SIZE2 100
#define number '0'

double val[SIZE];
char op[SIZE];
int sp=0;
int buff=0;

void push(double);
double pop(void);
int getop(char x[]);

int main()
{
    int type;
    double op2;
    char s[SIZE2];
    while((type=getop(s))!=EOF)
    {
        switch(type)
        {
            case  number :
            push(atof(s));
            break;

            case '+':
           push( pop()+pop());
            break;
           case '-':
           op2=pop();
           push(pop()-op2);
           break;

            case '*':
            push(pop()*pop());
            break;

            case '/':
            op2=pop();
            if(op2!=0.0)
              push(pop()/op2);
            else
              printf("divisible by zero is not posible");
            break;
            case '\n':
            printf("\t => %d",pop());
            break;
            default:
            printf("invalid input");

               
        }
    }
 return 0;
}
void push(double a ){
    if(sp<SIZE){
        val[sp++]=a;
    }
    else
    printf("no space left");
     

}
double pop(void)
{
    if(sp>0)
     return val[--sp];
    else{
        printf("stack is emplty");
        return  0.00;
    }
} 
int getop(char x []){ 
    

}

int getch(void)
{
    return (buff>0) ? op[--buff]: getchar();

}
int unget(int c)
{
    if(buff>=SIZE2)
    printf("too many charecters");
    else
      op[buff++]=c;
}