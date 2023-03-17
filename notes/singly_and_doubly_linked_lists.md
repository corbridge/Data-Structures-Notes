# Singly and Doubly Linked Lists

## What is a linked list?
A linked list is a sequential list of nodes that hold data which point to other nodes also containing data.

## Where are linked lists used?
- Used in many List, Queue and Stack implementations.
- Great for creating circular lists.
- Can easily model real world objects such as trains.
- Used in separate chaining, which is present certain Hastable implementations to deal with hashing collsiions.
- Often used in the implementation of adjacency lists of graphs.

### Terminology
- Head: The first node in a linked list
- Tail: The last node in a linked list
- Pointer: Reference to another node
- Node: AN object containing data and pointers

## Singly vs. Doubly Linked Lists
- Singly linked lists only hold a reference to the next node. In the implementation you always maintain a reference
to the head to the linked list and a reference to the tail node for quick additions/removals.d
- Doubly linked list each node holds a reference to the next and previous node. In the implementation you always maintain
a reference to the head and the tail of the doubly linked list to do quick additions/removals from both ends of your list.

|        | Pros | Cons |
|:------:|:----:|:-----|
|Singly linked | Uses less memory, simpler implemetation | Cannot easily access previous elements |
|Doubly linked | Can be traversed backwards | Takes 2x memory |

## Complexity analysis

|     | Singly Linked | Doubly Linked |
|:---:|:-------------:|:-------------:|
| Remove at head | 0(1) | 0(1) |
| Remove at tail | 0(n) | 0(l) |
| Remove in middle | 0(n) | 0(n) |

**NOTE:** [Explanation of linked list in C](https://www.edureka.co/blog/linked-list-in-c/#:~:text=What%20is%20Linked%20List%20in,which%20is%20called%20a%20node.)
