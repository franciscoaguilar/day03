/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:05:11 by faguilar          #+#    #+#             */
/*   Updated: 2018/09/21 23:27:36 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;
	int		num;

	i = 0;
	while (str[i] != '\0')
	{
		num = i;
		i++;
	}
	return (num);
}
