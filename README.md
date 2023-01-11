# My-Subscription
We want to build an intelligent system that can calculate the weekly subscription expenses of
essential items for a household. For the sake of this assignment, we will go with the weekly
newspaper subscription. Following table demonstrate prices of some of the prominent
newspapers on a daily basis, all prices in Indian rupees.

         Monday Tuesday Wednesday Thursday Friday Saturday Sunday
TOI       3     3           3       3       3       5       6
Hindu     2.5   2.5         2.5     2.5     2.5     4       4
ET        4     4           4       4       4       4       10
BM        1.5   1.5         1.5     1.5     1.5     1.5     1.5
HT        2     2           2       2        2       4      4

The input to the program should be the weekly budget/amount that the user has allocated to his
subscriptions. The output must be all possible combinations of the newspaper subscriptions for
the user budget.

Example input/output combination:
Input
40 
35 

 Output
 {“TOI”, “BM”}, {“BM”, “HT”}, {“Hindu”, “BM”}, {“Hindu”, “HT”}
 {“BM”, “HT”}, {“Hindu”, “BM”}


