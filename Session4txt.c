// question::1
// .
// Create a simple JavaScript function called calculateTotal that takes two numbers: itemPrice and quantity, and returns the total bill amount using arithmetic operators.

// Answer::
#include <stdio.h>

int main()
{
    float itemPrice = 100.50;
    int quantity = 3;

    float total = itemPrice * quantity;

    printf("Total Bill = %.2f", total);

    return 0;
}

// Question 2 ::
// Build a Flipkart-style discount calculator: given product price, discount percentage, and a boolean isMember, use arithmetic and logical operators to calculate the final price (apply an extra 5% off if isMember is true).

// Answer::

#include <stdio.h>

int main()
{
    float price = 1000;
    float discountPercentage = 10;
    int isMember = 1;

    float discount = price * discountPercentage / 100;
    float finalPrice = price - discount;

    if (isMember == 1)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Final Price = %.2f", finalPrice);

    return 0;
}

// Question::3
// Write a function isEligibleForOffer that takes a user's age and total order value, and returns true if the user is 18 or older AND the order value is above 500, otherwise false.<br><br><em><strong>Hint:</strong> Use relational and logical operators together.</em>

// Answer::/
#include <stdio.h>

int main()
{
    int age = 20;
    float orderValue = 700;

    int eligible = age >= 18 && orderValue > 500;

    printf("Eligible for Offer = %d", eligible);

    return 0;
}


// Question::4
// Given three variables: likes, comments, and shares (all numbers), write code to check if a post is 'trending' on Instagram (at least 1000 likes OR more than 200 comments AND at least 50 shares). Print the result.

// Answer::

#include <stdio.h>

int main()
{
    int likes = 1200;
    int comments = 100;
    int shares = 60;

    int trending = likes >= 1000 || (comments > 200 && shares >= 50);

    printf("Trending = %d", trending);

    return 0;
}

// Question::5
// Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment (count++) by logging the values before and after using both on a followerCount variable.

// Answer::
#include <stdio.h>

int main()
{
    int followerCount = 100;

    printf("Before = %d\n", followerCount);

    printf("Pre-increment = %d\n", ++followerCount);

    printf("After pre-increment = %d\n", followerCount);

    printf("Post-increment = %d\n", followerCount++);

    printf("After post-increment = %d\n", followerCount);

    return 0;
}


