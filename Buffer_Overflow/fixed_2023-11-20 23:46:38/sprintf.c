#include <stdio.h>
#include <stdlib.h>
 
enum { BUFFER_SIZE = 10 };
 
int main() {
    char buffer[BUFFER_SIZE + 1];
    int check = 0;
 
    snprintf(buffer, sizeof(buffer), "%s", "This string is too long!");
 
    printf("check: %d", check); /* This will now print 0! */
 
    return EXIT_SUCCESS;
}
