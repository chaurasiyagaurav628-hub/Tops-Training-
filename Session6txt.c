// question ::1
// Write a program that prints the numbers from 10 down to 1 using a for loop, similar to a countdown timer.

// Answer::
#include <stdio.h>

int main()
{
    int i;

    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}

// Question::2
// Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams, 2) Add a new team, 3) Exit. Use a while loop to keep showing the menu until the user chooses Exit.<br><br><em><strong>Hint:</strong> Use input() (or Scanner in Java) to get the user's choice each time.</em>

// Answer::
```c
#include <stdio.h>

int main()
{
    int choice;
    char newTeam[30];

    char team1[] = "Mumbai Indians";
    char team2[] = "Chennai Super Kings";
    char team3[] = "Royal Challengers Bangalore";

    while (1)
    {
        printf("\n--- IPL Menu ---\n");
        printf("1. View Favorite Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nFavorite Teams:\n");
            printf("1. %s\n", team1);
            printf("2. %s\n", team2);
            printf("3. %s\n", team3);
        }
        else if (choice == 2)
        {
            printf("Enter new team name: ");
            scanf(" %[^\n]", newTeam);

            printf("New team added: %s\n", newTeam);
        }
        else if (choice == 3)
        {
            printf("Exiting...");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
```


// Question::3
// Build a 'Guess the Song' game like Spotify — the program randomly picks a song name from a list and asks the user to guess it. Use a do-while loop so the user can keep guessing until they get it right.<br><br><em><strong>Constraint:</strong> Use at least 3 song names of your choice.</em>

// Answer::
#include <stdio.h>
#include <string.h>

int main()
{
    char song[50];
    char correctSong[] = "Kesariya";
       
;

    printf("Guess the Song!\n");
    printf("Hint: It is a popular Hindi song.\n");

    do
    {
        printf("Enter your guess: ");
        scanf(" %[^\n]", song);

        if (strcmp(song, correctSong) == 0)
        {
            printf("Correct! You guessed the song!\n");
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while (strcmp(song, correctSong) != 0);

    return 0;
}

// Question::4

// Explain with your own example the difference between entry-controlled and exit-controlled loops by writing a short code snippet for each (for/while vs do-while) and describing what happens if the loop condition is false at the start.

// Answer::
#include <stdio.h>

int main()
{
    int i = 10;

    while (i < 5)
    {
        printf("%d", i);
        i++;
    }

   

    int j = 10;

do
{
    printf("%d", j);
    j++;

} while (j < 5);

 return 0;

}

