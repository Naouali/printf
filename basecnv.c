/**
 * basecnv - prints numbers to base b
 * @value: The number to be printed
 * @b: convert b
 * @length: The amount of digits to be printed
 *
 * Return: On success length.
 */
int basecnv(unsigned int value, int b, int length)
{
if (!value)
return (length);
else if (b == 16)
{
if (value % b >= 10)
{
length = basecnv(value / b, b, length + 1);
putchar(value % b + 'A' - 10);
return (length);
}
else
{
length = basecnv(value / b, b, length + 1);
putchar(value % b + '0');
return (length);
}
}
else
{
length = basecnv(value / b, b, length + 1);
putchar(value % b + '0');
return (length);
}
}
