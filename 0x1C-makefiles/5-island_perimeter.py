#!/usr/bin/python3
"""Island Perimeter function"""


def island_perimeter(grid):
    """Return perimeter of island based on matrix"""
    p = 0

    for row in range(len(grid)):
        for x in range(len(grid[row])):
            if grid[row][x] == 1:
                if x - 1 < 0 or grid[row][x - 1] == 0:
                    p += 1
                if x + 1 > (len(grid[row])) or grid[row][x + 1] == 0:
                    p += 1
                if row - 1 < 0 or grid[row - 1][x] == 0:
                    p += 1
                if row + 1 > (len(grid) - 1) or grid[row + 1][x] == 0:
                    p += 1

    return p
