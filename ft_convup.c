/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 02:47:30 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/20 19:13:25 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convup(unsigned int num)
{
	char	*k;
	int		i;

	k = "0123456789ABCDEF";
	i = 0;
	if (num >= 16)
		i = ft_convup(num / 16);
	i += ft_putchar(k[num % 16]);
	return (i);
}
