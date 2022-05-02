#include <stdio.h>
#include <stdlib.h>

 
 

int main(int argc, char* argv[])
{   
 
    printf("HELLO\n");

    // Intake N of R(N) value from arguments. 

    float n = atoi(argv[1]); 

    // Testing outputs have been commented out
    // printf("%f", result);   
    // int counter = 0;

    // When i = 1, R(1) = 1 * 1/n. This is a special case outside the summation, so it set as the value of the result 
    // Acting as if i = 1 math is completed. The summation continues for values 2 to N-1. It stops at N-1 as written in the summation. 
    // The expression of 1/(n-i+1) imitates the value of the recursive (n-1) of the summation multiplier to the previous result. 
    float result = 1/n; 

    for(int i = 2 ; i<n; i++){ 

        result = result + (1/(n-i+1)) * result; 
    
         printf("%f\n", result);
        // counter++;
        // printf("%d\n", counter);
    }
    
    printf("%f", result);

    exit(EXIT_SUCCESS);

}

