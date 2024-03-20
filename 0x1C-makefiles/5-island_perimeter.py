#!/usr/bin/python3
"""island module"""


def island_perimeter(grid):
    """returns premiter of the island"""
    count = 0

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    count += 1
                if j == 0 or grid[i][j - 1] != 1:
                    count += 1
                if j == len(grid[0]) - 1 or grid[i][j + 1] != 1:
                    count += 1
                if i == len(grid) - 1 or grid[i + 1][j] != 1:
                    count += 1
    return c
