# Middle Element
m = floor((L+R)/2) may lead to overflow (happen to Java engineers)
Instead use:
    m = L + floor((R-L) / 2)

# Implementation

```
L = 0, R = N -1
while L <= R:
    mid = L + (R - L) / 2
    if a[mid] == target:
        return mid
    if a[mid] < target:
        L = mid + 1
    else:
        R = mid - 1
return -1
```

# Non-Arrays
Sometimes there is no array, but binary search is still applicable.

#### Example:
<b>Is x a square?</b>

##### Solution:
Do a binary search with L = 0 and R = x. Where you check if the value is m^2 is used instead of a[m] and update L and R accordingly.

# Complexity

N -> N/2 -> N/4 -> ... -> 1 -> 0

O(log_2 N)

# Lower Bound (harder variance)

#### Example:
<b>Find first value >= x</b>
x = 4
2, 3 , 5, 6, 8, 10, 12

##### Solution:
Create another variable, lets say `ans`, and when we meet a position or value that satisifies the condition we store it as a possible answer.

Never terminate the while loop because you found an answer. Instead keep searching for a better answer.

## Implementation:

```
L = 0, R = N-1
* ans = -1
while L <= R:
    mid = L + (R - L) / 2
    if a[mid] >= target: *
       * ans =  mid
       R = mid - 1
    else:
        L = mid + 1
return ans *
```

# Rotated Array (harder variance)
#### Example
Somebody rotated (shifted) a sorted array. Find the smallestelement

```6, 7, 9, 15, 19, 2, 3```

If comparing `15` (middle) there is nothing one can do for comparison.
Value can be left or right of midpoint.

Instead of comparing `15` with neighbors, the comparison should be down with the first and last elements of the array.


# Find Peak (harder variance)
#### Example
The array increases and then decreases. Find the maximum.

```2, 3, 4, 6, 9, 12, 11, 8, 6, 4, 1 ```

##### My Guess / Solution:
Performing binary search, but if `a[mid] > a[mid - 1]` and `a[mid] < a[mid + 1]`  is the end condition.

##### Solution:
Think of the above array as a sequence of Trues until reaching the first decrease which will then be a sequence of Falses.

```2(T), 3(T), 4(T), 6(T), 9(T), 12(T), 11(F), 8(F), 6(F), 4(F), 1(F)```

```
L = 0, R = N-1
* ans = -1
while L <= R:
    mid = L + (R - L) / 2
    if a[mid] > a[mid - 1]:
        ans = mid
        L = mid + 1
    else:
        R = mid - 1
return ans
```
# Real numbers
Binary search can be used for real numbers with a set precision as well

#### Example:
Find sqrt(x) with some precision.

##### Solution
```
L = 0, R = x
while R - L > eps:
    mid = L + ( R - L )  / 2
    if mid*mid < target:
        L = mid
    else:
        R = mid
return L + ( R + L ) / 2
```

# Take away
Binary search is useful for problems that can be thought to be searching for a T/F in a sea of F/Ts (i.e. opposite of the last). Check the middle element, save it if it satisfies being a possible answer.