#include <stdio.h>
#include <stdlib.h>

char *missing_binary_string(int length, char numbers[length][length + 1]) {
    char *number = malloc((length + 1) * sizeof(char));
    if(number == NULL) return NULL;

    int i;
    for(i = 0;i<length;i++) {
        if(numbers[i][i] == '0')
        {
            number[i] = '1';
        } else
        {
            number[i] = '0';
        }
    }

    number[length] = '\0';

    return number;
}

int main()
{
    int n;
    char digit;

    do {
        printf("Give me the length of the table (strictly positive): ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter an integer.\n");

            while (getchar() != '\n');
            n = 0;
        }
    } while (n <= 0);

    char nums[n][n+1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            do {
                printf("Give me the digit number %d of the number n°%d. You must enter 0 or 1 : ", j+1, i+1);
                scanf(" %c", &digit);
            } while (digit != '0' && digit != '1');

            nums[i][j] = digit;
        }
        nums[i][n] = '\0';
    }

    char *result = missing_binary_string(n, nums);

    if (result != NULL) {
        printf("One of the binary numbers that is missing is : %s\n", result);
        free(result);
    } else
        printf("Memory allocation failed.");
    return 0;
}
