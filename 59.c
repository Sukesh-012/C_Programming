#include <stdio.h>
int perfect(int);
void list_perfect(int);
int main() {
    int i;
    for (i=2; i<10000; i++) {
        if (perfect(i)) {                 
            printf("These are the perfect numbers:\n");
            list_perfect(i);
        }
    }
    return 0;
}
