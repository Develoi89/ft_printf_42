/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:10:46 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/16 17:56:50 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"

int	main(void)
{
	int				nb;
	char			c;
	char			*s;
	unsigned int	u;

	s = "hello world";
	c = 'z';
	u = 1234;
	nb = ft_printf("prueba de c:%c\n", c);
	nb = ft_printf("prueba de s:%s\n", s);
	nb = ft_printf("prueba de d:%d\n", nb);
	nb = ft_printf("prueba de i y s:%i%s\n", nb, s);
	nb = ft_printf("prueba de u:%u\n", u);
	nb = ft_printf("prueba de nb de u:%d\n", nb);
	nb = ft_printf("prueba de nb de x:%x\n", u);
	return (0);
}
