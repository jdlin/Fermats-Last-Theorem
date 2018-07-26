#include <stdio.h>

void main()
{
    long x, y, z, to, from, n, i;
    long a, b, c;
    int count;

    count = 1;
    printf("Fermat's Last Theorem: x^n + y^n = z^n\n");
    printf("Please input n, and the range of z.\n");
    scanf("%li %li %li", &n, &from, &to);
    printf("The solutions of x^%li + y^%li = z^%li between %li and %li are\n",
           n, n, n, from, to);
    from = (from < 1) ? 1 : from;
    for (z = from; z <= to; z++)
    {
        for (c = z, i = 1; i < n; i++)
            c *= z;
	  for (x = 1; x < z; x++)
	    {
            for (a = x, i = 1; i < n; i++)
                a *= x;
	          for (y = x; y < z; y++)
	          {
                for (b = y, i = 1; i < n; i++)
                     b *= y;
                b += a;
                if (b > c)
                    break;
                else if (b == c)
		            {
                    printf("%.3i: %li^%li + %li^%li = %li^%li\n",
                           count++, x, n, y, n, z, n);
		                break;
		            }
	          }
	      }
    }
}
