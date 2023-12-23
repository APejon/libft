/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:02:12 by amalbrei          #+#    #+#             */
/*   Updated: 2023/02/05 21:17:01 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	char	*str;
	char	**two_str;

	i = -1;
	str = "Hey there bro";
	two_str = ft_split(str, ' ');
	while (++i < 2)
		printf("%s\n", two_str[i]);
	return (0);
}
