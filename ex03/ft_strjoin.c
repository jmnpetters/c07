/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: jpetters <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/09/26 18:21:52 by jpetters	       #+#    #+#	      */
/*   Updated: 2023/09/28 16:21:05 by jpetters         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strallocate(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*str;

	i = 0;
	length = 0;
	while (i < size)
		length += ft_strlen(strs[i++]);
	length += (size - 1) * ft_strlen(sep);
	str = (char *)malloc((length + 1) * sizeof(char));
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	if (size == 0)
		return (res = malloc(1));
	res = ft_strallocate(size, strs, sep);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			res[k++] = sep[j++];
		i++;
	}
	res[k++] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s\n",	ft_strjoin(argc, argv, "_"));
}*/
