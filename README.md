# Exp-15 Recursion in C++ 

---

## 🎯 **Aim:**

To understand and implement the concept of **Recursion** in C++ through practical examples like **Factorial**, **String Reversal**, and **Sum of Natural Numbers**.

---

## 🛠️ **Tools Used:**

* **Compiler:** g++ or any C++ compiler
* **IDE:** Visual Studio Code, Code::Blocks, or any **Online C++ Compiler**

---

## 📚 **Theory:**

### 🔄 What is Recursion?

**Recursion** is a programming technique where a function **calls itself** to solve a complex problem by breaking it into smaller, more manageable sub-problems. It continues calling itself until it reaches a well-defined **base case**, which is the simplest form of the problem that can be solved directly.

> In simple terms, recursion helps in solving a problem by solving smaller instances of the same problem.

---

### 🧠 Why Use Recursion?

* To simplify problems involving repetition.
* Ideal for tasks that can be divided into similar subtasks.
* Makes code elegant and concise (especially in mathematical or tree-based problems).

---

### 📌 Types of Recursion

| Type                   | Description                                                                           |
| ---------------------- | ------------------------------------------------------------------------------------- |
| **Direct Recursion**   | A function calls itself directly.                                                     |
| **Indirect Recursion** | A function calls another function which eventually calls the original function again. |

---

### ⚙️ Structure of a Recursive Function

```cpp
return_type function_name(parameters) {
    if (base_condition) {
        return base_value;   // Stopping condition
    } else {
        return function_name(smaller_parameters);  // Recursive call
    }
}
```

---

### 🧵 Key Features of Recursion

* **Base Case:** A mandatory exit condition to prevent infinite calls.
* **Recursive Case:** Function reduces the problem and calls itself.
* **Call Stack:** Each function call is stored in memory until resolved.
* **Overhead:** Recursion may cause stack overflow if not used carefully.

---

## ✅ Programs & Algorithms

---

### 🔢 **Program 1 – Factorial using Recursion**

#### 📘 Algorithm

1. Start.
2. Define function `factorial(int n)`.
3. If `n == 0` or `n == 1`, return 1 (base case).
4. Else, return `n * factorial(n - 1)`.
5. In `main()`, take user input and call the function.
6. Print the result.
7. Stop.

#### 📤 Sample Output

```
Enter a number to find its factorial: 5
Factorial of 5 is: 120
```

---

### 🔄 **Program 2 – Reverse a String using Recursion**

#### 📘 Algorithm

1. Start.
2. Define function `length(char str[])` to find the string length.
3. Define function `reverse(char str[], int i, int n)`:

   * If `i == n`, return (base case).
   * Else, call `reverse(str, i + 1, n)`.
   * Print `str[i]` after returning.
4. In `main()`, input string and call `reverse()` function.
5. Stop.

#### 📤 Sample Output

```
Enter a string: recursion
Reversed string is: noisrucer
```

---

### ➕ **Program 3 – Sum of Natural Numbers using Recursion**

#### 📘 Algorithm

1. Start.
2. Define function `sum(int n)`:

   * If `n <= 1`, return `n` (base case).
   * Else, return `n + sum(n - 1)`.
3. In `main()`, input a number.
4. Call the function and display the result.
5. Stop.

#### 📤 Sample Output

```
Enter a number: 10
Sum of first 10 natural numbers is: 55
```

---

## 📝 Key Learning Outcomes

* Recursion is ideal for problems that can be broken down into smaller sub-problems.
* A **base case** is crucial to prevent infinite recursion.
* Recursive functions use **stack memory**, making them elegant but sometimes memory-intensive.
* Many mathematical and logical problems are best solved recursively.

---

## 🌍 Applications of Recursion

| Domain          | Use Case                                                                  |
| --------------- | ------------------------------------------------------------------------- |
| Mathematics     | Factorials, Fibonacci, Power calculations                                 |
| Data Structures | Tree Traversal (Inorder, Preorder, Postorder), Graph Traversal (DFS)      |
| Algorithms      | QuickSort, MergeSort, Binary Search                                       |
| Problem Solving | String reversal, Palindromes, Tower of Hanoi, Backtracking (e.g., Sudoku) |

---

## ✅ Advantages of Using Recursion

* **Code Clarity:** Problems are broken down into simpler sub-problems.
* **Less Code:** Often requires fewer lines than iterative solutions.
* **Better Representation:** Natural way to solve problems involving branching structures like trees and graphs.
* **Divide & Conquer:** Ideal for recursive algorithms like merge sort and quicksort.

---

## ⚠️ Points to Remember

* Always include a **base case** to avoid stack overflow.
* Be aware of **stack limitations** in systems with deep recursion.
* In some cases, **iteration** might be more efficient than recursion.

---
## 🔚 Conclusion

Recursion is a fundamental and powerful concept in C++ that simplifies problem-solving by breaking tasks into smaller, repeatable sub-tasks. It is especially useful in mathematical computations, data structures, and algorithm design. However, proper use of base cases and understanding of stack behavior is essential to avoid infinite recursion and memory issues. With careful implementation, recursion leads to cleaner, more readable, and efficient code.
