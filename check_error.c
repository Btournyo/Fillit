/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 16:36:41 by btournyo          #+#    #+#             */
/*   Updated: 2019/01/10 19:48:22 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * motif du tetrimino valable
 */

int form_tetri(list t_list)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*str)
	{
		while (i < 20)
		{
			if (str[i] == '#' && str[i + 1] == '#')
				count++;
			if (str[i] == '#' && str[i - 1] == '#')
				count++;
			if (str[i] == '#' && str[i + 5] == '#')
				count++;
			if (str[i] == '#' && str[i - 5] == '#')
				count++;
		}
		i++;
	}
	return (count);
}

/*
 * on checke les points, les #, la taille du tetri et la forme
 */

int	bon_tetri(list t_list)
{
	int i;

	i = 0;
	while (*str)
	{
		if (str[i] != '#' && str[i] != '.')
			return (1);
		if (form_tetri(list) != 6 || form_tetri(list) != 8)
			return (2);
		if (check_file(buf, ret) == 0)
			return (3);
		if (i > 20  && str[21] != '\n')
			return (4);
		if (((i % 5) == 0) && str[i] != '\n')
			return (5);
		i++;
	}
	return (0);
}

int	nbr_tetri()
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if ((i % 21) == 0 && str[i] == '\n')
			nbr++;
		i++;
	}
	return (nbr);
}
