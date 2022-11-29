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
Add link to pdf.
 
## Usage
Compile the programs using `make`.
### checker
- `checker` will get as an argument the `stack a` formatted as a list of integers. The first argument should be at the top of the stack.
  - If no argument is given `checker` stops and displays nothing.
- After that `checker` will then wait and read instructions on the standard input, each instruction will be followed by `\n`.
- Once all the instructions have been read, checker will execute them on the stack received as an argument.
  - Execute by `CTRL + D`
- If after executing those instructions, `stack a` is actually sorted and `b` is empty, the output is `OK`.
  - Otherwise the output is `KO`.
- In case of eror, the output is simply `Error`.
- Note that the input must be clean.
  - Integers
  - No duplicates
  - Separated with spaces

**ADD IMAGE HERE**

### push_swap
something somethin

### push_swap with checker
something somethinf
 
 
## Algorhitm
## Visualizer
 
 
## Keywords
Sorting algorithms
Notion of stack and manipulation of elements
 

## Rating
![feedback](https://user-images.githubusercontent.com/93189576/204519215-f600805a-758d-4e08-88b8-8f375f4d018e.png)
![125](https://user-images.githubusercontent.com/93189576/204518133-d79e2a49-f394-4c71-b76b-0f29c89c7d37.png)
