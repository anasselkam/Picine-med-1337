void    ft_rev_int_tab(int *tab, int size)
{
    int   start_index;
    int   end_index;
    int  temp;

    start_index =0;
    end_index= size -1;
    while (start_index < end_index)
    {
        temp = tab[start_index];
        tab[start_index] = tab[end_index];
        tab[end_index] = temp;

        start_index++;
        end_index--;
    }

    
}