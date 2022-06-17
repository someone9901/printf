/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:40:29 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/20 19:14:20 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	num;
	int				i;

	i = 0;
	num = nb;
	if (nb < 0)
	{
		i += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		i += ft_putnbr(num / 10);
		num = num % 10;
	}
	if (num < 10)
	{
		i += ft_putchar(num + 48);
	}
	return (i);
}
