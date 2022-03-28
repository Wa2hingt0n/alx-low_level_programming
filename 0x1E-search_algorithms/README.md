# 0x1E - C - Search Algorithms

## Overview
This project introduces various search algorithms, such as the linear search and the binary search. It also involves evaluating the best search algorith to use depending on one's needs. The algorithms are written in the C programming language.

## Files

### 0-linear.c: A function that searches for a value in an array of integers using the `Linear Search Algorithm`.

### 1-binary.c: A function that searches for a value in a sorted array of integers using the `Binary Search Algorithm`.

### 2-0: The `time complexity` (worst case) of a linear search in an array of size `n`.

### 3-0: The `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`.

### 4-0: The `time complexity` (worst case) of a binary search in an array of size `n`.

### 5-0: The `space complexity` (worst case) of a binary search in an array of size `n`.

### 6-0: The space complexity of the following function:

`int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}`