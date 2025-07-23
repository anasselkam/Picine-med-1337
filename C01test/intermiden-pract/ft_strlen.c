#include <stdio.h>

int ft_strlen(char *str)
{
    int length;
    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return (length);
}

int main(void)
{
    char *test1;
    char *test2;
    int lengh1;
    int lengh2;

    test1 = "Hello guys, How are you";
    test2 = "";

    lengh1 = ft_strlen(test1);
    lengh2 = ft_strlen(test2);

    printf("The length of '%s' is %d\n", test1, lengh1);
    printf("The length of an empty string is %d\n", lengh2);
    return (0);
}
