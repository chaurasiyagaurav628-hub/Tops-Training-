// Question :: 1
// Create a simple IPL Fan Bot that takes your favorite IPL team name as input and uses if-else-if statements to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!'). If the team is not recognized, print 'Team not found!'

// Answer::
#include <stdio.h>
#include <string.h>

int main()
{
    char team[30];

    printf("Enter your favorite IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "Mumbai") == 0)
    {
        printf("Go Mumbai Indians!");
    }
    else if (strcmp(team, "Chennai") == 0)
    {
        printf("Chennai Super Kings for the win!");
    }
    else if (strcmp(team, "Kolkata") == 0)
    {
        printf("Come on Kolkata Knight Riders!");
    }
    else if (strcmp(team, "Bangalore") == 0)
    {
        printf("Go Royal Challengers Bangalore!");
    }
    else
    {
        printf("Team not found!");
    }

    return 0;
}

// Question :: 2

// Build a Zomato-style food suggestion tool: take the user's preferred meal time ('breakfast', 'lunch', 'dinner', or 'snack') and use a switch-case statement to suggest a popular dish for that time. If the input doesn't match any meal, suggest 'Try some fruits!'.

// Answer::
#include <stdio.h>
#include <string.h>

int main()
{
    char meal[20];

    printf("Enter meal time: ");
    scanf("%s", meal);

    if (strcmp(meal, "breakfast") == 0)
    {
        printf("Try some Poha!");
    }
    else if (strcmp(meal, "lunch") == 0)
    {
        printf("Try some Biryani!");
    }
    else if (strcmp(meal, "dinner") == 0)
    {
        printf("Try some Paneer!");
    }
    else if (strcmp(meal, "snack") == 0)
    {
        printf("Try some Samosa!");
    }
    else
    {
        printf("Try some fruits!");
    }

    return 0;
}

// Question::3
// Create a Flipkart discount calculator that asks the user for the total cart amount. Use nested if statements to check: if amount > 2000, apply 20% discount; else if amount > 1000, apply 10% discount; else, no discount. Print the final amount to pay.<br><br><em><strong>Hint:</strong> Use nested ifs to check each discount slab.</em>

// Answer::

#include <stdio.h>

int main()
{
    float amount;
    float discount;
    float finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount > 2000)
    {
        discount = amount * 20 / 100;
        finalAmount = amount - discount;
    }
    else
    {
        if (amount > 1000)
        {
            discount = amount * 10 / 100;
            finalAmount = amount - discount;
        }
        else
        {
            discount = 0;
            finalAmount = amount;
        }
    }

    printf("Final Amount = %.2f", finalAmount);

    return 0;
}

// Question::4
// Write a program that takes a user's age and checks eligibility for three things using if-else statements: if age >= 18, print 'Eligible for Driving License'; if age >= 21, also print 'Eligible for Credit Card'; if age >= 25, also print 'Eligible for Car Rental'. Print all applicable messages for the given age.

// Answer::
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Eligible for Driving License\n");
    }

    if (age >= 21)
    {
        printf("Eligible for Credit Card\n");
    }

    if (age >= 25)
    {
        printf("Eligible for Car Rental\n");
    }

    return 0;
}

