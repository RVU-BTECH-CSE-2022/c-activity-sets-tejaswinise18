#include<stdio.h>
int input();
void add(int a, int b,int*sum);
void output(int a,int b,int sum);
int main()
  {
    a = input();
    b = input();
    int sum;
    sum = add(a, b&sum);
    output(a,b,sum);
  }
  int input()
  {
    int x;
    printf("Enter the number\n");
    scanf("%d", &a);
    return (x);
    }
  
  void add(int a, int b,int*sum)
{
    int sum;
    sum = a+b;
    return sum;
  }
  void output(int a, int b, int sum){
   printf("the sum of %d and %d is %d\n",a,b,sum);
  } 