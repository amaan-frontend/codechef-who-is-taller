#include <stdio.h>

int main(void) {
	// your code goes here
	
	   int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (X > Y) {
            printf("A\n");
        } else {
            printf("B\n");
        }
    }
	
	return 0;
}

