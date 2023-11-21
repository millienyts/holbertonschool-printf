int uns_int_l(unsigned int value)
{
	int l = 1;

	while (value /= 10)
	{
	l++;
	}

	return (l);
}

void uns_str(unsigned int value, char *buffer)
{
	int l = uns_int_l(value);

	buffer[l] = '\0';
	do
	{
	l--;
	buffer[l] = '0' + value % 10;
	value /= 10;
	}
	while (l > 0);
}
