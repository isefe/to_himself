#include <unistd.h>

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:00:24 by apuchill          #+#    #+#             */
/*   Updated: 2019/11/25 21:00:27 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	t[11];
	int		i;

	if (n < 1 || n > 9)
		return ;
	*t = '0';
	i = 0;
	while (++i < n)
		t[i] = t[i - 1] + 1;   // t arrayinin ilk n elementini 0 dan sırayla doldurdu.
	t[n] = ',';                //n+1. element = virgül
	t[n + 1] = ' ';            //n+2. element = bpşluk
	while (*t <= 58 - n)       // 58 ascii de 9 dan sonrakidir. t[0] = 10-n olana kadar
	{
		write(1, t, n + ((*t != 58 - n) ? 2 : 0));  // t nin işaretlenen elementi 10-n ye eşitse 2 bit yazdır(sadece sayıyı). değilse
		i = n;                                      //kombinasyonların sonu değil ise 4 bit yazdırır. (0 ve 1 gibi) (en son virgül le boşluk gibi)
		while (i--)   // i=0 dayken son kez calisir . n den başlar. n kere çalışır
			if (++t[i] <= 58 - n + i)  //eleman değeri sınır aşılmamışsa(sondaki 9 dan fazla değilse) 1 artırılır.
				break ;                //010 olarak geldiğinde ikinci defada bu break e girerken t[0] bi artar. 1 olur.
		while (++i > 0 && i < n)  // n>0 ve i<n ise yap.
			t[i] = t[i - 1] + 1;  // 09 dan sonra 12 ya. bir öncekinin bir fazlasından başlar.
	}                             // 010 olunca üstteki break e girmez ya. i-- iki kere olur. i=n-2 olur.
								  // bu while da i bir artırılır. ama n den bu sefer küçük olur. while a girer.
								  //
}
