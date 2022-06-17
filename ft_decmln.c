/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decmln.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 02:46:30 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/20 19:13:37 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decmln(unsigned int num)
{
	int	i;

	i = 0;
	if (num >= 10)
	{
		i += ft_decmln(num / 10);
		num = num % 10;
	}
	if (num < 10)
		i += ft_putchar(num + 48);
	return (i);
}
