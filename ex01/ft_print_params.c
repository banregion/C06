/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byildiza < byildiza@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:26:39 by byildiza          #+#    #+#             */
/*   Updated: 2025/04/28 11:18:12 by byildiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	if (argc == 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		len = 0;
		while (argv[i][len] != '\0')
			len++;
		write(1, argv[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
