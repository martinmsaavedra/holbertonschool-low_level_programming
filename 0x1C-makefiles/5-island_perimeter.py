#!/usr/bin/python3
''' Returns the perimeter of an island (grid) '''


def island_perimeter(grid):
    ''' Function returns the perimeter of
    the island described in grid '''

    if len(grid) == 0 or grid is None:
        return 0

    alto = len(grid)
    largo = len(grid[0])
    perimeter = 0

    for lists in grid:
        for elem in lists:
            if type(elem) is not int:
                return

    for y in range(alto):
        for x in range(largo):
            if grid[y][x] == 0:
                continue
            if y == 0 or grid[y - 1][x] == 0:
                perimeter += 1
            if y == alto - 1 or grid[y + 1][x] == 0:
                perimeter += 1
            if x == 0 or grid[y][x - 1] == 0:
                perimeter += 1
            if x == largo - 1 or grid[y][x + 1] == 0:
                perimeter += 1
    return perimeter
