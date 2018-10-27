/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:20 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:20 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t i;
	size_t j;
	size_t c;

	c = 0;
	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && c < nb)
	{
		dest[i + j] = src[j];
		j++;
		c++;
	}
	dest[i + j] = '\0';
	return (dest);
}
