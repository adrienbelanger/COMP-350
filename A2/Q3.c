#include <stdio.h>
/*
For any 𝑥0>−1
, the sequence defined recursively by
𝑥𝑛+1=2𝑛+1(1+2−𝑛𝑥𝑛⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯√−1),(𝑛≥0)
converges to ln(𝑥0+1)
.

(a) (4 points) Let 𝑥0=1
. Use the formula to compute 𝑥𝑛−ln(𝑥0+1)
 for 𝑛=1,2,…,60
 in double precision. Explain your results.

(b) (6 points) Improve the formula to avoid the difficulty you encountered in 3(a). Again compute 𝑥𝑛−ln(𝑥0+1)
 for 𝑛=1,2,…,60
 in double precision.

Note: You should make your code efficient, i.e., avoid unnecessary operations.
*/
