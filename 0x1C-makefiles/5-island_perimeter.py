#!/usr/bin/python3

"""perimeter"""


def island_perimeter(grid):

    cuadrado = 0
    mitad = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                cuadrado += 1
                if grid[i - 1][j] == 1:
                    mitad += 1
                if grid[i][j - 1] == 1:
                    mitad += 1
    return cuadrado * 4 - mitad * 2
