/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeheo <jeheo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 19:53:04 by jeheo             #+#    #+#             */
/*   Updated: 2020/12/22 21:24:39 by jeheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *last;

	last = NULL;
	while (1)
	{
		if (*str == (char)c)
			last = str;
		if (*str == '\0')
			break ;
		str++;
	}
	return (last);
}
