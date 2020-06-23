/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        printf("USAGE\n    ./101pong x0 y0 z0 x1 y1 z1 n\n\nDESCRIPTION\n    x0 ball abscissa at time t - 1\n    y0 ball ordinate at time t - 1\n    z0 ball altitude at time t - 1\n    x1 ball abscissa at time t\n    y1 ball ordinate at time t\n    z1 ball altitude at time t\n    n time shift (greater than or equal to zero, integer)\n");
        return (84);
    if (ac != 8 || atof(av[7]) < 0)
        return (84);
    if (roundf(atof(av[7]) != 0 && atof(av[7]) / roundf(atof(av[7])) != 1))
        return (84);
    for (int i = 1; i < ac; i++)
        if (error_case(av[i]) == 84)
            return (84);
    pong(atof(av[1]), atof(av[2]), atof(av[3]), atof(av[4]), atof(av[5])
	 , atof(av[6]), atof(av[7]));
    return (0);
}
