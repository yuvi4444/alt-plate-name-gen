#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void generateCombinations(char word[], int length, int index) {
    if (index == length) {
        printf("%s\n", word);
        return;
    }

    // Replace the current character with specific replacements
    if (word[index] == 'A') {
        word[index] = '4';
        generateCombinations(word, length, index + 1);
        word[index] = 'A';  // Reset for other replacements
    }
    else if (word[index] == 'B') {
        word[index] = '8';
        generateCombinations(word, length, index + 1);
        word[index] = 'B';  // Reset for other replacements
    }
    else if (word[index] == 'E') {
        word[index] = '3';
        generateCombinations(word, length, index + 1);
        word[index] = 'E';  // Reset for other replacements
    }
    else if (word[index] == 'I') {
        word[index] = '1';
        generateCombinations(word, length, index + 1);
        word[index] = 'I';  // Reset for other replacements
    }
    else if (word[index] == 'O') {
        word[index] = '0';
        generateCombinations(word, length, index + 1);
        word[index] = 'O';  // Reset for other replacements
    }
    else if (word[index] == 'S') {
        word[index] = '5';
        generateCombinations(word, length, index + 1);
        word[index] = 'S';  // Reset for other replacements
    }
    else if (word[index] == 'T') {
        word[index] = '7';
        generateCombinations(word, length, index + 1);
        word[index] = 'T';  // Reset for other replacements
    }
    else if (word[index] == 'G') {
        word[index] = '6';
        generateCombinations(word, length, index + 1);
        word[index] = 'G';  // Reset for other replacements
    }

    // Proceed without replacement for the current position
    generateCombinations(word, length, index + 1);
}

void validate(char input[], int length){
    if (length > 6){
        printf("Invalid plate. Try again.\n");
    }
    else{
        printf("Your plate has %d letters.\n", length);
        generateCombinations(input, length, 0);
    }
}

int main(){
    char input[6];
    printf("Enter your plate number: ");
    scanf("%s", &input);
    int length = strlen(input);
    validate(input, length);
    return 0;
}

// alphanum check on input
// identify > replace for each alt for all letters
// should have the option for the user to enter their preferred subs
// show a list of ur subs in a GUI
// check if i can get access to the actual API to check for availability
