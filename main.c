#include <stdio.h>
#include <stdlib.h>
// Online C compiler to run C program online

int main() {
    // Write C code here
    // Variable declaration
    unsigned long long int previousTerm = 0, currentTerm = 1, sum = 0, inputNumber, index = 1;

    // Asks for user input
    printf("Enter the a Fibonacci number: ");
    scanf("%llu", &inputNumber);

    // Handle special case for Fibonacci numbers 0 and 1
    if (inputNumber == 0) {
        printf("The Fibonacci number %llu is at index 0 in the Fibonacci Series.\n", inputNumber);
        return 0; // Terminate the program
    }
    else if(inputNumber == 1){
        printf("The Fibonacci number %llu is at index 1 and 2 in the Fibonacci Series.\n", inputNumber);
        return 0; // Terminate the program
    }

    // Loop to find the index of a Fibonacci number
    while(sum < inputNumber){
        index++; // increment the index

        // Calculate the next Fibonacci number
        sum = previousTerm + currentTerm;   // Find the next term
        previousTerm = currentTerm;         // Update the previous term
        currentTerm = sum;                  // Update the current term
    }

    // Check if the number is a Fibonacci number
    if (sum == inputNumber){
        printf("The Fibonacci number %llu is at index %llu in the Fibonacci Series.\n", inputNumber, index);
        //break;  // Exit the loop
    }
    else{
        printf("%llu is not a Fibonacci number.\n", inputNumber);
        //break;  // Exit the loop
    }

    return 0; // Terminate the program
}
