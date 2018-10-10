#define ABS_VAL 0.000001
void p8_8(void)
{
    float number1 = 0.0;
    float number2 = 0.0;
    char choice = 0;

    do
    {
        printf("Enter the operation of your choice:\n");
        printf("%-20s%-20s\n%-20s%-20s\n%-20s\n", "a. add", "s. subtract", "m. multuply", "d. divide", "q. quit");
        // 如果scanf的返回值为1并且输入值是a、s、m、d、q中之一代表输入成功，这里取反剔除不符合条件的输入
        if (!(scanf("%c", &choice) == 1 && (('a' == choice) || ('s' == choice) || ('m' == choice) || ('d' == choice) || ('q' == choice))))
        {
            printf("Please enter the correct operation, please enter again!\n");
            while (getchar() != '\n')
            {
                continue;
            }
            continue;
        }
        getchar();

        if ('q' == choice)
        {
            printf("Bye!\n");
            return;
        }

        printf("Enter first number:");
        while (scanf_s("%f", &number1) != 1)
        {
            char ch = 0;
            while ((ch = getchar()) != '\n')
            {
                putchar(ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        getchar();

        printf("Enter second number:");
        while (scanf_s("%f", &number2) != 1)
        {
            char ch = 0;
            while ((ch = getchar()) != '\n')
            {
                putchar(ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        getchar();

        switch (choice)
        {
        case 'a':
            printf("%f + %f = %f\n", number1, number2, (number1 + number2));
            break;

        case 's':
            printf("%f - %f = %f\n", number1, number2, (number1 - number2));
            break;

        case 'm':
            printf("%f * %f = %f\n", number1, number2, (number1 * number2));
            break;

        case 'd':
            //在阈值区间内，将输入值判断为零，要求重新输入
            while (number2 > -ABS_VAL && number2 < ABS_VAL)
            {
                printf("Enter a number other than 0:");
                while (scanf_s("%f", &number2) != 1)
                {
                    char ch = 0;
                    while ((ch = getchar()) != '\n')
                    {
                        putchar(ch);
                    }
                    printf(" is not an number.\n");
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }
                getchar();
            }
            printf("%f / %f = %f\n", number1, number2, (number1 / number2));
            break;

        default:
            break;
        }
    } while (1);

    return;
}

int main(int argc, char **argv)
{
    p8_8();

    while (getchar());

    return 0;
}
