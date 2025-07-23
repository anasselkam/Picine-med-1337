int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str [i] !='\0') {
		i++;
}
       return (i);

}
int main () 
{
    char *text1;
    char *text2;
    int	len1;
    int len2;
     
	text1 ="Hello";
	text2 ="This is a test.";
	
	len1 = ft_strlen(text1);
	len2 = ft_strlen(text2);

		ft_putnbr(len1);	
	 	ft_putnbr(len2);
return (0);
}
