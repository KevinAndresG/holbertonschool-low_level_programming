#!/usr/bin/python3
"""perimeter of and island"""


def island_perimeter(grid):
    """return the perimeter to the island"""
    perimeter = 0
    lengrid = 0
    lenlist = len(grid[0])
    for k in grid:
        lengrid += 1
    for row in range(len(grid)):
        if grid[row][0] != 0 or grid[row][lenlist - 1] != 0:
            return 0
        for j in range(len(grid[row])):
            if grid[0][j] != 0 or grid[lengrid - 1][j] != 0:
                return 0
            """  if len(grid[row]) != lenlist:
                if grid[row][lenlist] and grid[row][j] ==
                1 and grid[row][j + 1] == 0 and grid[row + 1][j] ==
                0 and grid[row + 1][j + 1] == 1:
                return 0 """
            if grid[row][j] == 1:
                if grid[row][j - 1] == 0:
                    perimeter += 1
                """ if len(grid[row]) != lenlist: """
                if grid[row][j + 1] == 0:
                    perimeter += 1
                if grid[row - 1][j] == 0:
                    perimeter += 1
                if grid[row + 1][j] == 0:
                    perimeter += 1
    return perimeter
