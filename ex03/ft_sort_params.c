/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:59:14 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/14 14:31:51 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tem;
	int		c;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			c = 0;
			while (argv[j][c] == argv[j + 1][c] && argv[j][c] && argv[j + 1][c])
				c++;
			if (argv[j][c] > argv[j + 1][c])
			{
				tem = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tem;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	sort_params(argc, argv);
	argv++;
	while (--argc)
	{
		while (**argv != '\0')
			write (1, (*argv)++, 1);
		write (1, "\n", 1);
		argv++;
	}
}
