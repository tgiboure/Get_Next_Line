/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:11 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:11 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = (char *)dst;
	psrc = (const char *)src;
	while (n--)
	{
		*pdest++ = *psrc++;
	}
	return (dst);
}
