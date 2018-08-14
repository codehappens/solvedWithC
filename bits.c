#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
//Finally solved this before c drove me crazy :)
//https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
    

void calculate_the_maximum(int n, int k) {
  //Write your code here.
   int and =0 ;
    int or = 0;
    int xor = 0;
    
    int i;
    for (i = 1; i <= n; i++) {
        int j;
        for(j=i+1; j <= n; j++){
            int t1;
            int t2;
            int t3;
            t1=i&j;
            t2=i|j;
            t3=i^j;
            if((t1 > and) && (t1 < k)){
                and=t1;
            }
            if((t2 > or) && (t2 < k)){
                or=t2;
            }
            if((t3 > xor) && (t3 < k)){
                xor=t3;
            }
        }
        
    }
    printf("%d\n%d\n%d\n",and,or,xor);
    
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
