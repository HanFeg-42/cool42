char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *ret;
    unsigned int    i;

    ret = (char *)malloc(sizeof(char) * len + 1);
    if (!ret)
        return (NULL);
    i = 0;
    while (s[start])
    {
        ret[i++] = s[start++];
    }
    ret[i] = 0;
    return (ret);
}