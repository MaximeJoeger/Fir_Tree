#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void floors(int size)
{ int stars = 1;
  int saveStars = 1;
  int nbrfloor = 4;
  int saveFloor = 4;

  while(size > 0)
  {
    while(nbrfloor > 0)
    {
      while(stars > 0)
      {
        my_putchar('*');
        stars --;
      }
      my_putchar('\n');
      stars = saveStars + 2;
      saveStars = stars;
      nbrfloor --;
    }
    nbrfloor = saveFloor + 1;
    saveFloor = nbrfloor;
    stars = stars - 4;
    saveStars = stars;
    size --;
  }
}

void wood(int size)
{
  int nbr = size;
  int nbr2 = size;
  while(nbr > 0)
  {
    while(nbr2 > 0)
    {
      my_putchar('|');
      nbr2--;
    }
    my_putchar('\n');
    nbr--;
    nbr2 = size;
  }
}

void tree(int size)
{
  floors(size);
  wood(size);

}

int main()
{
  tree(5);
  return 0;
}
