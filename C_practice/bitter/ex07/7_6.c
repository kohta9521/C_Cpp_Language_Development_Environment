/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_6.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohtakochi <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:00:01 by kohtakochi        #+#    #+#             */
/*   Updated: 2022/12/01 22:03:39 by kohtakochi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int score;
	printf("点数を入力してください:");
	scanf("%d", &score);
	if (score > 100)
	{
		printf("入力が100より大きいので修正します。\n");
		score = 100;
	}
	printf("点数は%d点です。\n", score);
	return (0);
}