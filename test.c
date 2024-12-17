#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include <stddef.h>

int main()
{
    int ret_ft, ret_std;

    printf("\n================ FT_PRINTF EDGE CASE TESTER ================\n\n");

    // Edge case: Null character
    ret_ft = ft_printf("ft_printf: %%c: %c\n", '\0');
    ret_std = printf("printf:    %%c: %c\n", '\0');
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    // Edge case: NULL string
    ret_ft = ft_printf("ft_printf: %%s: %s\n", (char *)NULL);
    ret_std = printf("printf:    %%s: %s\n", (char *)NULL);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    // Edge case: Pointer to NULL
    ret_ft = ft_printf("ft_printf: %%p: %p\n", (void *)NULL);
    ret_std = printf("printf:    %%p: %p\n", (void *)NULL);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    // Edge case: Minimum and maximum integers
    ret_ft = ft_printf("ft_printf: INT_MIN: %%d: %d, INT_MAX: %%d: %d\n", INT_MIN, INT_MAX);
    ret_std = printf("printf:    INT_MIN: %%d: %d, INT_MAX: %%d: %d\n", INT_MIN, INT_MAX);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    // Edge case: Unsigned zero and max value
    ret_ft = ft_printf("ft_printf: Unsigned: %%u: %u, UINT_MAX: %%u: %u\n", 0, UINT_MAX);
    ret_std = printf("printf:    Unsigned: %%u: %u, UINT_MAX: %%u: %u\n", 0, UINT_MAX);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    // Edge case: Hexadecimal with zero and UINT_MAX
    ret_ft = ft_printf("ft_printf: Hex: %%x: %x, Hex Upper: %%X: %X\n", 0, UINT_MAX);
    ret_std = printf("printf:    Hex: %%x: %x, Hex Upper: %%X: %X\n", 0, UINT_MAX);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    // Edge case: Multiple NULL and empty strings
    ret_ft = ft_printf("ft_printf: Multiple NULL: %%s: %s, %%s: %s\n", NULL, "");
    ret_std = printf("printf:    Multiple NULL: %%s: %s, %%s: %s\n", NULL, "");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    // Edge case: Percent sign only
    ret_ft = ft_printf("ft_printf: Percent: %%%%\n");
    ret_std = printf("printf:    Percent: %%%%\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    // Edge case: Very large pointer value
    ret_ft = ft_printf("ft_printf: Pointer large: %%p\n", (void *)-1);
    ret_std = printf("printf:    Pointer large: %%p\n", (void *)-1);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_std);

    printf("\n================ TESTS COMPLETED ================\n\n");

    return 0;
}

