#include <unistd.h>

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	print_address(unsigned long addr)
{
	int		i;
	char	address[16];

	i = 0;
	while (i < 16)
	{
		address[15 - i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i++;
	}
	write(1, address, 16);
}

void	print_line_hex(unsigned char *mem, unsigned int size, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
			print_hex(mem[i + j]);
			if (j % 2)
				write(1, " ", 1);
		}
		else
		{
			write(1, "  ", 2);
			if (j % 2)
				write(1, " ", 1);
		}
		j++;
	}
}

void	print_line_chars(unsigned char *mem, unsigned int size, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		if (mem[i + j] >= 32 && mem[i + j] <= 126)
			write(1, &mem[i + j], 1);
		else
			write(1, ".", 1);
		j++;
	}
	write(1, "\n", 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*mem;
	unsigned int	i;

	mem = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_address((unsigned long)(mem + i));
		write(1, ": ", 2);
		print_line_hex(mem, size, i);
		print_line_chars(mem, size, i);
		i += 16;
	}
}