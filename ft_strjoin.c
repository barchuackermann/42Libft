/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:41:06 by bcriscim          #+#    #+#             */
/*   Updated: 2022/09/27 18:41:16 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototipo char *ft_strjoin(char const *s1, char const *s2);
Archivos a entregar
-
Parámetros s1: La primera string.
s2: La string a añadir a ’s1’.
Valor devuelto La nueva string.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.
