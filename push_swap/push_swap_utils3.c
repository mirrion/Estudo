/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:53:07 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/23 10:04:31 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_stack(t_data *new, int *buff, size_t count)
{
	size_t	i;

	i = 0;
	while (count > i)
	{
		new->a[new->element_count + i] = buff[i];
		i++;
	}
	new->element_count += count;
	free(buff);
}

static int	make_words(char const *str, char **array)
{
	int	length;
	int	i;

	i = 0;
	while (*str)
	{
		length = 0;
		if (*str != 32 && *str != 9)
		{
			while ((*str != 32 && *str != 9) && *str != 0)
			{
				str++;
				length++;
			}
			array[i++] = malloc(sizeof(char) * (length + 1));
			if (!array)
				return (i);
		}
		else
			str++;
	}
	return (0);
}

static void	rewrtite(char const *str, char **array)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str != 32 && *str != 9)
		{
			while ((*str != 32 && *str != 9) && *str != 0)
			{
				array[i][j] = *str;
				str++;
				j++;
			}
			array[i][j] = 0;
			i++;
		}
		j = 0;
		if (*str != 0)
			str++;
	}
}

char	**split_str(char const *str, size_t words)
{
	char	**array;
	int		temp;

	if (!str)
		return (NULL);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		exit_error();
	array[words] = NULL;
	temp = make_words(str, array);
	if (temp != 0)
	{
		while (temp != 0)
		{
			free(array[temp]);
			array[temp--] = NULL;
		}
		free(array);
	}
	else
		rewrtite(str, array);
	return (array);
}

void	separate(int argc, char **argv, t_data *new)
{
	int		i;
	size_t	j;
	size_t	count;
	char	**array;
	int		*buff;

	i = 1;
	while (i < argc)
	{
		j = 0;
		count = word_count(argv[i], 32);
		array = split_str(argv[i], count);
		buff = malloc(sizeof(int) * count);
		if (!buff)
			exit_error();
		while (count > j)
		{
			buff[j] = ft_atoi(array[j]);
			free(array[j++]);
		}
		free(array);
		fill_stack(new, buff, count);
		i++;
	}
}
