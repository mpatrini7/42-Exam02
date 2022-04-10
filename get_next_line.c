#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	char line[99999999];
	char *ret;
	char buf[2];
	int i = 0;

	if (fd < 0)
		return (NULL);
	line[0] = 0;
	while (read(fd, &buf[0], 1) == 1)
	{
		line[i] = buf[0];
		line[i + 1] = 0;
		if (line[i] == '\n')
			break ;
		i++;
	}
	if (line[0] == 0)
		return (NULL);
	ret = malloc(i + 1);
	i = 0;
	while (line[i])
	{
		ret[i] = line[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
