# Push_swap
Add gif here
## Description

This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, you will have to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting.

You have at your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks.
Your goal is to write two programs in C:

- The first, named `checker` which takes integer arguments and reads instructions on the standard output. Once read, it executes them and displays `OK` if integers are sorted. Otherwise, it will display `KO`.
- The second one is called `push_swap` which calculates and displays on the standard output the smallest program using instruction language that sorts integer arguments received.

Within your mandatory part you are allowed to the following functions:
- `write`
- `read`
- `malloc`
- `free`
- `exit`
 
### Game rules
- The game is composed of two stacks named `a` and `b`.
- To start with:
  - `Stack a` contains a random number of either positive or negative numbers without any duplicates.
  - `Stack b` is empty.
- The goal is to sort in ascending order numbers into `stack a`.
- To do this you have the following operations at your disposal:

| Operations | Description |
| :---:      | :---        |
| sa | `swap a` swap the first 2 elements at the top of stack a. (Do nothing if there is only one or no elements.) |
| sb | `swap b` swap the first 2 elements at the top of stack b. (Do nothing if there is only one or no elements.) |
| ss | `sa` and `sb` at the same time. |
| pa | `push a` take the first element at the top of `b` and put it at the top of `a`. (Do nothing if `b` is empty.) |
| pb | `push b` take the first element at the top of `a` and put it at the top of `b`. (Do nothing if `a` is empty.) |
| ra | `rotate a` shift up all elements of stack a by 1. The first element becomes the last one. |
| rb | `rotate b` shift up all elements of stack b by 1. The first element becomes the last one. |
| rr | `ra` and `rb` at the same time. |
| rra | `reverse rotate a` shift down all elements of stack a by 1. The last element becomes the first one. |
| rrb | `reverse rotate b` shift down all elements of stack b by 1. The last element becomes the first one. |
| rrr | `rra` and `rrb` at the same time. |

### PDF
The full assignment [PDF](https://github.com/pyrypiironen/Push_swap/blob/master/push_swap.pdf).

## Usage
Run `make` to compile both programs.
### checker
`./checker  <list of integers>`
- `checker` will get as an argument the `stack a` formatted as a list of integers. The first argument should be at the top of the stack.
  - If no argument is given `checker` stops and displays nothing.
- After that `checker` will then wait and read instructions on the standard input, each instruction will be followed by `\n`.
- Once all the instructions have been read, checker will execute them on the stack received as an argument.
  - Execute by `CTRL + D`
- If after executing those instructions, `stack a` is actually sorted and `b` is empty, the output is `OK`.
  - Otherwise the output is `KO`.
- In case of error, the output is simply `Error`.
- Note that the input must be clean.
  - Integers
  - No duplicates
  - Separated with spaces

**ADD IMAGE HERE**

### push_swap
`./push_swap <list of integers>`
- `push_swap` will get as an argument the `stack a` formatted as a list of integers. The first argument should be at the top of the stack.
- The program displays the smallest list of instructions possible to sort the `stack a`, the smallest number being at the top.
  - Instructions are separated by a `\n`.
- Note that the input must be clean or the program displays just `Error`.
  
 **ADD IMAGE HERE**
 
 - To get count of instructions `push_swap` needs to sort the stack use command `wc -1` via pipe.
 
 `ARG="<list of integers>"; push_swap $ARG | wc -1`
 
 **ADD IMAGE HERE**
 
### push_swap with checker
`ARG="<list of integers>"; ./push_swap $ARG | ./checker $ARG`
- Programs can be used together. In this case `push_swap` sort the stack and `checker` read the standart input to displays `OK` or `KO` depending on whether the stack is in right order or not.
  - In other words `checker` checks if `push_swap` works correctly.
 
 **ADD IMAGE HERE**
 
 ## The Algorithm

The algorithm of push_swap was the key part of the project and a great way to challenge myself to optimize it as well as I can.

My basic idea into an algorithm is to push the numbers once to stack b in the order that makes it possible to push them back to stack a straight to right order with the least rotation on stack b while finding the next number to push back. To do that I split the numbers on segments and push them to stack b in the order that I can always find the biggest or the smallest number without going too deep on the stack. The most important thing in terms of efficiency is that the algorithm always has two options of which number it will rotate to the top of stack b and push back to stack a. If the stack b isn’t sorted well for this purpose it causes extra rotation for every step and ruins the efficiency.

### Pre optimization: sequence numbers

Before starting to run the algorithm I give a sequence number to every number (integer). Thanks to this the algorithm can use, for example, sequence numbers 1 to 500 except 500 random integer values. The real trick is that the sequence numbering starts at the middle of numbers (and loop from biggest to smallest) which saves on average over 200 moves with a stack of 500 numbers. That is because the algorithm pushes numbers back to stack a starting with the biggest and the smallest numbers which leaves the smallest number in the middle of the stack a after the last number has pushed back. Now when the smallest sequence  number is the middle of the stack a it means that the smallest number is top of the stack.

**ADD IMAGES TO COMPARE**

In the name of simplicity numbers refer to the sequence numbers in the following text.

###  Segments

First, I divide the numbers into either 4, 16 or 32 segments depending on the amount of numbers to make the algorithm as efficient as possible. Sets of less than 40 numbers are divided into 4 segments, sets of 40-350 numbers are divided into 16 segments and larger sets of numbers are divided into 32 segments.

When the numbers are divided into segments, I start to rotate stack a and move the numbers belonging to the middle four segments to stack b. When these have all been moved, I expand the search area by two segments in both directions and repeat this until all the numbers (except three smallest) have been moved to stack b.

For each moved number, I check whether the number belongs to the largest or smallest segment to be moved, in which case the number is left at the top of stack and otherwise moved to the bottom of stack. Thanks to this, the numbers are in the order that I can always find the biggest or the smallest number without going too deep on the stack b when moving numbers back to stack a.

![segments](https://user-images.githubusercontent.com/93189576/210215151-71b372f1-5b80-41bc-b08f-e58b4ae87843.png)

<Code>hoi hoih,</>

## Visualizer
 
 
## Keywords
Sorting algorithms
Notion of stack and manipulation of elements
 

## Rating
![feedback](https://user-images.githubusercontent.com/93189576/204519215-f600805a-758d-4e08-88b8-8f375f4d018e.png)
![125](https://user-images.githubusercontent.com/93189576/204518133-d79e2a49-f394-4c71-b76b-0f29c89c7d37.png)