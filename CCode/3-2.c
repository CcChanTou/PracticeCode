void escape (char s[], char t[])
{
    int j = 0;
    for (int i = 0; t[i] != '\0'; i++)
    {
        switch (t[i]):
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        default:
            s[j++] = t[i];
    }
    s[j] = '\0';
}

void unescape (char s[], char t[])
{
    int j = 0;
    for (int i = 0; t[i] != '\0'; i++)
    {
        if (t[i] != '\\')
        {
            s[j++] = t[i];
        }
        else
        {
            switch (t[++i]):
            case 'n':
                s[j++] = '\n';
                break;
            case 't':
                s[j++] = '\t';
                break;
            default:
                s[j++] = '\\';
                s[j++] = t[i];
        }
    }
    s[j] = '\0';
}