#include <stdio.h>
#include <unistd.h> // for sleep()

int main() {
    printf("Loading ");
    for(int i=0; i<10; i++) {
        printf(".");
        fflush(stdout); // Force output to show immediately
        sleep(1); // Wait 1 second
    }
    printf("\nDone!\n");
    return 0;
}