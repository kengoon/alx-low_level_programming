/**
 * get_bit - function with two arguments
 * @n: value to compare
 * @index: position to compare
 *
 * Description: returns the value of a bit at a given index
 * Return: 0 or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index > (sizeof(n) * 8) ? -1 : (int)((n >> index) & 1));
}

