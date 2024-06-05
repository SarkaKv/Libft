#include "libft.h"

static int word_count(char *s, char splitter)
{
    int len = 0;
    int oki = 0;
    int arewein = 0;

    while (s[oki] != '\0')
    {
        if (s[oki] == splitter)
        {
            arewein = 1;
        }
        if(s[oki] != splitter && arewein == 1)
        {
            len++;
            arewein = 0;
        }
        oki++;
    }
    return len;
}

char **ft_split(char *s, char splitter)
{
    int whereinar = 0;
    char **helou;
    size_t oki = 0;
    size_t len = 0;
    int words = word_count(s, splitter);

    helou = (char **)malloc(sizeof(char *) * (words + 1));
    if (!helou)
        return (NULL);

    while (whereinar < words)
    {
        len = 0;
        while (s[oki] == splitter && s[oki] != '\0')
            oki++;
        
        while (s[oki] != splitter && s[oki] != '\0')
        {
            len++;
            oki++;
        }
        helou[whereinar] = (char *)malloc(sizeof(char) * (len + 1));
        ft_strlcpy(helou[whereinar], s + oki - len, len + 1);
        whereinar++;
    }
    helou[whereinar] = NULL;
    return (helou);
}
