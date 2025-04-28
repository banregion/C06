/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byildiza < byildiza@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:25:23 by byildiza          #+#    #+#             */
/*   Updated: 2025/04/26 22:41:40 by byildiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	i = argc - 1;
	while (i > 0)
	{
		len = 0;
		while (argv[i][len] != '\0')
			len++;
		write(1, argv[i], len);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
