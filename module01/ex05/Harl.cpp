//
// Created by Waif Jonathon on 4/7/22.
//

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	void (Harl::*funcPtr[])(void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};
	std::string lvl[4] = {"debug",
						 "info",
						 "warning",
						 "error"
	};

	for (int i = 0; i < 4; i++) {
		if (level == lvl[i]) {
			(this->*funcPtr[i])();
		}
	}
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special "
				 "ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money."
				 " You didn’t put enough bacon in my burger! If you did,"
				 " I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
				 "been coming for years whereas you "
				 "started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_data
{
	char *args[1000];
	int pipe[2];
	int next;
}t_data;

int ft_strlen (char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
void ft_error (int fd, char *str1, char *str2)
{
	write(fd, str1, ft_strlen(str1));
	if (str2)
		write (fd, str2, ft_strlen(str2));
	write (fd, "\n", 1);
}

void parse (t_data *data, char **argv)
{
	int i = 0;
	int cmd = 0;
	int j = 0;
	while(argv[++i])
	{
		if (!strcmp(argv[i], "|"))
		{
			data[cmd].next = 2;
			j = 0;
			cmd++;
		}
		else if (!strcmp(argv[i], ";"))
		{
			data[cmd].next = 1;
			j = 0;
			cmd++;
		}
		else
		{
			data[cmd].next = 1;
			data[cmd].args[j] = argv[i];
			j++;
		}
	}
}

void run(t_data *data, char **env)
{
	int res = 0;
	int i = -1;
	while(data[++i].next)
	{
		if (data[i].args[0] && !strcmp(data[i].args[0], "cd"))
		{
			if (data[i].args[2]  !data[i].args[1]  data[i].args[1][0] == '-')
			ft_error(2, "error: cd: bad arguments", NULL);
			else if (chdir(data[i].args[1]) < 0)
				ft_error(2, "error: cd: cannot change directory to ", data[i].args[1]);
		}
		else
		{
			if (data[i].next == 2)
				pipe(data[i].pipe);
			res = fork();
			if (res == 0)
			{
				if (i && data[i- 1].next == 2)
					dup2(data[i - 1].pipe[0], 0);
				if (data[i].pipe[1])
					dup2(data[i].pipe[1], 1);
				if (data[i].args[0] && execve(data[i].args[0], data[i].args, env) < 0)
					ft_error(2, "error: cannot execute ", data[i].args[0]);
				exit (1);
			}
			else
			{
				waitpid(res, NULL, 0);
				if (i && data[i - 1].next == 2)
					close(data[i - 1].pipe[0]);
				if (data[i].pipe[1])
					close(data[i].pipe[1]);
			}
		}
	}
}

int main (int argc, char **argv, char **env)
{
	t_data *data;
	data = malloc(sizeof(t_data) * 1000);
	if (!data)
	{
		ft_error(2, "error: fatal", NULL);
		exit (1);
	}
	if (argc > 1)
	{
		parse(data, argv);
		run(data, env);
	}
	return (0);
}