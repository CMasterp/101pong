# Pong - Vectors and video games

- **Binary name:** 101pong
- **Repository name:** 101pong
- **Repository rigths:** ramassage-tek
- **Language:** C, C++, perl 5, python 3 (>= 3.5), ruby 2 (>= 2.2), php 5.6, bash 4 and everything working on "the dump"
- **Choosed language:** C
- **Compilation:** via Makefile, including re, clean and fclean rules


# Subject

Pong, an arcade game developped in 1972 by Ralph Baer (Atari), is the first ever successful video game. It
was inspired by the very first video game, Tennis for Two, developped in 1958 by William Higinbotham on
an oscilloscope.
The goal of this project is to work on a 3D version of this game (or of the Breakout game. . .). Only one paddle
will be considered, located in the (Oxy) plane (which is defined by the equation z = 0).

> :bulb: Bounces on the paddle and game over will not be taken into account; in other words,
only the motion of the ball will be considered, regardless of the context.

Your program must print:
- The velocity vector of the ball,
- The coordinates of the ball after a given amount of time,
- The angle at which the ball will hit the paddle (if it will actually hit it, at anytime from t = 0)

## Nao Marvin

| Details      | Nao Marvin :robot: (%) |
| ------------- |:-------------:|
| `rigor`: 100% \| `vector`: 100% \| `trigonometry`: 100% \| `mathematical rigor`: 100% | 100% |

## Prerequisites

What you need

```
GlibC
gcc
make
```

## Compiling

Clone the repository and go inside. Then,

```
$ make
```

## Usage

```
~/B-MAT-100> ./101pong x0 y0 z0 x1 y1 z1 n
```

- **x0:** ball abscissa at time t - 1 
- **y0:** ball ordinate at time t - 1 
- **z0:** ball altitude at time t - 1 
- **x1:** ball abscissa at time t 
- **y1:** ball ordinate at time t 
- **z1:** ball altitude at time t 
- **n:** time shift (greater than or equal to zero, integer)

## Examples

```
∼/B-MAT-100> ./101pong 1 3 5 7 9 -2 4
The velocity vector of the ball is:
(6.00, 6.00, -7.00)
At time t + 4, ball coordinates will be:
(31.00, 33.00, -30.00)
The ball won't reach the paddle.
```

```
∼/B-MAT-100> ./101pong 1.1 3 5 -7 9 2 4
The velocity vector of the ball is:
(-8.10, 6.00, -3.00)
At time t + 4, ball coordinates will be:
(-39.40, 33.00, -10.00)
The incidence angle is:
16.57 degrees
```

> :bulb: The incidence angle should be contained between 0 and 90 degrees.

> :bulb: Mind the float numbers precision!