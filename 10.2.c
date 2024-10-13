#include <stdio.h>
#include<string.h>

#define ARRAY_SIZE 100

int main() {
    long int sum;
    int arr[ARRAY_SIZE]={0};
    int count = 0;

    for (int i = 0; i < ARRAY_SIZE; i++) {
    
        if((scanf("%d ", &arr[i]))!=1) {
            break;
        }
        count++;
        
    }
    sum = 0;
    int i;
    for( i = 1; i < count - 1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i + 1])
        sum += arr[i];
    }
    printf("%ld\n", sum);


    return 0;
}
