/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:59:29 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/15 19:13:07 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"

int	ft_options(const char *input, va_list arg, int i)
{
	int len;

	len = 0;
		if (input[i] == 'c')
			len += ft_putchar(va_arg(arg, int));
		// if (input[i] == 's')
		// 	len += ft_putsr(va_arg(arg, char *));
		// if (input[i] == 'p')
		// 	len += ft_putpost(va_arg(arg, unsigned long long));
		// if (input[i] == 'd')
		// 	len += ft_putdoble(va_arg(arg, double));
		// if (input[i] == 'i')
		// 	len += ft_putdoble(va_arg(arg, int));
		// if (input[i] == 'u')
		// 	len += ft_putposnb(va_arg(arg, unsigned int));
		// if (input[i] == 'x')
		// 	len += ft_puthex(va_arg(arg, int));
		// if (input[i] == 'X')
		// 	len += ft_putuphex(va_arg(arg, int));
		// if (input[i] == '%')
		// 	len += ft_putperc(va_arg(arg, char));
		return (len);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		len;
	va_list	arg;

	va_start(arg, input);
	len = 0;
	i = 0;
	while(input[i] != '\0')
	{
		if(input[i] == '%')
		{
			len += ft_options(input, arg, i + 1);
			i++;
		}
		else
		{
			write(1, &input[i], 1);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
