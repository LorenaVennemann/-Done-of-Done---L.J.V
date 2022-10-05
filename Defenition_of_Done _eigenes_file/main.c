/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Jilve
 *
 * Created on 5. Oktober 2022, 14:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

   int main(int argc, char** argv) {
    int num = 0;
    int guess = 0;
    int tries = 8;
    
    num = rand() % 100+1; 

    printf("Guess My Number Game\n\n");

    
    do
    { printf("Errate eine Nummer zwischen 1 und 100, du hast 8 Versuche : ");
        scanf("%d", &guess);
        tries--;

        if (guess>num)
        { printf("tiefer!\n\n");
        }
        else if (guess<num)
        {     printf("hoeher!\n\n");
        }
        else if (guess==num)
        {printf("Richtig!, du hast die Nummer erraten!\n", num);
         break;
         }
             }
 while(tries != 0);
   
  
    
    return (EXIT_SUCCESS);
}
