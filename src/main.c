#include <stdio.h>
#include <stdlib.h>

#include "../header/types.c"

static unsigned int print_menu();
static bool check_choice(unsigned int choice);

int main(int argc, const char **argv){
    unsigned int choice = print_menu();
    printf("You selected: %u", choice);
    return EXIT_SUCCESS;
}

static unsigned int print_menu(){
    unsigned int choice = 0;
    printf("\t ========== Password Manger ==========\n");
    printf("\t 1. Generate random password.\n");
    printf("\t 2. Show passwords.\n");
    printf("\t 3. Remove a password.\n");
    printf("\t 4. Modify a password.\n");
    printf("\t 0. Exit.\n");
    printf("\t Select a number: ");
    scanf("%u", &choice);
    if (check_choice(choice) == true){
        return choice;
    }else{
        system("cls");
        return print_menu();
    }
}

static bool check_choice(unsigned int choice){
    if ((choice <= 4) && (choice >= 0)){
        return true;
    }
    return false;
}
