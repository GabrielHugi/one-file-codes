// this code filters swear words in strings

#include <stdio.h>

// functions
int fFilter(char *a);
int fGetStringNewLineFromfgets(char *a);
int fRemoveStringNewLineFromfgets (char *a);

int main () {
    char word[1000];
    printf("Insert a string\n");
    fgets(word, 1000, stdin);
    *word = fRemoveStringNewLineFromfgets(word);
    *word = fFilter(word);
    printf("%s\n", word);



    return 0;
}

int fFilter (char *a) {
    // The filter can go to words up to 11 characters in lenght but more capacity can be added very easily and quickly if so is needed.
    int zero, one, two, three, four, five, six, seven, eight, nine, ten;
    zero = 0; one = 1; two = 2; three = 3; four = 4; five = 5; six = 6; seven = 7; eight = 8; nine = 9; ten = 10;
    while (zero != 1000) {
        /*
        * the if statements are the words that should be filtered
        * the words should be listed from bigger to smaller. for example:
        * "fucker" should come before "fuck", otherwise the code will detect "fuck" first and then
        * will return "****er" instead of "******"
        * this program only has 4 words on the filter because its made to demonstrate the algorithm.
        */


        // word: idiotic
        // size: 7
        if (a[zero] == 'i' && a[one] == 'd' && a[two] == 'i' && a[three] == 'o' && a[four] == 't' && a[five] == 'i' && a[six] == 'c') {
            a[zero] = '*'; a[one] = '*'; a[two] = '*'; a[three] = '*'; a[four] = '*'; a[five] = '*'; a[six] = '*';
        }
        // word: fucker 
        // size: 6
        if (a[zero] == 'f' && a[one] == 'u' && a[two] == 'c' && a[three] == 'k' && a[four] == 'e' && a[five] == 'r') {
            a[zero] = '*'; a[one] = '*'; a[two] = '*'; a[three] = '*'; a[four] = '*'; a[five] = '*';; 
        }
        // word: idiot
        // size: 5
        if (a[zero] == 'i' && a[one] == 'd' && a[two] == 'i' && a[three] == 'o' && a[four] == 't') {
            a[zero] = '*'; a[one] = '*'; a[two] = '*'; a[three] = '*'; a[four] = '*'; 
        }
        // word: fuck
        // size: 4
        if (a[zero] == 'f' && a[one] == 'u' && a[two] == 'c' && a[three] == 'k') {
            a[zero] = '*'; a[one] = '*'; a[two] = '*'; a[three] = '*';; 
        }
        // Loop
        zero++; one++; two++; three++; four++; five++; six++; seven++; eight++; nine++; ten++;
    }
    return *a;
}

// Gets the position of '\n' added by fgets at the end of the string and returns the position.
int fGetStringNewLineFromfgets (char *a) {
    int x = 0;
    while (a[x] != '\0') {
        x++;
    }
    return x-1;
}

// Gets the position of '\n' added by fgets at the end of the string and removes it.
int fRemoveStringNewLineFromfgets (char *a) {
    int x = 0;
    while (a[x] != '\0') {
        x++;
    }
    if (a[x] == '\0') a[x-1] = '\0';
    return *a;
}