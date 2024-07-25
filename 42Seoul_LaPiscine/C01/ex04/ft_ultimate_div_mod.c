/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slyu <slyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:58:51 by slyu              #+#    #+#             */
/*   Updated: 2021/09/12 21:21:45 by slyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int	*b);

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}