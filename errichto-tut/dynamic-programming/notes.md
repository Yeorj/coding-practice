# Dynamic Programming (DP)
DP is used for problems where the naive solution is recursive. Instead of using the recursive solution, which would repeat multiple times unnecessarily it is instead better to save the result of the subproblem and reuse multiple times to avoid extra computation.

# When to use DP:
1. Count something, often the number of ways (Combinatorics)
2. Minimize or maxmize certain values (Greedy)
3. YES/NO questions (Greedy)


# Iteration vs Recurison
| Iteration                    |  Recursive                     |
|------------------------------|--------------------------------|
| <li>Speed</li>               | <li> Easier to apply </li>     |    
| <li> Easier complexity       | <li> Fewer states </li>        |
| <li> Shorter code </li>      | <li> Order doesn't matter </li>|
| <li> Harder techniques </li> |                                |

In the end most competitors like iterative implementation of DP as they tend to be faster.

# Examples

## Fibonacci
```
F[0] = 0, F[1] = 1
F[i] = F[i-1] + F[i-2]

            F[5]
            /   \
        F[4]    F[3]
      /   \     /     \
  F[3]   F[2] F[2]    F[1]
             .
             .
             .
```

From the tree it is easy to see that certain values (e.g. `F[3]`) are used
more than once and there is no need to recalculate them. This is called a "repeated subproblem," we won't need to find it again.

```
Pseudocode for Fibonacci (Recursive)
---------------------------------------------------------------------------
def f(i):
    if i < 2:
        return i
    if is_computed[i]:
        return F[i]
    F[i] = f(i - 1) + f(i-2)
    is_computed[i] = True
    return F[i]
```
```
Pseudocode for Fibonacci (Iterative)
---------------------------------------------------------------------------
def f(i):
    F[0] = 0
    F[1] = 1
    for i in 2 .. N:
        F[i] = F[i-1] + F[i-2]
```

### <b>NOTE: The order in which you go in the iterative solution is really important and it is not trivial to choose.</b>

## Factorial
Factorial does NOT need DP, but how can we tell? If you draw a tree of the problem (see below)
```
        F(5)
         |
        F(4)
         |
        F(3)
         |
        F(2)
         |
        F(1)
```
You see that calculations are not reused. Therefore it does not requrie DP.

## Stairs
Question: `You are climbing a staircase. It takes N steps to reach to the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?`

This problem may be phrased in different ways with different potential output types. For example, the question might be `what is the maximum number of steps` or `is it possible to reach the Nth step`. This problem is a restatement of the Fibonacci problem, but with a different function.

```
int stair[i];

stair[i] = stair[i-1] + stair[i-2]; // Here, i is the step on stair case
.
.
.
```

The question might be made more complicated by adding an dimension, for example by adding `In at most k jumps` in additional to the original question provides more depth to the problem. The state is no longer just described as position, but it is also the number of jumps to get to the step.


```
int stair[i][k];

stair[i] = stair[i-1] + stair[i-2]; // Here, i is the step on stair case
.
.
.
```
Now, instead of printing `stair[n]`, we print the sum of `stair[n][j]` from `j = 0` to `j = k`.

## Minimum Path Sum
Question: `Given a grid, find a path from the top-left to the bottom-right corner that minimizes the sum of numbers along the path. You can only move right or down.`

<table>
    <tbody>
    <tr>
        <th>
            3
        </th>
        <th>
            2
        </th>
        <th>
            1
        </th>
        <th>
            3
        </th>
    </tr>
    <tr>
        <th>
            1
        </th>
        <th>
            9
        </th>
        <th>
            2
        </th>
        <th>
            3
        </th>
    </tr>
    <tr>
        <th>
            9
        </th>
        <th>
            1
        </th>
        <th>
            5
        </th>
        <th>
            4
        </th>
    </tr>
    </tbody>
</table>

Using the above example, it is clear that a greedy solution will not work. A good rule of thumb is when a greedy solution won't work then a DP solution will.

Transitions come from the statement.