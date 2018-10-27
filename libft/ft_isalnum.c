/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isalnum.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:05 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:05 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_isalnum(int a)
{
	if (((a >= 65 && a <= 90) || (a >= 97 && a <= 122)
				|| (a >= 48 && a <= 57)))
		return (1);
	return (0);
}
