int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 0 && str[i] <= 91))
			return (0);
		i++;
	}
	return (1);
}
