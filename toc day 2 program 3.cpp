#include <stdio.h>

int main() {
    int state = 0;
    char input[100];

    printf("Enter input string: ");
    scanf("%s", input);

    for(int i = 0; input[i] != '\0'; i++) {
        char symbol = input[i];

        switch(state) {
            case 0:
                if(symbol == '0')
                    state = 1;
                else
                    state = 3;
                break;
            case 1:
                if(symbol == '0')
                    state = 1;
                else if(symbol == '1')
                    state = 2;
                else
                    state = 3;
                break;
            case 2:
                if(symbol == '1')
                    state = 2;
                else
                    state = 3;
                break;
            case 3:
                break;
        }
  }

    if(state == 2)
        printf("Accepted\n");
    else
        printf("Rejected\n");

}
