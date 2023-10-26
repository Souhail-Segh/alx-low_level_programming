#!/usr/bin/python3
'''
grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes”
(water inside that isn’t connected to the water around the island).
'''


def island_perimeter(grid):
    ''' island_perimeter calculation function. '''
    cal = 0
    max_row = len(grid)
    max_col = len(grid[0])

    for r in range(max_row):
        for c in range(max_col):
            if grid[r][c] == 1:
                # up
                if r == 0:
                    up = 1
                elif grid[r - 1][c] == 1:
                    up = 0
                else:
                    up = 1

                # down
                if r == max_row - 1:
                    down = 1
                elif grid[r + 1][c] == 1:
                    down = 0
                else:
                    down = 1

                # left
                if c == 0:
                    left = 1
                elif grid[r][c - 1] == 1:
                    left = 0
                else:
                    left = 1

                # right
                if c == max_col - 1:
                    right = 1
                elif grid[r][c + 1] == 1:
                    right = 0
                else:
                    right = 1

                cal = cal + up + down + right + left

    return cal
