//
//  main.c
//  Lab 6 Problem 2
//  Aiden Barrett
//  B00075033
//  A program using functions and structures.
//

#include <stdio.h>
#include <stdlib.h>


 enum{NORTH,SOUTH,EAST,WEST} direction;

int main()

{
    int i,n=0,s=0,e=0,w=0;
    srand ( time(NULL) );

    for (i=0;i<100;i++){
    direction=(rand()%4);

     switch(direction){


      case NORTH:
        n++;
       break;

      case SOUTH:
        s++;
       break;

      case EAST:
        e++;
        break;

      case WEST:
        w++;
        break;
     }

    }
   printf("North:%d\n\n",n);
   printf("South:%d\n\n",s);
   printf("East:%d\n\n",e);
   printf("West:%d\n",w);
}
