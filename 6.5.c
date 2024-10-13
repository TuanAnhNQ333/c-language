#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guess ()
{
    srand(time(NULL));
    int r = rand()%10;
}
int main()
{
    int r = rand()%10;
    int n;
    printf("Guess my number (between 1 and 10 ) : ");
    scanf("%d", &n);
    
    if (n > r)
    {
        printf("Your guess was too big\n");
    }
    else if(n == r)
    {
        printf("Your guess was correct \n");
    }
    else if( n < r)
    {
        printf("Your guess was too small \n");
    }
    printf("The correct number was ");
    return 0;

}