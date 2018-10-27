/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:14 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:14 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int nbs;

	nbs = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbs = nb * -1;
	}
	if (nbs >= 10)
	{
		ft_putnbr(nbs / 10);
		ft_putnbr(nbs % 10);
	}
	else
	{
		ft_putchar(nbs + '0');
	}
}
