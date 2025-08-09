# POINTERS IN CPP

Aim: To study and implement C++Pointer basics.

Tools Used: VS Code or Programiz Online Compiler.

# Theory

Pointers in C++ are variables that hold memory addresses of other variables, providing direct access to memory locations. They enable efficient manipulation of data structures and memory through address arithmetic. Pointers are commonly used for array traversal, function arguments, and building data structures like linked lists. 

```
//Declaration
type* pointer_name;  // int* ptr;

//Initialization
type* pointer = &variable;  // int* p = &x;
```

--> Key Features:

1. Memory Address Storage – Pointers store memory addresses of variables, enabling direct access to data locations.
2. Dereferencing – Using the * operator, pointers retrieve or modify the value stored at their memory address.
3. Pointer Arithmetic – Support operations like ++, --, +, - to traverse memory (useful for arrays).
4. Dynamic Memory Handling – Enable efficient memory management (e.g., resizing data structures at runtime).

# Program-1: Incrementing Pointers

This program demonstrates pointer arithmetic in C++ by showing how pointer increment operations behave differently based on data types. When a pointer is incremented (`ptr++`), it advances by the size of its data type (e.g., `int*` moves by 4 bytes, `double*` by 8 bytes). The output reveals how each pointer's memory address changes, highlighting how pointer arithmetic is type-dependent and adjusts for the underlying variable size. 

--> Algorithm:

1. Initialize variables of different data types (int, float, double, bool)
2. Declare pointers for each data type and assign variable addresses using & operator
3. Display original memory addresses stored in each pointer
4. Increment each pointer using ++ operator
5. Print updated memory addresses showing type-dependent address shifts
6. Observe how different pointer types advance by different byte sizes (int: 4, float: 4, double: 8, bool: 1 typically)

# Program-2: Difference between two Pointers

This program demonstrates pointer subtraction in C++ by calculating the difference between values pointed to by two pointers (`p1` and `p2`) in an array. The pointers are initialized to point to specific elements (`arr[2]` and `arr[4]`), and their dereferenced values (`*p2 - *p1`) are subtracted to compute the result (20 in this case). The output shows how pointers can be used to indirectly access and manipulate array elements, highlighting their role in efficient memory-based operations. 

--> Algorithm:

1. Declare and initialize an integer array arr with 5 elements: {10, 20, 30, 40, 50}
2. Create two pointers:
  p1 pointing to address of arr[2] (value 30)
  p2 pointing to address of arr[4] (value 50)
3. Calculate difference between dereferenced pointer values: diff = *p2 - *p1 (50 - 30 = 20)
4. Display result: Print the computed difference between the pointed values
5. Program ends by returning 0

# Program-3: Reversing an Array using Pointers

This program demonstrates array reversal using pointers in C++. It creates an array of pointers (arrp) where each element stores the address of the corresponding element in the original array (arr). By dereferencing these pointers in reverse order (*arrp[4-i]), it constructs a new reversed array (arr_rev). The output displays both the original and reversed arrays, showcasing how pointers enable efficient memory-level manipulation of array elements without modifying the original array. 

--> Algorithm:

1. Initialize an integer array arr with 5 elements: {10, 20, 30, 40, 50}
2. Declare an array of integer pointers arrp[5] and a reversed array arr_rev[5]
3. Store addresses of arr elements in arrp using a loop (each arrp[i] = &arr[i])
4. Reverse elements by dereferencing pointers in reverse order (arr_rev[i] = *arrp[4-i])
5. Display original array by printing arr elements
6. Print reversed array from arr_rev
7. End program with return 0

# Program-4: String input & output using Pointers

This program demonstrates string manipulation using pointers in C++. The user inputs a string which is stored in str1, while a string pointer str_ptr is assigned the address of this string. By dereferencing the pointer (*str_ptr), the program outputs the original string, illustrating how pointers can indirectly access and display string data stored in memory.

--> Algorithm:

1. Declare a string variable str1 initialized as empty
2. Prompt user to input a string value
3. Store the input string in str1
4. Create a string pointer str_ptr
5. Assign address of str1 to str_ptr using & operator
6. Display the string by dereferencing pointer (*str_ptr)
7. End program with return 0

# Conclusion
This repository demonstrates core pointer operations in C++ through four practical programs. The examples cover pointer arithmetic, array element differencing, array reversal using pointer arrays, and string access via pointers. Each program illustrates how pointers enable efficient memory manipulation and direct data access. These implementations provide a clear foundation for understanding low-level memory management concepts in C++.
