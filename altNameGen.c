#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void altNameGen(char input[], int length){
    char letter[] = "A";
    for(int i=0; i<length; i++){
        // if (input[i] == "A"){
        //     input[i] = 4;
        // }
        // if (strcmp(input[i], letter) == 0){
        //     input[i] = '4';
        // }
        if (input[i] == '4'){
            input[i] = 'A';
        }
        printf("ALT: %c\n", input[i]);
    }
    printf("success");
}

void validate(char input[], int length){
    if (length > 6){
        printf("Invalid plate. Try again.\n");
    }
    else{
        printf("Your plate has %d letters.\n", length);
        altNameGen(input, length);
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

// alphanum check
// identify > replace for each alt for all letters
// should have the option for the user to enter their preferred subs
// show a list of ur subs in a GUI
