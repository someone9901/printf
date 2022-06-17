/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:40:35 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/20 19:14:28 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	k;

	if (!s)
		return (ft_putstr("(null)"));
	k = ft_strlen(s);
	write(1, s, k);
	return (k);
}
