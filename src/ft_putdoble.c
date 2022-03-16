/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdoble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:25:32 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/16 15:37:56 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_putdoble(int i)
{
	char	*nb;
	int		len;

	nb = ft_itoa(i);
	len = ft_putstr(nb);
	return (len);
}
