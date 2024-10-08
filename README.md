# Pointer Operations
## Aim 
To study and implement Pointer Operations

## Theory
<br>
In C++, functions can receive parameters in different ways, influencing how the function manipulates the provided values. Two common methods are Call by Reference and Call by Value:
<br>

### Call by Reference  

**Definition:** Call by Reference means passing the address (reference) of the actual parameters to the function. This allows the function to modify the original values.  

### Call by Value 

**Definition:** Call by Value means passing a copy of the actual parameters to the function. Changes made to the parameters inside the function do not affect the original variables.

## Algorithms
### Call by reference

1. **Start**
2. **Define Function `swap(int *x, int *y)`**
   - **Input:** Pointers to two integers `x` and `y`
   - **Output:** Swapped values of the integers pointed to by `x` and `y`
   - **Steps:**
     1. Make a temporary variable `temp`
     2. Assign the value pointed to by `x` to `temp` (`temp = *x`)
     3. Assign the value pointed to by `y` to the location pointed to by `x` (`*x = *y`)
     4. Assign the value of `temp` to the location pointed to by `y` (`*y = temp`)
3. **In `main` Function**
   - Define integers `a` and `b` with 5 and 2.
   - Call `swap(&a, &b)` function
   - Print the value of `a`
   - Print the value of `b`
   


### Call by value

1. **Start**
2. **Define Function `swap(int x, int y)`**
   - **Input:** Two integers `x` and `y`
   - **Output:** Swapped values of `x` and `y`
   - **Inside Swap function:**
     1. Create a temporary variable `temp`
     2. Assign the value of `x` to `temp`
     3. Assign the value of `y` to `x`
     4. Assign the value of `temp` to `y`
3. **Inside `main` Function**
   - Define two integers `a` and `b` with 5 and 2
   - Call `swap(a, b)`
   - Print the value of `a`
   - Print the value of `b`
  
## Code:
**swap Pointer**

//gayatri ratnaparkhi 23070123169

#include <iostream>

using namespace std;

    void swap(int *x,int *y){
    	
        int temp;
        
        temp = *x;
        
        *x = *y;
        
        *y = temp;
        
    }
    
    int main(){
    	
        int a=10,b=20;
        
        swap(a,b);
        
        cout<<"a = "<<a<<endl;
        
        cout<<"b = "<<b<<endl;
        
    }
**swap value pointer**

//gayatri ratnaparkhi 23070123169

#include <iostream>

using namespace std;

    int main(){
    	
        int a=10,b=20;
        
        int temp;
        
        temp = a;
        
        a = b;
        
        b = temp;
        
        cout<<"a = "<<a<<endl;
        
        cout<<"b = "<<b<<endl;
        
    }
    
/*

**OUTPUT**

a = 20

b = 10

*/

## Conclusion
In this practical we have learnt about pointers and its various operations.
