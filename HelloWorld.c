#include <stdio.h>
#include<stdlib.h>

int main()
{
  /*the below is a string */
  char name[] = "Abubakar Sadiq ismail";
  /*characters are nomally stored in a single quoatation*/
  char alpha = 'a';
  int age = 19;
  double height = 2.3;
  printf("Hello World!\n");
  printf("%s\n",name);
  printf("He is %d.\n",age);
  /*In C if you want to print a number or string var you must */
  /*use formart specifier */
  char color[] = "blue";
  printf("my favorite number is %d and my favorite color is %s \n",1111,color);
}