# HackerRank 3rd Semester Algorithm Portfolio

## Student Information

- **Student Name:** Likhithesh M
- **Student ID / USN:** R25EF124
- **Semester:** 3rd Semester
- **Program:** B.Tech / B.E. Computer Science and Engineering
- **University:** REVA University, Bengaluru
- **Programming Language:** C++

## Profiles

- **HackerRank:** https://www.hackerrank.com/domains/algorithms
- **GitHub Repository:** `PASTE YOUR GITHUB REPOSITORY URL HERE`

---

## Portfolio Overview

This repository contains five algorithmic problem solutions completed as part of the 3rd-semester HackerRank Algorithms and GitHub Coding Portfolio activity.

The solutions demonstrate:

- Array processing
- Minimum/maximum tracking
- Counting
- Insertion sort
- Binary search
- Greedy algorithms
- Sorting
- Big-O time and space complexity analysis

All solutions are written in C++ and are organized into separate folders for clarity.

---

## Completed Problems

| No. | Problem | Topic | Approach | Time | Auxiliary Space |
|---|---|---|---|---|---|
| 1 | Mini-Max Sum | Arrays / Implementation | Track total, minimum and maximum | O(N) | O(1) |
| 2 | Birthday Cake Candles | Arrays / Counting | Find maximum and count occurrences | O(N) | O(1) |
| 3 | Insertion Sort - Part 1 | Sorting | Shift elements and insert last value | O(N) | O(1) |
| 4 | Binary Search | Searching | Iterative divide-and-conquer search | O(log N) | O(1) |
| 5 | Mark and Toys | Greedy / Sorting | Sort prices and buy cheapest toys first | O(N log N) | O(1) auxiliary* |

\*The vector itself stores the input, so total memory usage includes the input array. The stated auxiliary-space analysis focuses on extra working space beyond the input.

---

# 1. Mini-Max Sum

### Problem Summary
Given five integers, calculate the minimum sum and maximum sum that can be obtained by summing exactly four of the five integers.

### Approach
Instead of sorting the array, the solution calculates:

- Total sum of all five values
- Minimum value
- Maximum value

Then:

- Minimum sum = Total sum - Maximum value
- Maximum sum = Total sum - Minimum value

### Why this is efficient
Sorting is unnecessary because only the minimum and maximum values are required.

### Complexity
- **Time:** O(N)
- **Auxiliary Space:** O(1)

### HackerRank
- Challenge: https://www.hackerrank.com/challenges/mini-max-sum/problem

### Evidence
See `evidence/` for the accepted-submission screenshot.

---

# 2. Birthday Cake Candles

### Problem Summary
Given candle heights, determine how many candles have the maximum height.

### Approach
Scan the array once while maintaining:

1. The current maximum height.
2. The number of times that maximum occurs.

If a larger value is found, replace the maximum and reset the count to 1. If the same maximum is found, increment the count.

### Why this is efficient
The array only needs to be traversed once and no sorting is required.

### Complexity
- **Time:** O(N)
- **Auxiliary Space:** O(1)

### HackerRank
- Challenge:https://www.hackerrank.com/challenges/birthday-cake-candles/problem

### Evidence
See `evidence/` for the accepted-submission screenshot.

---

# 3. Insertion Sort - Part 1

### Problem Summary
Insert the last element of an almost-sorted array into its correct position while displaying the array after each shift.

### Approach
The last element is stored as the value to insert. Starting from the element immediately before it:

1. Compare the current element with the value.
2. Shift larger elements one position to the right.
3. Print the array after each shift.
4. Insert the value into the correct position.
5. Print the final array.

### Why this is efficient
For this HackerRank task, only one element needs to be inserted, so the implementation directly performs the required shifts.

### Complexity
- **Time:** O(N) in the worst case
- **Auxiliary Space:** O(1)

### HackerRank
- Challenge: https://www.hackerrank.com/challenges/insertionsort1/problem

### Evidence
See `evidence/` for the accepted-submission screenshot.

---

# 4. Binary Search

### Problem Summary
Find a target value in a sorted array using binary search.

### Approach
Binary search repeatedly divides the search range into two halves:

