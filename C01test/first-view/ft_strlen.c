void    ft_strlen(char *str)
{
    int lenght;
    lenght = 0;
    while(str[lenght] != '\0')
    {
        lenght++;
    }
    retutn (lenght);
}