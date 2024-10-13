#include<stdio.h>
#include<limits.h>
#include<stdint.h>
// char, int, short, long, long long, 

int main() 
{ 
   
   printf("kich co MIN cua char la : %d\n ", CHAR_MIN);
   printf("kich co MAX cua char la : %d\n", CHAR_MAX);
   
   printf("kich co MIN cua int la : %d\n ", INT_MIN);
   printf("kich co MAX cua int la : %d\n", INT_MAX);
   
   printf("kich co MIN cua SHORT la : %hi\n ", SHRT_MIN);
   printf("kich co MAX cua SHORT la : %hi\n", SHRT_MAX);
   
   printf("kich co MIN cua LONG la : %ld\n ", LONG_MIN);
   printf("kich co MAX cua LONG la : %ld\n", LONG_MAX);
   
   printf("kich co MIN cua LONG LONG la : %lld\n ", LLONG_MIN);
   printf("kich co MAX cua LONG LONG la : %lld\n", LLONG_MAX);
   
   return 0;
   }