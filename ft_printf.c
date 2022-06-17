/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:40:13 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/20 23:14:35 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char vd)
{
	int	plus;

	plus = 0;
	if (vd == 'c')
		plus += ft_putchar(va_arg(arg, int));
	else if (vd == 's')
		plus += ft_putstr(va_arg(arg, char *));
	else if (vd == 'p')
	{
		plus = ft_putstr("0x");
		plus += ft_convert((unsigned long)va_arg(arg, void *));
	}
	else if (vd == 'x')
		plus += ft_convert(va_arg(arg, unsigned int));
	else if (vd == 'X')
		plus += ft_convup((unsigned long)va_arg(arg, void *));
	else if (vd == 'i' || vd == 'd')
		plus += ft_putnbr(va_arg(arg, int));
	else if (vd == 'u')
		plus += ft_decmln(va_arg(arg, unsigned int));
	else if (vd == '%')
		plus += ft_putchar('%');
	else
		plus += ft_putchar(vd);
	return (plus);
}

int	ft_printf(const char *vd, ...)
{
	int		i;
	int		p;
	va_list	arg;

	va_start (arg, vd);
	i = 0;
	p = 0;
	while (vd[i])
	{
		if (vd[i] == '%')
		{
			i++;
			p += ft_type(arg, vd[i]);
			if (vd[i] == '\0')
				break ;
		}
		else
			p += ft_putchar(vd[i]);
		i++;
	}
	va_end (arg);
	return (p);
}
