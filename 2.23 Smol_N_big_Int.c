/******************************************************************************
Program:smolargeint-2.23
Purpose:Finding smallest and largest intiger
Author:Semicide
11/03/2022

*******************************************************************************/
#include <stdio.h>

int decide ();
int
main ()
{
  int num1;
  int num2;
  int num3;
  printf ("Num 1= ");
  scanf ("%d", &num1);
  printf ("Num 2= ");
  scanf ("%d", &num2);
  printf ("Num 3= ");
  scanf ("%d", &num3);
  decide (num1, num2, num3);
}

int
decide (int num1, int num2, int num3)
{
  if (num1 > num2)
    {

      if (num1 > num3)
	{
	  printf ("%d is the biggest", num1);


	}
      else
	{
	  printf ("%d is the biggest", num3);
	}

    }
  else
    {
      if (num2 > num3)
	{
	  printf ("%d is the biggest", num2);
	}
      else
	{
	  printf ("%d is the biggest", num3);
	}
    }
  if (num1 < num2)
    {

      if (num1 < num3)
	{
	  printf ("\n%d is the smallest", num1);


	}
      else
	{
	  printf ("\n%d is the smallest", num3);
	}

    }
  else
    {
      if (num2 < num3)
	{
	  printf ("\n%d is the smallest", num2);
	}
      else
	{
	  printf ("\n%d is the smallest", num3);
	}
    }
}
