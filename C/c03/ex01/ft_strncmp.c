int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return (0);
	i = 0;
	while((i < n) && (s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}