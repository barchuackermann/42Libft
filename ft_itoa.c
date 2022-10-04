/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:42:04 by bcriscim          #+#    #+#             */
/*   Updated: 2022/09/27 18:42:12 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototipo char *ft_itoa(int n);
Archivos a entregar
-
Parámetros n: el entero a convertir.
Valor devuelto La string que represente el número.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.
