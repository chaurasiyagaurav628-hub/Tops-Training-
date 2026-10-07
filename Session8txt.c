// Question::1
// Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') and returns their initials in uppercase (e.g., 'VK'). Call this function with your favorite cricketer's name and print the result.

// Answer::
#include <stdio.h>

void getUserInitials(char name[])
{
    printf("%c%c", name[0], name[6]);
}

int main()
{
    char name[] = "Virat Kohli";

    printf("Initials: ");
    getUserInitials(name);

    return 0;
}

// Question::2
// Create a function addToCart that takes a shopping cart array and a product name, adds the product to the cart, and prints the updated cart. Demonstrate how passing the cart array by reference allows changes to persist outside the function.<br><br><em><strong>Hint:</strong> In languages like JavaScript, arrays are passed by reference. In C/C++, use pointers for reference behavior.</em>

// Answer::
#include <stdio.h>

void addToCart(char cart[][30], int *count, char product[])
{
    int i;

    for (i = 0; product[i] != '\0'; i++)
    {
        cart[*count][i] = product[i];
    }

    cart[*count][i] = '\0';

    (*count)++;

    printf("\nUpdated Cart:\n");

    for (i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

int main()
{
    char cart[5][30] = {"Laptop", "Mouse"};
    int count = 2;

    addToCart(cart, &count, "Keyboard");

    return 0;
}

// Question::3
// Write two functions: increaseFollowersByValue and increaseFollowersByReference. Each should take a followers count and add 1000 to it, but one should use pass-by-value and the other pass-by-reference. Show how the original followers count changes (or doesn't) after calling each function.

// Answer::
#include <stdio.h>

void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
    printf("Inside Value Function: %d\n", followers);
}

void increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
    printf("Inside Reference Function: %d\n", *followers);
}

int main()
{
    int followers = 5000;

    increaseFollowersByValue(followers);

    printf("After Value Function: %d\n", followers);

    increaseFollowersByReference(&followers);

    printf("After Reference Function: %d\n", followers);

    return 0;
}

// Question::4
// Build a function formatPrice that takes a price in rupees and returns a string formatted like Flipkart's price tag (e.g., '₹1,599'). Use this function to display prices for three different products.

// Answer::
#include <stdio.h>

void formatPrice(int price)
{
    printf("₹%d\n", price);
}

int main()
{
    formatPrice(1599);
    formatPrice(2499);
    formatPrice(999);

    return 0;
}
 
// Question::5
//  Refactor an existing function you wrote above to make it reusable for both product names and usernames (for example, a function that capitalizes the first letter of any string).<br><br><em><strong>Constraint:</strong> The refactored function should work for any string input, not just a specific use case.</em>

//  Answer::
#include <stdio.h>
#include <ctype.h>

void capitalize(char text[])
{
    if (text[0] >= 'a' && text[0] <= 'z')
    {
        text[0] = toupper(text[0]);
    }

    printf("%s\n", text);
}

int main()
{
    char product[] = "laptop";
    char username[] = "gaurav";

    capitalize(product);
    capitalize(username);

    return 0;
}

