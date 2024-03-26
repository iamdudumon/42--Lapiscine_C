/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:12:32 by dukim             #+#    #+#             */
/*   Updated: 2024/01/14 23:44:11 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ori_a;
	int	ori_b;

	ori_a = *a;
	ori_b = *b;
	*a = ori_a / ori_b;
	*b = ori_a % ori_b;
}