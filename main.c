/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:10:46 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/16 15:18:08 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"

int	main(void)
{
	char	c;
	char	*s;

	s = "hello world";
	c = 'z';
	ft_printf("prueba de c:%c\n", c);
	ft_printf("prueba de s:%s\n", s);
	return (0);
}
