#include "get_next_line.h"

int	ft_strdup_free(const char *s1, char **dest)
{
	size_t	len;
	char	*temp;
	char	*dst_all;

	len = ft_strlen(s1);
	temp = *dest;
	*dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!(*dest))
		return (-1);
	dst_all = *dest;
	len++;
	while (((len--) > 1) && (*s1))
		*(dst_all++) = *(s1++);
	*dst_all = '\0';
	free(temp);
	return (1);
}

int	ft_sj_ff_dt(const char *s1, const char *s2, char **dest)
{
	const char		*tmp;
	unsigned int	i;

	tmp = s1;
	i = 0;
	if ((!(dest)))
		return (-1);
	*dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (*dest == 0)
		return (-1);
	if (s1)
		while (*s1 != '\0')
			(*dest)[i++] = *s1++;
	if (s2)
		while (*s2 != '\0')
			(*dest)[i++] = *s2++;
	(*dest)[i] = '\0';
	if (tmp)
		free((char *)tmp);
	return (1);
}

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	if (s == NULL)
		return (0);
	while (*s++)
		size++;
	return (size);
}

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if (*ptr == c)
		return (ptr);
	return (0);
}
