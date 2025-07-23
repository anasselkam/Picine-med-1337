#include <stdio.h>
void    ft_rev_int_tab(int *tab, int size)
{
    int     start_index;
    int     end_index;
    int     temp;

    start_index = 0;
    end_index = size-1;
    while (start_index < end_index)
    {
        temp = tab[start_index];
        tab[start_index] = tab[end_index];
        tab[end_index]  = temp;

        start_index++;
        end_index--;
    }
    
}
void    print_array(int *tab, int size)
{
    int     i;
    i = 0;
    while ( i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
    
}
int main(void)
{
    int     my_array[]={1,2,3,4,5,6,};
    int    size = 6;
    printf("original array: ");
    print_array(my_array, size);

    ft_rev_int_tab(my_array, size);

    printf("Reversed array : ");
    print_array(my_array, size);

    return  (0);
}