#include <stdio.h>
#include <stdlib.h>
 /*(do_it.h)
    #ifndef DO_IT_H
    #define DO_IT_H
    float do_it(char a,char b, char c)
    #endif // DO_IT_H*/





/*(print_a_number.h)
#ifndef PRINT_A_NUMBER_H
#define PRINT_A_NUMBER_H
void print_a_number(int y)
#endif // PRINT_A_NUMBER_H
*/




 //The print_msg() function is not supposed to take any arguments but the main function calls it with a string argument

 #include <stdio.h>
    void print_msg( void );
    main(){
    print_msg("This is a message to print");
    return 0;
    }
    void print_msq( void )
    {
    puts("This is a message to print");
    return 0;
    }
