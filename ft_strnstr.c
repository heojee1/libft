/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeheo <jeheo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 19:31:44 by jeheo             #+#    #+#             */
/*   Updated: 2020/12/22 21:21:27 by jeheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *str_pos;
	char *tok_pos;

	str_pos = big;
	tok_pos = little;
	while (*tok_pos != '\0')
	{
		if (*str_pos == '\0' || len <= 0)
			return (0);
		if (*str_pos == *tok_pos)
			tok_pos++;
		else
			tok_pos = little;
		str_pos++;
		len--;
	}
	return (str_pos - tok_pos + little);
}
