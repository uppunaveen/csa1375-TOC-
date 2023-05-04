#include<stdio.h>
#include<string.h>
#define STATE_A 0
#define STATE_B 1
#define STATE_C 2
int main()
 {
    char input[100];
    int state = STATE_A;
    printf("Enter a string: ");
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++) {
        char c = input[i];
        switch (state) {
            case STATE_A:
                if (c == 'a')
				{
                    state = STATE_B;
                } else
				 {
                    state = STATE_C;
                }
                break;
            case STATE_B:
                if (c == 'a') {
                    state = STATE_B;
                } else {
                    state = STATE_C;
                }
                break;
            case STATE_C:
                break;
        }
    }

    if (state == STATE_B) {
        printf("The input string is accepted by the DFA.\n");
    } else {
        printf("The input string is not accepted by the DFA.\n");
    }

}
