C. Kanade's Perfect Multiples
time limit per test2 seconds
memory limit per test256 megabytes

https://codeforces.com/contest/2173/problem/C

We've carved those memories into ourselves... No matter how hard they were, they're the lives we carried out!
— Angel Beats!
In the afterlife school, Kanade studies a peculiar number game.

She gives you two integers n
 and k
, as well as an array a
 consisting of n
 integers, where 1≤ai≤k
 holds.

For an integer set B={b1,b2,…,bm}
 where 1≤bi≤k
, we call it complete if and only if both of the following hold:

For each 1≤i≤n
, at least one divisor of ai
 is contained in B
;
For each 1≤j≤m
, all positive multiples of bj
 which are less than or equal to k
 appear in the array a
 at least once.
You have to find a complete set B
 with minimum possible size, or determine that no such set exists.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains two integers n
 and k
 (1≤n≤2⋅105
, 1≤k≤109
) — the length of a
 and the upper bound of elements of a
.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤k
) — the elements of a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case:

If no complete set B
 exists, print a single integer −1
 in the only line of output.
Otherwise:
First print a single integer m
 (1≤m≤n
) in the first line of output — the size of B
. Note that you have to minimize the size of B
.
Then output m
 integers b1,b2,…,bm
 (1≤bi≤k
) in the second line — the set you constructed.
If there are multiple answers, you may print any of them.

Example
InputCopy
4
4 6
3 2 4 6
5 5
1 2 3 4 5
3 6
2 3 6
1 2
2
OutputCopy
2
2 3 
1
1 
-1
1
2 
Note
In the first test case, B={2,3}
 works. For b=2
, all multiples {2,4,6}
 (up to k=6
) appear in a
; for b=3
, multiples {3,6}
 appear. Every ai
 is divisible by 2
 or 3
. No single b
 can satisfy both conditions, so m=2
 is minimal.

In the second test case, B={1}
 satisfies both rules since every number is divisible by 1
 and all multiples of 1
 up to k
 appear.