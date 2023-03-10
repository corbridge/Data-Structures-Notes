## What is a Data Structure?
- A data structure (DS) is a way of organizing data so that it can be used effectively.

## Why Data Structures?
- They are essential ingredients in creating fast and powerfful algorithms.
- They help to manage and organize data.
- They make code cleaner and easier to understand.

## Abstract Data Type
An abstract data type (ADT) is an abstraction of a data structure which provides only the interface to which a data structure must adhere to.

The interface does not five any specific details about how something should be implemented or in what programming language.

### Examples
| Abstraction (ADT) | Implementation |
|:-----------------:|:--------------:|
|List               |Dynamic Array, Linked List |
|Queue              |Linked List based Queue, Array based Queue, Stack based Queue|
|Map                | Tree map, Hash map, Hash table|

## Computational Analysis
As a programmer, we often find ourselves asking the same two question over and over again:
- How much time does this algorithm need to finish?
- How much space does this algorithm need for its computation?

## Big-O Notation
Big-O Notation gives an upper bound of the complexity in the worst case, helping to quantify performance as the input size becomes arbitrarily large.

### Big-O Notation
n - The size of the input, complexities ordered in from smallest to largest
- Constant Time: 0(l)
- Logarithmic Time: 0(log(n))
- Linear Time: 0(n)
- Linearithmic Time: 0(nlog(n))
- Quadric Time: 0(n^2)
- Cubic Time: 0(n^3)
- Exponential Time: 0(b^n), b > 1
- Factorial Time: 0(!m)

### Big-0 Properties
Basicly, we need to take care of how many time does the programm spent executing, when we add more loops, like while or for, we are making the code slower.
