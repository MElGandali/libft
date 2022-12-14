/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:50:39 by mel-gand          #+#    #+#             */
/*   Updated: 2022/10/17 23:03:56 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int an)
{
	return ((an >= '0' && an <= '9') || (an >= 'a' && an <= 'z') || (an >= 'A'
			&& an <= 'Z'));
}
