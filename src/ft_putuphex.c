/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:03:07 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/16 19:01:41 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuphex(unsigned int i)
{
	int	len;

	len = 0;
	if (i > 15)
	{
		len += ft_putuphex(i / 16);
		len += ft_putuphex(i % 16);
	}
	else if (i > 9)
		len += ft_putchar(i - 10 + 'A');
	else
		len += ft_putchar(i + 48);
	return (len);
}
