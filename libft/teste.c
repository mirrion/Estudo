#include "libft.h"

char	*ft_substr2(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	if (ft_strlen(s) > start)
	{
		while (i < len && s[start + i] != '\0')
		{
			new[i] = s[start + i];
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}


int main()
{
    printf("%s\n", ft_substr("Robson Santana Areias", 0,9));
    printf("%s", ft_substr2("Robson Santana Areias", 0,9));
    return 0;
}
