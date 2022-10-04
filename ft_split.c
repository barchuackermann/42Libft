/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:41:46 by bcriscim          #+#    #+#             */
/*   Updated: 2022/09/27 18:41:53 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototipo char **ft_split(char const *s, char c);
Archivos a entregar
-
Parámetros s: La string a separar.
c: El carácter delimitador.
Valor devuelto El array de nuevas strings resulatente de la
separación.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc, free
Descripción Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
