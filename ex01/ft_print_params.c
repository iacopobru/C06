/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:42:46 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/14 14:31:04 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	argv++;
	while (--argc)
	{
		while (**argv != '\0')
			write (1, (*argv)++, 1);
		write (1, "\n", 1);
		argv++;
	}
}
