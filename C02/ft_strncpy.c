char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;
    i = 0;

    while (n < i && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while( n < i )
    {
        dest[i] != '\0';
        i++;


    }
    return  (dest);
    
}