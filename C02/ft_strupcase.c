char *ft_strupcase(char *str)
{
    int     i;
    i = 0 ;
    if(str[i] == '\0')
    {
        return (1);
    }
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i]= str[i]-32;
            return (0);
        }
        i++;
    }
    return (str);
}