/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slyu <slyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:24:03 by slyu              #+#    #+#             */
/*   Updated: 2021/09/19 20:30:49 by slyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && i < n)
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
			break ;
		i++;
	}
	if (i == n)
		i--;
	return ((unsigned char) *(s1 + i) - (unsigned char) *(s2 + i));
}
