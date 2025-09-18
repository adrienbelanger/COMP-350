#include <stdio.h>
/*
(5 points) A calculus student was asked to determine lim𝑛→∞𝑥𝑛
, where 𝑥𝑛=(100𝑛)/𝑛!
. He wrote a program in single precision to evaluate 𝑥𝑛
 by using
𝑥1=100,𝑥𝑛=100𝑥𝑛−1/𝑛,𝑛=2,3,…,70.
The numbers printed became ever larger and finally became ∞
. So the student concluded that lim𝑛→∞𝑥𝑛=∞
. Please write a program in single precision to verify the student's observation. The student's conclusion is actually wrong. What is the problem with his program?

Bonus (2 points): Can you rewrite a C program to evaluate 𝑥𝑛
 so that you can make a right conclusion about lim𝑛→∞𝑥𝑛
 ?
*/
