/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:37:15 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/16 17:56:59 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int i)
{
	int	len;

	len = 0;
	if (i > 15)
	{
		len += ft_puthex(i / 16);
		len += ft_puthex(i % 16);
	}
	else if (i > 9)
		len += ft_putchar(i + 87);
	else
		len += ft_putchar(i + 48);
	return (len);
}
