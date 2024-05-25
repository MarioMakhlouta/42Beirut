/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slpit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:19:57 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/07 17:32:44 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	total_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i + 1], charset) == 1
			&& check_sep(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	copy_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (check_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split_words(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[i + j], charset) == 0)
				j++;
			array[word] = (char *)malloc(sizeof(char) * (j + 1));
			copy_word(array[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words;

	words = total_words(str, charset);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	array[words] = 0;
	split_words(array, str, charset);
	return (array);
}

int main(int argc, char **argv) {
    int index;
    char **slpit;
    (void) argc;
    slpit = ft_slpit(argv[1], argv[2]);
    index = 0;
    while (slpit[index])
    {
        printf("%s\n", slpit[index]);
        index++;
    }
    return 0;
}