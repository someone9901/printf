/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:40:00 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/20 19:12:59 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(unsigned long i)
{
	char	*h;
	int		count;

	count = 0;
	h = "0123456789abcdef";
	if (i >= 16)
		count = ft_convert(i / 16);
	count += ft_putchar(h[i % 16]);
	return (count);
}
