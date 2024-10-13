#include<stdio.h>
int main()
{
    
    char s;  // s la loai xe
    printf("Your type of car : \n ");
    printf("Luu y : \n C la xe con \n B la xe bus \n T la xe tai\n");
    scanf("%c", &s);
    double t; // t la thoi gian gui xe tinh theo h
    printf("your time you have parked : \n");
    scanf("%lf", &t);
    double pay;
    if( s == 'C')
    {
        if ((t >= 0) && (t <= 2))
        {
            pay = t * 0.7;
            printf("Your pay is : %lf $\n", pay);
        }
        else if (t > 2)
        {
            pay = 0.7 * 2 + (t - 2) * 2.5;
            printf("Your pay is : %lf $\n", pay);
        }  
    }
    else if( s == 'B')
    {
        if ((t >= 0) && (t <= 2))
        {
            pay = t * 1.5;
            printf("Your pay is %lf $\n", pay);
        }
        if ( t > 2)
        {
            pay = 1.5 * 2 + (t - 2) * 2.0;
            printf("Your pay is %lf $\n", pay);
        }

    }
    else if ( s == 'T')
    {
        if ((t >= 0) && (t <= 1))
        {
            pay = t * 2.5;
            printf("Your pay is %lf $\n",  pay );
        }
        else if( t > 1)
        {
            pay = 2.5 * 1 + (t - 1) * 3.25;
            printf("Your pay is %lf $\n", pay);
        }
    }
    return 0;

}