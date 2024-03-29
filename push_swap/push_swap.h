/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:00:26 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/30 16:50:10 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include "get_next_line.h"
# include "libft.h"
# include <limits.h>

typedef struct s_data
{
	int	a[100000];
	int	element_count;
}		t_data;

typedef struct s_stack
{
	int				data;
	int				step;
	int				rotate;
	struct s_stack	*next;
}					t_stack;

typedef struct s_stacks
{
	int		count_a;
	int		count_b;
	int		min;
	int		av;
	int		max;
	t_stack	*a;
	t_stack	*b;
}			t_stacks;

typedef struct s_step_count
{
	int	count_a;
	int	count_b;
	int	dest_a;
	int	dest_b;
}				t_step_count;

void	rr_r(t_stacks *s, int display_flag);
void	rotate_rr(t_stacks *s, int display_flag);
void	swap_ss(t_stacks *s, int display_flag);
void	rr_b(t_stack **b, int display);
void	rotate_b(t_stack **b, int display);
void	push_b(t_stacks *s, int display);
void	swap_b(t_stack *b, int display);
void	rr_a(t_stack **a, int display);
void	rotate_a(t_stack **a, int display);
void	push_a(t_stacks *s, int display);
void	swap_a(t_stack *a, int display);
void	ft_swap(t_stack *a, int display);
void	ft_push(t_stacks *s, int display);
void	ft_rotate(t_stack **a, int display);
void	ft_rr(t_stack **a, int display);
void	exit_error(void);
void	nulify(t_stacks *stack, t_data *new);
int		ft_isspace(const char *str);
int		validate(int argc, char **argv);
int		word_count(char const *str, char c);
void	separate(int argc, char **argv, t_data *new);
char	**split_str(char const *str, size_t words);
void	init_stack(t_data *new, t_stacks *stacks);
void	free_stack(t_stacks *stacks);
void	sort(t_stacks *stacks);
int		find_place(t_stacks *s, t_stack *b, t_step_count *c, int min);
void	find_duplicate(t_data *new, t_stacks *stacks);
void	sort_big(t_stacks *stacks);
int		lst_min(t_stack *a, int min);
int		check_sorted(t_data *new);
size_t	find_max(t_stack *stack);
int		*copy_int(int *dest, const int *src, int count);
void	ft_isnum(const char *str);
void	ft_putstr(char *str);
int		ft_atoi2(const char *str);

#endif
