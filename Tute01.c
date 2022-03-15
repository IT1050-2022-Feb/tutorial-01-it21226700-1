/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  int sub[2], i, total;

  for (i = 0; i < 2; i++)
  {
    printf ("Enter Subject %d mark : ", i + 1);
    scanf ("%d", &sub[i]);
    total = total + sub[i];
  }

  printf ("The average is :%.2f", total / 2.0);
  
  return 0;
}


#################################################################################################

/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int distance, amount;

  printf ("Distance -> ");
  scanf ("%d", &distance);

  if (distance <= 30)
  {
    amount = distance * 50;
  }
  else if (distance > 30)
  {
    amount = (30 * 50) + (distance - 30) * 40;
  }

  printf ("Amount = %d", amount);
  
  return 0;
}


##########################################################################################################

/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int num, sum = 0, i;

  printf ("n -> ");
  scanf ("%d", &num);

  for (i = 1; i <= num; i++)
  {
    sum  = sum + i;
  }
  
  printf ("Sum = %d", sum);

  return 0;
}

#############################################################################################################

/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum (int no1, int no2);
int maximum (int no1, int no2);
int multiply (int no1, int no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum (int no1, int no2)
{
  if (no1 < no2)
    return no1;
  else
    return no2;
}

int maximum (int no1, int no2)
{
  if (no1 > no2)
    return no1;
  else
    return no2;
}

int multiply (int no1, int no2)
{
  return no1 * no2;
}


