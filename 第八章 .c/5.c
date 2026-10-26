#include <stdio.h>

int main(void)
{
    int high=100;
    int low=1;
    int guess=(low+high)/2;
    char ch;
    printf("Pick an integer from 1 to 100, I will try to guess it.\n");
    printf("Respond with a b if my guess is bigger and with a s if my guess is smaller.\n");
    printf("Is your number 50?\n");
    while (1) 
    {
        ch = getchar(); 
        if(ch=='b')
        {
            high=guess-1;
            guess = (low+high) / 2; 
            printf("Well, is it %d?\n", guess);
        }
        else if (ch=='s') 
        {
            low=guess+1;
            guess = (low+high) / 2; 
            printf("Well, is it %d?\n", guess);
        }
        else if (ch=='y') 
        {
            printf("I know I can do it!\n");
            break; 
        }
        while (getchar() != '\n'); 
    }

    return 0;
}