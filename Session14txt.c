// Question::1
// Given the following buggy code meant to calculate the total price of a Zomato order, identify and fix the syntax and runtime errors:<br><br>let items = ["Burger", "Pizza", "Fries"];<br>let prices = [120, 250, 90];<br>let total = 0;<br>for (i = 0; i < items.length; i++) {<br> total =+ prices[i]<br>}<br>console.log("Total price is: " + total);<br><br><em><strong>Hint:</strong> Watch for assignment and loop variable issues.</em>

// Answer::
#include <stdio.h>

int main()
{
    char items[3][20] = {"Burger", "Pizza", "Fries"};
    int prices[3] = {120, 250, 90};
    int total = 0;
    int i;

    for (i = 0; i < 3; i++)
    {
        total += prices[i];
    }

    printf("Total price is: %d", total);

    return 0;
}

// Question::2
// Rewrite the following code to improve its indentation and add comments explaining each step, so that a beginner can understand what it does:<br><br>function isEven(num){if(num%2==0){return true;}else{return false;}}

// Answer::
#include <stdio.h>

int isEven(int num)
{
    // Check if the number is divisible by 2
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("%d\n", isEven(10));
    printf("%d\n", isEven(7));

    return 0;
}

// Question::3
// Write a function formatFollowersCount(count) that takes a number and returns a formatted string like Instagram: 1500 as '1.5K', 1200000 as '1.2M', and numbers below 1000 as-is. Add clear comments and use proper indentation.

// Answer::
#include <stdio.h>

void formatFollowersCount(int count)
{
    // Print numbers below 1000 as they are
    if (count < 1000)
    {
        printf("%d\n", count);
    }
    // Convert followers into K format
    else if (count < 1000000)
    {
        printf("%.1fK\n", count / 1000.0);
    }
    // Convert followers into M format
    else
    {
        printf("%.1fM\n", count / 1000000.0);
    }
}

int main()
{
    formatFollowersCount(500);
    formatFollowersCount(1500);
    formatFollowersCount(1200000);

    return 0;
}

// Question::4
// You are given a piece of JavaScript code that should print all even numbers from 1 to 10, but it doesn't work as expected:<br><br>for (let i = 1; i <= 10; i++) {<br> if (i % 2 = 0) {<br> console.log(i)<br> }<br>}<br><br>Find and fix the error, then rewrite the code with good indentation and at least one comment explaining the logic.

// Answer::
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        // If remainder is 0, the number is even
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
