#include<stdio.h>
void cube(){
int fibo;
int num1=0;
int num2=1;

for(int a=1;a<=10;a++){
fibo=num1+num2;
num1=num2;
num2=fibo;
printf("%d\n",num1);
}

}



int main()
{

cube();

return 0;

}