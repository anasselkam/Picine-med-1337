void ft_ultimate_div_mod(int *a, int *b)
{
	int temp_p;
if ( *b != 0)
{
	temp_p = *a;
	*a = temp_p / *b;
	*b = temp_p % *b;
}
}
