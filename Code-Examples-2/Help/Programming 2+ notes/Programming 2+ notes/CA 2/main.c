/***********************************************************
 *
 * This program should:
 * a) Set bit 2 (the third one in from left) of number to 1
 *    WITHOUT changing any of the other bits.
 *    The answer should be 0xAE.
 * b) Clear bit 5 (the sixth one in from left) of number to 0
 *    WITHOUT changing any of the other bits.
 *    The answer should be 0x8A
 *
 ************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned char number = 0xAA;    //0xAA is 10101010 in binary
    unsigned char answer;           //I'm using unsigned chars as they are 8 bits long

    printf("The original number is:\t\t%X in hex or %d in decimal\n\n", number, number);

    //put code here to set bit 2 (the third one in from left) to a one
    //store the answer in answer.


    printf("The original number with bit 2 set to one is:\n\n\t\t\t\t%X in hex or %d in decimal\n\n", answer, answer);

    //put code here to clear bit 5 (the sixth one in from left) to zero
    //store the answer in answer.


    printf("The original number with bit 5 cleared to zero is:\n\n\t\t\t\t%X in hex or %d in decimal\n\n", answer, answer);

    system("PAUSE");
    return 0;
}
