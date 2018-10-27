/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tabchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:22 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:22 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabchr(char **str, int c, int cp)
{
	int	i;

	i = 0;
	while (i < cp)
	{
		if (ft_strchr(str[i], c))
			return (1);
		i++;
	}
	return (0);
}
