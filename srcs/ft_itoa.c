/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:24:21 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 12:09:38 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	*ft_itoa2(char *res, int neg)
{
	if (neg == 1)
		res[0] = '-';
	return (res);
}

static int	ft_count(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*res;
	int				neg;
	int				i;

	neg = 0;
	if (n < 0)
	{
		nb = n * -1;
		neg = 1;
	}
	else
		nb = n;
	i = ft_count(nb) + neg;
	res = malloc(i + 1);
	if (res == NULL)
		return (NULL);
	res[i] = 0;
	while (i-- > 0)
	{
		res[i] = nb % 10 + '0';
		nb /= 10;
	}
	return (ft_itoa2(res, neg));
}

/* int main()
{
    char *res;
    
    res = ft_itoa(1234);
    printf("%s", res);
} */