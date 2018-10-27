/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:21 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:21 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	len;

	if (*to_find == '\0')
		return ((char *)str);
	if (!to_find)
		return ((char *)str);
	len = ft_strlen(to_find);
	while (*str)
	{
		if (ft_strncmp(str, to_find, len) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
