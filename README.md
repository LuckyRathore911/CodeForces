# CodeForces

[Q1 Team](https://codeforces.com/problemset/problem/231/A)

- Count for how many problems, at least 2 participants are sure about the solution and print the result.

[Q2 Domino Piling](https://codeforces.com/problemset/problem/50/A)

- Return the integer value of total area of the rectangular board devided by the area of a single domino to find the number of dominoes fitting in the board.

[Q3 I wanna be the Guy](https://codeforces.com/problemset/problem/469/A)

- Push the levels both players can play in a single dynamic array.
- Compare each level to the above array elements, if matched once, update the counter and continue to compare for the next level.
- If the counter matches the total number of levels, it means that each level has appeared at least once in the players' collective list of playable levels.
- Print the statements accordingly.

[Q4 Sereja and Dima](https://codeforces.com/problemset/problem/381/A)

- Put all cards in an array, and loop through it till the left and the right side of the array point to the same element.
- Initialize a counter with 1. Its odd value means Sereja's turn while even value means Dima's turn.
- For each player's turn, find the larger number between the leftmost and the rightmost elements, add it to the player's points, and update the loop variables accordingly.
- Print the points earned by both the players.

[Q5 Two Arrays and Swaps](https://codeforces.com/problemset/problem/1353/B)

- Sort 'a' in ascending order and 'b' in descending order.
- Replace first k values of 'a' with first k values of 'b' until a's element is lesser than b's corresponding element.
- Find sum of all elements of 'a' and print it.

[Q6 Watermelon](https://codeforces.com/problemset/problem/4/A)

- All even numbers are a sum of two even numbers (or two odd numbers), 2 being the exception. No odd number will be a sum of two even numbers.
- Hence, print "YES" for all even numbers except 2 and "NO" for all other numbers.

[Q7 Next Round](https://codeforces.com/problemset/problem/158/A)

- As all scores are already written in descending order, we have to extract k-th participant's score, which is `array[k-1]`.
- There will be more participants with `array[k-1]` score, therefore, we have to search for all participants in the whole array with score equal to or greater than this and return the count.
- Exceptional case would be where k's score is 0, hence all socres are 0. This would satisfy the above condition. So handle it.

[Q8 Number Replacement](https://codeforces.com/problemset/problem/1744/A)

- Iterate through the array for each element, searching for a condition when at particular indices, the elements are equal but characters in the string at the corresponding indices are not.
- If the condition is met, a counter is incremented.
- At last if the counter is more than 0 then print "NO" otherwise print "YES".

[Q9 Medium Number](https://codeforces.com/problemset/problem/1760/A)

- Implement if-else statements.
- See code for better comprehension.

[Q10 Equal Candies](https://codeforces.com/problemset/problem/1676/B)

- Identify the minimum number of candies present in a box.
- All boxes should have candies equal to this minimum number. Therefore, keep a record of how much candies should be remaining overall (min\*n).
- Now the number of candies required to be eaten by me should be the difference of expected remaining candies and all candies present initially.
