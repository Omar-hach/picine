/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:23:43 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/26 17:24:22 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void Check_Queen_place(int clones, int rows)
{
    if (clone > 0)
    {

    } 
}
void ft_ten_queens_puzzle(void)
{
    char position[9];
    int i = 0;
    int postif_diag[17];
    int negatif_diag[17];
    int j;

    i = 0;
    while(i < 10)
    {
        j = i;
        if (i < 1)
            position[i] = i + '0';
        else if (position[i - 1] < position[i]+1 && position[i - 1] > position[i]-1)
            j = position[i-1] - '0' + 2;
        else if (negatif_diag[i + j] == 1)
            j++;
        else if(postif_diag[i - j + 9] == 1)
            j++;
        else
            j++;
        if (j > 10)
            j = j - 9;
        position[i] = j+ '0';
        postif_diag[i + j] = 1;
        negatif_diag[i - j + 9] = 1;
        write(1,&position[i],1);
        i++;
    }
}
int main()
{
    ft_ten_queens_puzzle();
}