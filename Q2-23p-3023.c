#include <stdio.h>

                                                
int conjecture(int start_num) {  // Function to calculate the Collatz sequence length for a given starting number
    
    int num = start_num;
    
    int count = 1; // include also the starting number to get the right answer 

    while (num > 1) {
        
        if (num % 2 > 0)  // odd number
            
            num = 3 * num + 1;
        
        else
            num /= 2;

        count++;
    }

    return count;
}


void largest_seq(int limit, int *start_num, int *run) { // to find the longest Collatz sequence
    
    int large = 0;

    for (int i = 2; i < limit; i++) {
        
        int length = conjecture(i);
        
        if (length > large) {
        
            large = length;
        
            *start_num = i;
        
            *run = large;
        }
    }
}

int main() {
    
    int limit , start_num , run;

    printf("Enter the input or upper limit : \n");
    scanf("%d", &limit);

    largest_seq(limit, &start_num, &run);  // calling to function largest_sequecnce to find largest sequence

    printf("The starting number below %d that gives the longest or largest sequence is: %d\n\n", limit, start_num);
    printf("The length of the largest Collatz sequence is: %d\n", run);

    return 0;
}

