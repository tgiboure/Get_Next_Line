/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:19 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:19 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	char			*pdest;
	const char		*psrc;
	size_t			n;
	size_t			destlen;

	pdest = dest;
	psrc = src;
	n = size;
	while (*pdest != '\0' && n-- != 0)
		pdest++;
	destlen = pdest - dest;
	n = size - destlen;
	if (n == 0)
		return (destlen + ft_strlen(src));
	while (*psrc != '\0')
	{
		if (n != 1)
		{
			*pdest++ = *psrc;
			n--;
		}
		psrc++;
	}
	*pdest = '\0';
	return (destlen + (psrc - src));
}
