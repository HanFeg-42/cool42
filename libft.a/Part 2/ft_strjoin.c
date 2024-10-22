char *ft_strjoin(char const *s1, char const *s2)
{
    char            *join;
    unsigned int    i;

    join = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
    if(!join)
        return (NULL);
    
}