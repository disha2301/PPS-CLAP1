#include <stdio.h>
int main(){
    int choice;
    int a,b;

  printf("Please a number of your choice to perform the respective task \n");
  printf("1 : Program to add the two given numbers and return the addition,subtraction,multiplication product \n");
  printf("2 : Program to divide the two given numbers and return the quotient and remainder\n");
  printf("3 : Program to demonstrate the BITWISE AND,OR,XOR  Operator.\n");
  printf("4 : Program to convert seconds to days hours minutes and seconds.\n");
  printf("5 : Program to demonstrate increment and decrement Operator.\n");
  printf("6 : Program to demonstrate the use of sizeOf Operator.\n");
  printf("7 : To exit the program.\n");
  
  printf("Kindly enter your choice.\n");
  scanf("%d",&choice);
  switch(choice){
      case 1:
      printf("Enter first number \n");
      scanf("%d",&a);
      printf("Enter second number \n");
      scanf("%d",&b);
      printf("Addition of %d and %d is %d\n",a,b,(a+b));
      printf("Subtraction of %d and %d is %d\n",a,b,(a-b));
      printf("Muntiplication of %d and %d is %d\n",a,b,(a*b));
      break;

      case 2:
      printf("Enter first number \n");
      scanf("%d",&a);
      printf("Enter second number \n");
      scanf("%d",&b);
      printf("Division of %d and %d is %d\n",a,b,(a/b));
      printf("Modulus of %d and %d is %d\n",a,b,(a%b));
      break;

      case 3:
       printf("Enter first number \n");
      scanf("%d",&a);
      printf("Enter second number \n");
      scanf("%d",&b);
      printf("Result of BITWISE AND = %d\n", a&b);
      printf("Result of BITWISE OR = %d\n", a|b);
      printf("Result of BITWISE XOR = %d\n", a^b);
      break;

      case 4:
       
       printf("Enter total number of seconds\n");
       int totalSeconds;
       scanf("%d",&totalSeconds);
     int seconds = (totalSeconds % 60); 
     int minutes = (totalSeconds % 3600) / 60; 
     int hours = (totalSeconds % 86400) / 3600;
     int days = (totalSeconds % (86400 * 30)) / 86400; 
     printf("The Duration is %d days %d hours %d minutes %d seconds\n",days,hours,minutes,seconds);
     break;

     case 5:
      printf("Enter a number\n");
      scanf("%d",&a);
      printf("Post increment result = %d\n",(a++));
      a=a-1;
      printf("Pre increment result = %d\n",(++a));
      a=a-1;
      printf("Post decrement result = %d\n",(a--));
      a=a+1;
      printf("Pre decrement result = %d\n",(--a));
      break;

      case 6:
      printf("Size of int is: %d\n",
           sizeof(int));
      printf("Size of char is: %c\n",
           sizeof(char));
      printf("Size of float is: %f\n",
           sizeof(float));
      printf("Size of double is: %ld\n",
           sizeof(double));
      break;

      case 7:
      exit(0);
      break;


      default :
      printf("Please enter a valid choice");
  }
  return 0;
}

