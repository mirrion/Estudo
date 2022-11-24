/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<<< HEAD:libftBonus/ft_putstr_fd.c
/*   Created: 2022/03/20 10:08:07 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/08 21:27:32 by rosantan         ###   ########.fr       */
========
/*   Created: 2022/04/03 10:06:29 by rosantan          #+#    #+#             */
/*   Updated: 2022/05/04 16:11:00 by rosantan         ###   ########.fr       */
>>>>>>>> 6a6631412a9e821bef3618b162f6aa8b1bc04e66:Training/main.c
=======
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 10:08:07 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/08 21:27:32 by rosantan         ###   ########.fr       */
>>>>>>> 6a6631412a9e821bef3618b162f6aa8b1bc04e66
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
<<<<<<<< HEAD:libftBonus/ft_putstr_fd.c
=======
>>>>>>> 6a6631412a9e821bef3618b162f6aa8b1bc04e66
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
<<<<<<< HEAD
========
typedef struct s_list
{
	int			*content;
	struct s_list	*next;
}	t_list;

int	main(void)
{
	t_list	test;

	test.content[0] = 112313123;
	printf("%i", test.content[0]);
>>>>>>>> 6a6631412a9e821bef3618b162f6aa8b1bc04e66:Training/main.c
=======
>>>>>>> 6a6631412a9e821bef3618b162f6aa8b1bc04e66
}
