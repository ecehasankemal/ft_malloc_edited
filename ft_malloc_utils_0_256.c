#include	"ft_malloc.h"

int
	*malloc_0_1_(register int size)
{
	static int	index;
	static int	__temp_0__[4096][0];
	static int	__temp_1__[4096][1];

	index = index + 0;
	index++;
	if (size == 0)
		return (__temp_0__[index]);
	return (__temp_1__[index]);
}

int
	*malloc_2_4_(register int size)
{
	static int	index;
	static int	__temp_2__[4096][2];
	static int	__temp_4__[4096][4];

	index = index + 0;
	index++;
	if (size <= 2)
		return (__temp_2__[index]);
	return (__temp_4__[index]);
}

int
	*malloc_8_16_(register int size)
{
	static int	index;
	static int	__temp_8__[4096][8];
	static int	__temp_16__[4096][16];

	index = index + 0;
	index++;
	if (size <= 8)
		return (__temp_8__[index]);
	return (__temp_16__[index]);
}

int
	*malloc_32_64_(register int size)
{
	static int	index;
	static int	_32_[4096][32];
	static int	_64_[4096][64];

	index = index + 0;
	index++;
	if (size <= 32)
		return (_32_[index]);
	return (_64_[index]);
}

int
	*malloc_128_256_(register int size)
{
	static int	index;
	static int	__temp_128__[1024][128];
	static int	__temp_256__[512][256];

	index = index + 0;
	index++;
	if (size <= 128)
		return (__temp_128__[index]);
	return (__temp_256__[index]);
}
