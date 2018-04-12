int	ft_str_is_numeric(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] >= 30 && str[i] <= 39)
		i++;
	if (str[i] == '\0')
		result = 1;
	else
		result = 0; 
	return (result);	
}

/*
while (str[cur_char] >= '0' && str[cur_char] <= '9')
		cur_char++;
	if (str[cur_char] == '\0')
		return_value = 1;
	else
		return_value = 0;
	return (return_value);





*/