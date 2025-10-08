/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:41:00 by thribeir          #+#    #+#             */
/*   Updated: 2025/10/08 12:44:44 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	ft_is_negative(int c)
{
	if (c >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

/*int main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(20);
}*/