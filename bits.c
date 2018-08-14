#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
//Complete the following function.

/*int maxValue(int myArray[], int size) {
    int maxValue = myArray[0];
    int i;
    for (i = 1; i < size; ++i) {
        if ( myArray[i] > maxValue ) {
            maxValue = myArray[i];
        }
    }
    return maxValue;
} */

void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int and[n]; 
    int or[n];
    int xor[n];
   int i;
    for ( i = 0; i < k-1; i++ ) {
            and[i]=i&(i+1);
            or[i]=i|(i+1);
            xor[i]=i^(i+1);
            
        }
    /*int m;
    for (m = 0; m < n; m++ ) {
      printf("Element[%d] = %d\n",m, xor[m] );
    }*/
    int s;
    int maxValue;
    maxValue=and[0];
    for (s = 1; s < k; ++s) {
        if ( and[s] > maxValue ) {
            maxValue = and[s];
        }
    }
    printf("%d\n",maxValue);
    
    int s2;
    int maxValue2;
    maxValue2=or[0];
    for (s2 = 1; s2 < k; ++s2) {
        if ( or[s2] > maxValue2 ) {
            maxValue2 = or[s2];
        }
    }
    printf("%d\n",maxValue2);
    
    int s3;
    int maxValue3;
    maxValue3=xor[0];
    for (s3 = 1; s3 < k; ++s3) {
        if ( xor[s3] > maxValue3 ) {
            maxValue3 = xor[s3];
        }
    }
    printf("%d\n",maxValue3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
