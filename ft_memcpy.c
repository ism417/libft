/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:02:05 by eismail           #+#    #+#             */
/*   Updated: 2023/12/18 10:58:20 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	if (!dst && !src)
		return (NULL);
	ptr = (unsigned char *)dst;
	ptr2 = (const unsigned char *) src;
	while (n--)
		*ptr++ = *ptr2++;
	return (dst);
}
