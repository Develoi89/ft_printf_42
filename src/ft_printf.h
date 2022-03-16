/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:02:12 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/16 18:47:23 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *input, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putdoble(int i);
int	ft_putposnbr(unsigned int i);
int	ft_puthex(unsigned int i);
int	ft_putuphex(unsigned int i);
int	ft_putpost(unsigned long long ptr);

#endif /* LIB_H */