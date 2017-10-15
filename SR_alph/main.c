//
//  main.c
//  SR_alph
//
//  Created by Tatyana Volkorezova on 15.10.2017.
//  Copyright © 2017 shpp.com. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    char incomeLetter, outLetter;
    char alph[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    
    for(;;){
        printf("Enter letter: ");
        scanf(" %c", &incomeLetter);
        //check is it letter or smth else
        if (isalpha(incomeLetter)==0){
            printf("Incorrect input.\n");
            fpurge(stdin);
            continue;
        }
        break;
    }
    //make uppercase to lower case
    outLetter=tolower(incomeLetter);
    for (int i=0; i<sizeof(alph); i++){
        if (outLetter==alph[i]){
            printf("Result(the next letter is): %c\n", alph[i+1]);
        }
    }
    return 0;
}
