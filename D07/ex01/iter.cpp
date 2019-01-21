/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 12:06:34 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 20:58:00 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename A, typename L>
void	iter(A *array, L length, void (*f)(A *elem))
{
	L i;

	for (i = 0; i < length; i++)
	{
		(*f)(&array[i]);
	}
}