1. Calculate the middle position.
2. If the middle value equals the target, return its index.
3. If the middle value is smaller than the target, search the right half.
4. Otherwise, search the left half.
5. Return `-1` if the target is not found.

### Why this is efficient
Each iteration removes approximately half of the remaining elements from consideration.

### Complexity
- **Time:** O(log N)
- **Auxiliary Space:** O(1)

### Note
This is the required binary-search implementation for the portfolio activity. If an approved HackerRank binary-search challenge is used, replace the challenge URL below with that exact URL and add its accepted screenshot to `evidence/`.

### HackerRank / Reference
- HackerRank Algorithms: https://www.hackerrank.com/domains/algorithmes/binarysearch
---

# 5. Mark and Toys

### Problem Summary
Given toy prices and a budget, determine the maximum number of toys that can be purchased.

### Approach
Sort all prices in ascending order and repeatedly purchase the cheapest remaining toy while the budget is sufficient.

### Why this is efficient
Buying cheaper toys first maximizes the number of toys purchased under a fixed budget. Sorting allows the cheapest prices to be processed first.

### Complexity
- **Time:** O(N log N)
- **Auxiliary Space:** O(1) extra working space apart from the input container/sorting implementation
- **Input storage:** O(N)

### HackerRank
- Challenge:https://www.hackerrank.com/challenges/mark-and-toys/problem

### Evidence
See `evidence/` for the accepted-submission screenshot.

---

# Alternative Approaches

| Problem | Alternative Approach | Comparison |
|---|---|---|
| Mini-Max Sum | Sort the five values and sum first/last four | O(N log N), less efficient than direct tracking |
| Birthday Cake Candles | Sort and count equal values from the end | O(N log N), unnecessary |
| Insertion Sort - Part 1 | Use a library insertion/sorting operation | Does not directly demonstrate the required insertion process |
| Binary Search | Recursive binary search | Same O(log N) time, but uses O(log N) call-stack space |
| Mark and Toys | Use another selection-based strategy | Sorting gives a simple and reliable greedy solution |

---

# Learning Outcomes

Through these problems, I practiced:

1. Translating problem statements into algorithms.
2. Working with arrays and loops.
3. Applying greedy problem-solving.
4. Understanding sorting and searching.
5. Using Big-O notation.
6. Comparing alternative algorithms.
7. Writing readable C++ programs.
8. Using HackerRank to verify solutions.
9. Organizing coding work in GitHub.
10. Building a public coding portfolio.

---

# HackerRank Achievement Evidence

The `evidence/` folder contains screenshots from my HackerRank profile and accepted submissions.

Current evidence includes accepted submissions for:

- Mini-Max Sum
- Birthday Cake Candles
- Insertion Sort - Part 1
- Mark and Toys
-Binary search

The profile screenshot also shows my Problem Solving badge/progress.

> **Important:** Do not claim a 3-star badge in this README unless the badge has actually been earned. The activity specification treats the 3-star milestone as a portfolio goal.

---

# Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── README.md
│
├── 01-Mini-Max-Sum/
│   └── solution.cpp
│
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
│
├── 04-Binary-Search/
│   └── solution.cpp
│
├── 05-Mark-and-Toys/
│   └── solution.cpp
│
└── evidence/
    ├── min-max-sum.png
    ├── birthday-cake-candles.png
    ├── insertion-sort-part-1.png
    ├── mark-and-toys.png
    └── hackerrank-profile.png
```

---

# Conclusion

This portfolio demonstrates the practical application of basic algorithmic techniques in C++. The five problems cover array processing, counting, sorting, searching, and greedy optimization. By analyzing time and auxiliary space complexity for each solution, I learned that choosing an appropriate algorithm can significantly improve efficiency. I also practiced validating solutions through HackerRank and presenting my work professionally using GitHub.

The activity helped me understand how algorithmic problem-solving connects programming fundamentals with real software-development practices. Maintaining a public repository also provides a structured record of my coding progress and can be used as part of my academic and professional portfolio.

---

## Academic Integrity

All submitted solutions should represent my own understanding and work. HackerRank links, screenshots, and repository information are included only for academic evaluation and portfolio documentation.


