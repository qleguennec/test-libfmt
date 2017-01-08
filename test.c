/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 16:03:07 by qle-guen          #+#    #+#             */
/*   Updated: 2017/01/08 23:40:55 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfmt/libfmt.h"
#include <limits.h>

int		main(void)
{
	ECHO("0: %-10/4", 0);
	ECHO("-10: %-10/4", -10);
	ECHO("INT_MIN: %-10/4", INT_MIN);
	ECHO("INT_MAX: %-10/4", INT_MAX);
	ECHO("LONG_MIN: %-10/8", LONG_MIN);
	ECHO("LONG_MAX: %-10/8", LONG_MAX);
	ECHO("0: %10/4", 0);
	ECHO("UINT_MAX: %10/4", UINT_MAX);
	ECHO("ULONG_MAX: %10/4", ULONG_MAX);
	return (0);
}
