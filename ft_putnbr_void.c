#include"ft_printf.h"

void	ft_putnbr_void(unsigned long int nbr, char *base, size_t *size)
{
	unsigned long int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_count('-', size);
		nbr *= -1;
	}
	if (nbr >= base_len)
		ft_putnbr_void(nbr / base_len, base, size);
	ft_putchar_count(base[nbr % base_len], size);
}
