char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')					//continues loop while it has not reched the end of str
	{
		if (str[i] >= 'a' && str[i] <= 'z')	//checks to see if value is lowercase
			str[i] -= 32;					//sets the value of str[i] to uppercase, by subtracting 32 from the lowercase making it uppercase
		i++;
	}
	return (str)
}