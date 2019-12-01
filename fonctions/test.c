/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:23:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/30 00:01:17 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "../libftprintf.h"
#include "ft_isdigit.c"
#include "get_lim.c"
#include "conv_dec.c"

int main()
{
    printf("hello\n");
    char *wri;

    wri = malloc((strlen("hello %.2dhow are you")) + 1);
    strcpy(wri, "hello %.2dhow are you");

    printf("hello\n");
    wri = conv_dec(&wri[6], (void *)1234);
    write(1, &wri, strlen(wri));
}


// is the amount of % matching the amount of variables
// are the variables name and type matching
//      - copy the string in a variable
//      - 