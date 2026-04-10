# 🔢 Sorting Algorithms & Big O

Welcome to the **Sorting Algorithms** project! This project is part of the Holberton School curriculum and explores some of the most fundamental algorithms in computer science. Buckle up — we're about to put arrays in order! 🚀

> Project made in pairs by **Panaki Gillot** & **Noham Oulma**

---

## 🧠 What You'll Learn

By the end of this project, you'll be able to confidently explain:

- At least four different sorting algorithms and how they work
- What Big O notation is and how to evaluate time complexity
- How to select the best sorting algorithm for a given input
- What makes a sorting algorithm **stable**

---

## 📋 Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style:** Betty coding style
- No global variables allowed
- No more than 5 functions per file
- No standard library functions (no `printf`, `puts`, etc.)
- All prototypes must be in `sort.h`

---

## 🏗️ Data Structures

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

---

## 📁 File Overview

| File | Algorithm | Time Complexity (best / avg / worst) |
|---|---|---|
| `0-bubble_sort.c` + `0-O` | Bubble Sort | O(n) / O(n²) / O(n²) |
| `1-insertion_sort_list.c` + `1-O` | Insertion Sort | O(n) / O(n²) / O(n²) |
| `2-selection_sort.c` + `2-O` | Selection Sort | O(n²) / O(n²) / O(n²) |
| `3-quick_sort.c` + `3-O` | Quick Sort (Lomuto) | O(nlog(n)) / O(nlog(n)) / O(n²) |
| `sort.h` | Header file | All prototypes & structures |
| `print_array.c` | Utility | Prints an array of integers |
| `print_list.c` | Utility | Prints a doubly linked list |

---

## 🚀 Usage

Compile and run any sorting algorithm like this:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <main.c> <sort_file.c> print_array.c -o output
./output
```

Example with Quick Sort:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
./quick
```

Output:

```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
...

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

---

## 📐 Big O Notation Cheatsheet

| Notation | Name | Example |
|---|---|---|
| O(1) | Constant | Array access by index |
| O(log n) | Logarithmic | Binary search |
| O(n) | Linear | Simple loop |
| O(n log n) | Linearithmic | Merge sort, Quick sort (avg) |
| O(n²) | Quadratic | Bubble sort, Insertion sort |

> Note: Always use the **short** notation — no constants. Write `O(n)` not `O(2n)`.

---

## 💡 How to Choose the Right Algorithm?

- **Small dataset** → Insertion Sort (simple, low overhead)
- **Nearly sorted data** → Bubble Sort or Insertion Sort
- **Large random dataset** → Quick Sort or Merge Sort
- **Need stability** → Merge Sort or Insertion Sort
- **Memory constrained** → Quick Sort (in-place)

---

## ✍️ Authors

Built with 💙 by **Panaki Gillot** & **Noham Oulma** as part of the **Holberton School** curriculum.