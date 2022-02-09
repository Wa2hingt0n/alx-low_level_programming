#!/usr/bin/python3
""" Declares a function `island_perimeter` that takes a list of lists as
an argument """


def island_perimeter(grid):
    """ Returns the perimeter of the island described by `grid`

    Args:
        grid (list): A list of list of integers, where 0 represents a water
                     zone and 1 represents a land zone.
                   - One cell is a square with side length 1
                   - Grid cells are connected horizontally/vertically (not
                     diagonally)
                   - Grid is rectangular, width and height don't exceed 100
                   - Grid is completely surrounded by water, and there is one
                     island or nothing.
    """
    counter = 0
    proximity_loss = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                counter += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    proximity_loss += 1
                if (i > 0 and grid[i - 1][j]) == 1:
                    proximity_loss += 1
    perimeter = (counter * 4) - (proximity_loss * 2)

    return perimeter
