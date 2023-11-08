#include <stdio.h>
int isThreeConsecutiveOnes(char *inputString) {
    char currentState = 'p';
    int i;
    for(i = 0; inputString[i] != '\0'; i++) {
        char input = inputString[i];
        if (input == '0') {
        	if (currentState == 'p')
                currentState = 'p';
        	else if (currentState == 'q')
                currentState = 'p';
            else if (currentState == 'r')
                currentState = 'p';
            else
                currentState = 's';
        }else if (input == '1') {
            if (currentState == 'p')
                currentState = 'q';
            else if (currentState == 'q')
                currentState = 'r';
            else if (currentState == 'r')
                currentState = 's';
            else if (currentState == 's')
                currentState = 's';
            // Invalid state, reject the string
        } else {
            return 0; // Invalid input character, reject the string
        }
    }
    // Check if the final state is q3 (accepting state)
    if (currentState == 's')
        return 1;
    else
        return 0;
}
int main() {
    char inputString[100];
    printf("Enter the input string: ");
    scanf("%s", inputString);
    if (isThreeConsecutiveOnes(inputString)) {
        printf("String accepted!\n");
    } else {
        printf("String rejected!\n");
    }
    return 0;
}