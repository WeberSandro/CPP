# CPP
Repositorio destinado ao curso de CPP
void    ft_put(char *str, char *arg)
{
    while (*str)
        write(2, str++, 1);
    if (arg)
        while (*arg)
            write(2, arg++, 1);
    write(2, "\n", 1);
}

void    ft_exec(char *argv[], int i, int tmp, char *env[])
{
    argv[i] = NULL;
    dup2(tmp, STDIN_FILENO);
    close(tmp);
    execve(argv[0], argv, env);
    ft_put("error: cannot execute ", argv[0]);
    exit(1);
}

int main(int argc, char *argv[], char *env[])
{
    (void)argc;
    int i;
    int tmp;
    int pid;
    int fd[2];

    i = 0;
    tmp = dup(STDIN_FILENO);
    while (argv[i] && argv[i + 1])
    {
        i = 0;
        argv = &argv[i + 1];
        while (argv[i] && strcmp(argv[i], ";") && strcmp(argv[i], "|"))
            i++;
        if (strcmp(argv[0], "cd") == 0)
        {
            if (i != 2)
                ft_put("error: cd: bad arguments", NULL);
            else if (chdir(argv[1]) != 0)
                ft_put("error: cd: cannot change to directory ", argv[1]);
        }
        else if (i != 0 && (argv[i] == NULL || strcmp(argv[i], ";") == 0))
        {
            if ((pid = fork()) == 0)
                ft_exec(argv, i, tmp, env);
        }
        else if (i != 0 && strcmp(argv[i], "|") == 0)
        {
            pipe(fd);
            if ((pid = fork()) == 0)
            {
                dup2(fd[1], STDOUT_FILENO);
                close(fd[0]);
                close(fd[1]);
                ft_exec(argv, i, tmp, env);
            }
            else
            {
                close(fd[1]);
                close(tmp);
                tmp = fd[0];
            }
        }
    }

    // ✅ Espera por todos os filhos corretamente
    while (waitpid(-1, NULL, WUNTRACED) != -1);

    close(tmp);
    return (0);
}
