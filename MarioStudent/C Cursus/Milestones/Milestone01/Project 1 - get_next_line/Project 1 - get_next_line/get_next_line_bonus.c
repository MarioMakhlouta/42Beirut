/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:26:52 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/06/21 15:12:22 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <stdio.h>

static char		*_fill_line_buffer(int fd, char *left_c, char *buffer);
static char		*_set_line(char *line);
static char		*ft_strchr(char *s, int c);

char	*get_next_line(int fd)
{
	static char	*left_c[10240];
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(left_c[fd]);
		free(buffer);
		left_c[fd] = NULL;
		buffer = NULL;
		return (0);
	}
	if (!buffer)
		return (NULL);
	line = _fill_line_buffer(fd, left_c[fd], buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	left_c[fd] = _set_line(line);
	return (line);
}

static char	*_set_line(char *line_buffer)
{
	char	*left_c;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (0);
	left_c = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*left_c == 0)
	{
		free(left_c);
		left_c = NULL;
	}
	line_buffer[i + 1] = 0;
	return (left_c);
}

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer)
{
	ssize_t	b_read;
	char	*tmp;

	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(left_c);
			return (0);
		}
		else if (b_read == 0)
			break ;
		buffer[b_read] = 0;
		if (!left_c)
			left_c = ft_strdup("");
		tmp = left_c;
		left_c = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left_c);
}

static char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

/*
int main(void)
{
    char *line;
    int i;
    int fd[3];
    int num_fds = 3; // Number of file descriptors
    const char *files[] = {"tests/test.txt", "tests/test2.txt", 
	"tests/test3.txt"};

    // Open all files
    for (i = 0; i < num_fds; i++)
    {
        fd[i] = open(files[i], O_RDONLY);
        if (fd[i] < 0)
        {
            perror("Error opening file");
            // Close any previously opened files before exiting
            for (int j = 0; j < i; j++)
                close(fd[j]);
            return (1);
        }
    }

    i = 1;
    while (i < 7)
    {
        for (int j = 0; j < num_fds; j++)
        {
            line = get_next_line(fd[j]);
            if (line)
            {
                printf("fd%d line [%02d]: %s", j + 1, i, line);
                free(line);
            }
        }
        i++;
    }

    // Close all files
    for (i = 0; i < num_fds; i++)
    {
        close(fd[i]);
    }

    return (0);
}
*/