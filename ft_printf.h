/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:41:10 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/20 19:12:17 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h> 
# include <string.h>

int	ft_convert(unsigned long i);
int	ft_printf(const char *vd, ...);
int	ft_type(va_list arg, char vd);
int	ft_putchar(char r);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_strlen(char	*see);
int	ft_decmln(unsigned int num);
int	ft_convup(unsigned int num);

#endif
