/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:44:31 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/19 09:19:08 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static void free_all(char **arr, int filled)
{
    int i = 0;
    while (i < filled)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

static char *alloc_and_copy(const char **s, char c)
{
    int len = 0;
    char *word;
    int j = 0;
    while ((*s)[len] && (*s)[len] != c)
        len++;
    word = (char *)malloc(len + 1);
    if (!word)
        return (NULL);
    while (j < len)
    {
        word[j] = **s;
        j++;
        (*s)++;
    }
    word[j] = '\0';
    return (word);
}

static int make_split(char **result, const char *s, char c)
{
    int i = 0;
    while (*s)
    {
        if (*s != c)
        {
            result[i] = alloc_and_copy(&s, c);
            if (!result[i])
            {
                free_all(result, i);
                return (-1);
            }
            i++;
        }
        else
            s++;
    }
    result[i] = NULL;
    return (0);
}

char **ft_split(const char *s, char c)
{
    char **result;
    int words;

    if (!s)
        return (NULL);
    words = count_words(s, c);
    result = (char **)malloc((words + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    if (make_split(result, s, c) == -1)
        return (NULL);
    return (result);
}
#include <stdio.h>
/* int main(void)
{
    char **arr = ft_split("  hello 42  world ", ' ');
    int i = 0;
    while (arr && arr[i])
    {
        printf("word[%d]: \"%s\"\n", i, arr[i]);
        free(arr[i]);
        i++;
    }
    free(arr);
    return 0;
} */