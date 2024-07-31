/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:44:05 by astolbov          #+#    #+#             */
/*   Updated: 2024/07/31 15:44:21 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void			ft_putchar_len(char character, int *len);
void			ft_string(char *args, int *len);
void			ft_number(int nmb, int *len);
void			ft_hexa(unsigned int x, int *len, char x_or_x);
void			ft_unsigned_int(unsigned int u, int *len);
void			ft_pointer(size_t pnt, int *len);
int				ft_printf(const char *str, ...);

#endif