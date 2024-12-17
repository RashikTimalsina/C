#include <stdio.h>
#include <string.h>

int main(){

    char ch;
    int n;
    printf("\n Plese enter the character : ");
    scanf(" %c", &ch); // Remove space after %c

    printf("\n Please enter the character numbers to be stored :");
    scanf("%d", &n); // Remove space after %d

    int i = 0; // Initialize i to 0
    while(i < n){ // Change condition to i < n
        printf("The string formed is : %c\n", ch); // Add newline for better readability
        i++; // Move increment inside the loop
    }

    return 0;
}