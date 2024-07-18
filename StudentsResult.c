#include<stdio.h>
int main()
{
  int marks;
  printf("\n Enter Marks from 0-70:");
  scanf("%d",&marks);
  if(marks<23)
  {
  printf("\n sorry..!You are fail");
  }
  else
  {
  printf("\n congratulation..!You are pass");
  }
  return 0;
  }
