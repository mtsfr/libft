/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:21:16 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/10/11 19:44:51 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par)
{
	int	i;
	
	i = 0;
	while (par[i].str != 0)
	{
		par[i].size = ft_putnbr(par[i].size);
		par[i].str = ft_putstr;
		par[i].copy = ;
		i++;
	}
}
