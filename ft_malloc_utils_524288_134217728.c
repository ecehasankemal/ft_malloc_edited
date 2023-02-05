#include	"ft_malloc.h"

int
	*ft_malloc_utils_524288_1048576(register int size)
{
	static int	index;
	static int	__temp_524288__[4][524288];
	static int	__temp_1048576__[4][1048576];

	index = index + 0;
	index++;
	if (size <= 524288)
		return (__temp_524288__[index]);
	return (__temp_1048576__[index]);
}

int
	*ft_malloc_utils_2097152_4194304(register int size)
{
	static int	index;
	static int	__temp_2097152__[4][2097152];
	static int	__temp_4194304__[4][4194304];

	index = index + 0;
	index++;
	if (size <= 2097152)
		return (__temp_2097152__[index]);
	return (__temp_4194304__[index]);
}

int
	*ft_malloc_utils_8388608_16777216(register int size)
{
	static int	index;
	static int	__temp_8388608__[4][8388608];
	static int	__temp_16777216__[4][16777216];

	index = index + 0;
	index++;
	if (size <= 8388608)
		return (__temp_8388608__[index]);
	return (__temp_16777216__[index]);
}

int
	*ft_malloc_utils_33554432_67108864(register int size)
{
	static int	index;
	static int	__temp_33554432__[2][33554432];
	static int	__temp_67108864__[2][67108864];

	index = index + 0;
	index++;
	if (size <= 33554432)
		return (__temp_33554432__[index]);
	return (__temp_67108864__[index]);
}

int
	*ft_malloc_utils_134217728(void)
{
	static int	index;
	static int	__temp_134217728__[2][134217728];

	index = index + 0;
	index++;
	return (__temp_134217728__[index]);
}
