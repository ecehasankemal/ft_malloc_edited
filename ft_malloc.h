#ifndef FT_MALLOC_H
# define FT_MALLOC_H

int		*malloc_0_1_(register int size);
int		*malloc_2_4_(register int size);
int		*malloc_8_16_(register int size);
int		*malloc_32_64_(register int size);
int		*malloc_128_256_(register int size);
int		*ft_malloc_utils_512_1024(register int size);
int		*ft_malloc_utils_2048_4096(register int size);
int		*ft_malloc_utils_8192_16384(register int size);
int		*ft_malloc_utils_32768_65536(register int size);
int		*ft_malloc_utils_131072_262144(register int size);
int		*ft_malloc_utils_524288_1048576(register int size);
int		*ft_malloc_utils_2097152_4194304(register int size);
int		*ft_malloc_utils_8388608_16777216(register int size);
int		*ft_malloc_utils_33554432_67108864(register int size);
int		*ft_malloc_utils_134217728(void);
void	*ft_malloc(register int size);

#endif