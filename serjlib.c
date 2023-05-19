#include "serjlib.h"
#include <time.h>
#include <stdlib.h>

// numbers
int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}

int randomNumber(int min, int max) {
    srand(time(NULL)); 
    int number = (rand() % (max - min + 1)) + min; 
    return number;
}


// letters
char randomLetter() {
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    int size = sizeof(letters) - 1; 
    int index = rand() % size; 

    return letters[index]; 
}

char* wordsGenerator(int size) {
    char* word = (char*)malloc((size + 1) * sizeof(char));

    int i;
    for (i = 0; i < size; i++) {
        word[i] = randomLetter(); 
    }
    word[size] = '\0'; 

    return word;
}

void toUpperCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}

void toLowerCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - ('A' - 'a');
        }
        i++;
    }
}