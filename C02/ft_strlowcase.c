char *ft_strlowcase(char *str){
        int     i;
        i = 0;
        while ( str[i] == '\0')
        {
            return (1);
          
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i]+32;
            return (0);
        }
        i++;
    }
}