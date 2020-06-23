/*
** EPITECH PROJECT, 2019
** 101_pong
** File description:
** The game pong
*/

#include "../include/my.h"

int print_me_3(float a, float b, float c)
{
    printf("(%.2f, %.2f, %.2f)\n", a, b, c);
    return (0);
}

int print_me_all(float a, float b, float c, float d, float e, float f, float g)
{
    printf("The velocity vector of the ball is:\n(%.2f, %.2f, %.2f)\n", a, b, c);
    printf("At time t + %.f, ball coordinates will be:\n(%.2f, %.2f, %.2f)\n", g, d, e, f);
    return (0);
}

float V_cor(float a, float b)
{
    float c = a - b;
    return (c);
}

float cor_n(float a, float b, float c)
{
    float d = a * b + c;
    return (d);
}

float incidence(float z1, float z0, float x, float s)
{
    float Vz = V_cor(z1, z0);
    if ((((z1 >= 0) && (Vz < 0)) || ((z1 <= 0) && (Vz > 0))) && x != 0)
        s = s;
    else if (z1 == 0 && z0 == 0)
        s = -2;
    else
        s = -1;
    return (s);
}

float incidence1(float z1, float z0, float x, float s)
{
    float Vz = V_cor(z1, z0);
    if ((((z1 >= 0) && (Vz < 0)) || ((z1 <= 0) && (Vz > 0))) && x != 0) {
        printf("The incidence angle is:\n");
        printf("%.2f", s);
        printf(" degrees\n");
    }
    else if (z1 == 0 && z0 == 0) {
        s = -2;
        printf("The incidence angle is:\n0.00 degrees\n");
    }
    else {
        printf("The ball won't reach the paddle.\n");
        s = -1;
    }
    return (s);
}

int pong(float x0, float y0, float z0, float x1, float y1, float z1, float n)
{
    float Vx = V_cor(x1, x0);
    float Vy = V_cor(y1, y0);
    float Vz = V_cor(z1, z0);
    float V = sqrt(pow(Vx, 2) + pow(Vy, 2) + pow(Vz, 2));
    float x = cor_n(n, Vx, x1);
    float y = cor_n(n, Vy, y1);
    float z = cor_n(n, Vz, z1);
    float s = (180 * asin(fabs(Vz) / V)) / M_PI;

    print_me_all(Vx, Vy, Vz, x, y, z, n);
    incidence1(z1, z0, x, s);
    return (0);
}
