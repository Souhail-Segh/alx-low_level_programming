Author: SEGHROUCHNI Souhail <souhail.segh.ds@gmail.com>

# Search Algorithm in C:
- Task 0: Linear Search
- Task 1: Binary Search

# Big O Notation:
- Task 2: What is the time complexity (worst case) of a linear search in an array of size n?
- Task 3: What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
- Task 4: What is the time complexity (worst case) of a binary search in an array of size n?
- Task 5: What is the space complexity (worst case) of a binary search in an array of size n?
- Task 6: What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
  { 
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
  }
```