# Data Structures in C 

This repository contains implementations of common data structures in C programming language , with time complexity analysis for for each.

## Table of contents

1.[Overview](#overview)
2.[List of Data Structures](#list-of-data-structures)
3.[Installation](#installation)
4.[Usage](#usage)
5.[Contributing](#contributing)
6.[License](#license)
 
## Overview

This project aims to implement all major data structures in C. Each data structures includes basic operations like insertion , deletion , and search and also provides a quick reference for time complexity.

## List of Data Structures

1. **Arrays**
2. **Linked Lists**
3. **Stack and Queues**
4. **Trees**
5. **Graphs**
6. **Heaps**
7. **Hash Tables**
8. **Disjoint Sets**

## Installation 

Clone the repository and compile any of the data structure files using a C compiler.

```bash
git clone https://github.com/Saikat-too/DataStructure.git || git@github.com:Saikat-too/DataStructure.git

cd DataStructure
```
## Usage

### Array/Vector
Create A Dynamic Array 
```
cVector *arr1 = cVec(10) 
```
Create A Dynamic Array with value initialization 

```
cVector *arr2 = cVec_val(10 , 3);

```
Add Elements

```
cVec.push(10);
```
Access Elements
```
int value = cVec_get(arr1 , index_number);
```
Remove The Last Elements
```
cVec_pop(arr1);
```
Clear The Vector 
```
cVec_free(arr1);
```
Sort the Vector Array in Ascending
```
cVec_sort(arr1 , true)
```
Sort the Vector Array in Descending 
```
cVec_sort(arr2 , false)
```
Lower Bound for Sorted Arrays
```
int lb_index = lower_bound(arr1 , value)
```
Upper Bound for Sorted Arrays 
```
int up_index = upper_bound(arr1 , value)
```

