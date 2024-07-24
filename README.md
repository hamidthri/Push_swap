
## Project Overview

The **Push Swap** project is designed to test your understanding of sorting algorithms and data structure manipulation. The goal is to sort a stack of integers using a set of defined operations. This project focuses on implementing efficient sorting algorithms and optimizing the number of operations to achieve the sorted stack.

## Objectives

- Implement efficient sorting algorithms to sort a stack of integers.
- Minimize the number of operations required to sort the stack.
- Demonstrate understanding of data structures and algorithmic problem-solving.

## Project Requirements

1. **Programming Language**: C
2. **Libraries**: Standard C libraries (no external libraries)
3. **Operations**: The following operations must be implemented:
   - `sa` - Swap the top two elements of stack A
   - `sb` - Swap the top two elements of stack B
   - `ss` - Swap the top two elements of both stacks A and B
   - `pa` - Push the top element of stack B to stack A
   - `pb` - Push the top element of stack A to stack B
   - `ra` - Rotate stack A (shift up)
   - `rb` - Rotate stack B (shift up)
   - `rr` - Rotate both stacks A and B
   - `rra` - Reverse rotate stack A (shift down)
   - `rrb` - Reverse rotate stack B (shift down)
   - `rrr` - Reverse rotate both stacks A and B

## Instructions
### Sorting Algorithm and Strategy

In this project, two main strategies were used:

1. **Insertion Sort for Indexing**

   The **Insertion Sort** algorithm was used to efficiently fetch the index of each number. This approach helps in determining the correct position for each number in the sorted stack. Insertion Sort is suitable for this task due to its simplicity and efficiency in handling small to medium-sized lists.

2. **K-Shape Algorithm**

   The **K-Shape Algorithm** was implemented to optimize the sorting process by organizing stack B in a specific manner. Here’s how it works:

   - **Algorithm Concept**: The K-Shape Algorithm arranges the elements in stack B such that larger numbers are positioned at the top and bottom of the stack, while smaller numbers are placed in the middle. This arrangement helps in reducing the number of operations needed to move the large numbers to the end of stack A.

   - **Benefits**: By organizing stack B in this way, the algorithm minimizes the number of actions required to sort stack A. This optimization reduces the overall number of operations and improves the efficiency of the sorting process.

## Clone the Repository
   ```
   git clone https://github.com/hamidthri/Push_swap
   cd Push_swap
   make
  ```
## Usage
Run the Program
After building the project, you can run the program with the following command:
    ```
    ./push_swap <numbers>
    ```
Replace <numbers> with a space-separated list of integers that you want to sort. For example:

    ./push_swap 4 3 2 1
This command will output the sequence of operations needed to sort the integers.

View the Results
The output will be a series of operations (e.g., sa, pb, ra) that will transform the initial stack into a sorted stack.

## Example
Here is an example of how to use the program:

    ./push_swap 4 3 2 1
    rra
    pb
    sa
    rra
    pa

This output sequence shows the operations required to sort the stack [4, 3, 2, 1] into [1, 2, 3, 4].
