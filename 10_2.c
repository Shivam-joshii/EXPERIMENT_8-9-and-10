//stamdard lib.demo

#include <stdio.h>      // printf, scanf
#include <ctype.h>      // toupper
#include <stdlib.h>     // atoi
#include <assert.h>     // assert
#include <stdarg.h>     // va_list
#include <time.h>       // time
#include <math.h>       // sqrt
#include <string.h>     // strlen

void demo_stdarg(int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        printf("%d ", va_arg(args, int));
    }
    va_end(args);
    printf("\n");
}

int main() {
    char text[] = "hello";
    printf("Length: %lu\n", strlen(text));           // string.h
    printf("Upper: %c\n", toupper(text[0]));        // ctype.h
    assert(atoi("123") == 123);                     // stdlib.h, assert.h
    
    time_t now = time(NULL);                        // time.h
    printf("Current time: %s", ctime(&now));
    
    printf("Sqrt(16): %.1f\n", sqrt(16));           // math.h
    
    demo_stdarg(3, 10, 20, 30);                     // stdarg.h
    
    return 0;
}
