/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:46:18 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/17 18:51:36 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;        // Loop counter/index for iterating through the string
    int sign;     // Stores the sign of the number (1 for positive, -1 for negative)
    long result;  // Stores the accumulated integer value (using long to prevent intermediate overflow)

    i = 0;
    sign = 1;
    result = 0;

    // 1. Skip leading whitespace characters
    // Manually check for common whitespace characters: space, form feed, newline,
    // carriage return, horizontal tab, vertical tab.
    while (str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
                      str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
    {
        i++;
    }

    // 2. Handle optional sign ('+' or '-')
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -1;
        }
        i++; // Move past the sign character
    }

    // 3. Convert digits to integer
    // Loop as long as the character is a digit ('0' through '9')
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        // Accumulate the result: multiply current result by 10 and add the new digit
        // (str[i] - '0') converts a character digit to its integer equivalent
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // 4. Apply the sign and return the final integer value
    return ((int)(result * sign));
}


#include <stdio.h>
int main()
{
    printf("--- ft_atoi Test Cases ---\n");

    // Test case 1: Positive number
    printf("Input: \"12345\"\t\tOutput: %d\n", ft_atoi("12345")); // Expected: 12345

    // Test case 2: Negative number
    printf("Input: \"-6789\"\t\tOutput: %d\n", ft_atoi("-6789")); // Expected: -6789

    // Test case 3: With leading whitespace
    printf("Input: \"  \t\n 42\"\t\tOutput: %d\n", ft_atoi("  \t\n 42")); // Expected: 42

    // Test case 4: With positive sign
    printf("Input: \"+987\"\t\tOutput: %d\n", ft_atoi("+987")); // Expected: 987

    // Test case 5: With leading whitespace and negative sign
    printf("Input: \"  -123\"\t\tOutput: %d\n", ft_atoi("  -123")); // Expected: -123

    // Test case 6: String with non-digit characters after numbers
    printf("Input: \"567abc\"\t\tOutput: %d\n", ft_atoi("567abc")); // Expected: 567

    // Test case 7: String starting with non-digit characters
    printf("Input: \"hello123\"\t\tOutput: %d\n", ft_atoi("hello123")); // Expected: 0

    // Test case 8: Empty string
    printf("Input: \"\"\t\tOutput: %d\n", ft_atoi("")); // Expected: 0

    // Test case 9: String with only whitespace
    printf("Input: \"   \"\t\tOutput: %d\n", ft_atoi("   ")); // Expected: 0

    // Test case 10: String with only a sign
    printf("Input: \"-\"\t\tOutput: %d\n", ft_atoi("-")); // Expected: 0

    // Test case 11: String with only a plus sign
    printf("Input: \"+\"\t\tOutput: %d\n", ft_atoi("+")); // Expected: 0

    // Test case 12: Larger number (within int limits)
    printf("Input: \"2147483647\"\tOutput: %d\n", ft_atoi("2147483647")); // Expected: 2147483647 (MAX_INT)

    // Test case 13: Number exceeding int limits (behavior of atoi is undefined for overflow)
    // This will likely wrap around or truncate depending on system, but ft_atoi will
    // return the truncated int value from the long.
    printf("Input: \"2147483648\"\tOutput: %d\n", ft_atoi("2147483648")); // Expected: -2147483648 (on 32-bit int systems)

    return 0;
}

