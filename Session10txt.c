// Question::1
// Declare a string variable called songTitle and assign it the value 'Tum Hi Ho'. Print the length of the string using strlen().

// Answer::
#include <stdio.h>
#include <string.h>

int main()
{
    char songTitle[] = "Tum Hi Ho";

    printf("Length: %d", strlen(songTitle));

    return 0;
}

// Question::2
// Take input for two usernames (as strings) and compare them using strcmp(). Display whether they are the same or different.

// Answer::
#include <stdio.h>
#include <string.h>

int main()
{
    char username1[30];
    char username2[30];

    printf("Enter first username: ");
    scanf("%s", username1);

    printf("Enter second username: ");
    scanf("%s", username2);

    if (strcmp(username1, username2) == 0)
    {
        printf("Both usernames are same");
    }
    else
    {
        printf("Usernames are different");
    }

    return 0;
}

// Question::3
// Copy the string 'Flipkart' into another string variable called shoppingApp using strcpy(), then print the value of shoppingApp.<br><br><em><strong>Hint:</strong> Make sure to declare enough space for the destination string.</em>

// Answer::
#include <stdio.h>
#include <string.h>

int main()
{
    char shoppingApp[20];

    strcpy(shoppingApp, "Flipkart");

    printf("Shopping App: %s", shoppingApp);

    return 0;
}

// Question::4
// Build a small script that takes the user's full name as input and creates a username by copying only the first 5 characters using strcpy(). Print the generated username.<br><br><em><strong>Constraint:</strong> If the name is shorter than 5 characters, use the full name as the username.</em>

// Answer::
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char username[6];
    int i;

    printf("Enter your full name: ");
    scanf(" %[^\n]", name);

    if (strlen(name) <= 5)
    {
        strcpy(username, name);
    }
    else
    {
        for (i = 0; i < 5; i++)
        {
            username[i] = name[i];
        }

        username[5] = '\0';
    }

    printf("Username: %s", username);

    return 0;
}