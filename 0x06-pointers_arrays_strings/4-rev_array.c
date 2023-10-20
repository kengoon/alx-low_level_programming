/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < --n)
	{
		temp = a[n];
		a[n] = a[i];
		a[i++] = temp;
	}
}

