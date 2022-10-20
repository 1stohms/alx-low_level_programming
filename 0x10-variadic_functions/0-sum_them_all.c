#include "variadic_functions.h"
#include <stdarg.h>

/**
<<<<<<< HEAD
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */

=======
* sum_them_all - calculates the sum of all its parameters
* @n: number of arguments passed to the function
*
* Return: the resulting sum
*/
>>>>>>> 54d5fdab9dc67e1bca1cd1f47c0be8e5c6663ea6
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
