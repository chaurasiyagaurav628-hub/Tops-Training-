// Question::1
// Create a console-based app called Music Listening Logger that allows users to enter the number of minutes they listened to music each day for a week and stores this data in an array.

// Answer::
#include <stdio.h>

int main()
{
    int minutes[7];
    int i;

    printf("Enter music listening minutes for 7 days:\n");

    // Take listening minutes for each day
    for (i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    printf("\nWeekly Listening Data:\n");

    // Display the stored data
    for (i = 0; i < 7; i++)
    {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }

    return 0;
}

// Question::2
// Add a menu-driven interface to your Music Listening Logger so users can choose to log new listening minutes, view their weekly summary, or exit the app.<br><br><em><strong>Hint:</strong> Use a loop to repeatedly show the menu until the user selects exit.</em>

// Answer::
#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int choice;
    int i;

    while (1)
    {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Log new listening minutes
        if (choice == 1)
        {
            for (i = 0; i < 7; i++)
            {
                printf("Day %d: ", i + 1);
                scanf("%d", &minutes[i]);
            }

            printf("Listening data logged successfully.\n");
        }

        // View weekly data
        else if (choice == 2)
        {
            printf("\nWeekly Listening Summary:\n");

            for (i = 0; i < 7; i++)
            {
                printf("Day %d: %d minutes\n", i + 1, minutes[i]);
            }
        }

        // Exit the application
        else if (choice == 3)
        {
            printf("Exiting Music Listening Logger...\n");
            break;
        }

        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Question::3
// Implement file handling in your Music Listening Logger so that when the user logs their daily listening minutes, the data is saved to a file named music_log.txt for persistence.

// Answer::
#include <stdio.h>

int main()
{
    int minutes[7];
    int i;
    FILE *file;

    printf("Enter music listening minutes for 7 days:\n");

    // Take listening minutes from the user
    for (i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    // Open file in write mode
    file = fopen("music_log.txt", "w");

    // Save data into the file
    for (i = 0; i < 7; i++)
    {
        fprintf(file, "%d\n", minutes[i]);
    }

    fclose(file);

    printf("Music data saved to music_log.txt successfully.\n");

    return 0;
}

// Question::4
// Add a feature to your app that reads the saved music_log.txt file and generates a weekly report showing the total, average, and highest listening minutes in the week.

// Answer::
#include <stdio.h>

int main()
{
    FILE *file;
    int minutes[7];
    int i;
    int total = 0;
    int highest = 0;
    float average;

    // Open the file in read mode
    file = fopen("music_log.txt", "r");

    if (file == NULL)
    {
        printf("Music log file not found.\n");
        return 0;
    }

    // Read data from the file
    for (i = 0; i < 7; i++)
    {
        fscanf(file, "%d", &minutes[i]);

        total = total + minutes[i];

        if (minutes[i] > highest)
        {
            highest = minutes[i];
        }
    }

    fclose(file);

    // Calculate average
    average = total / 7.0;

    printf("\n--- Weekly Report ---\n");
    printf("Total Listening Minutes: %d\n", total);
    printf("Average Listening Minutes: %.2f\n", average);
    printf("Highest Listening Minutes: %d\n", highest);

    return 0;
}

// Question::5
// Refactor your Music Listening Logger to allow users to reset their weekly data by clearing the array and deleting the contents of music_log.txt.<br><br><em><strong>Constraint:</strong> Make sure the reset option is available in the menu and asks for confirmation before deleting data.</em>

// Answer::
#include <stdio.h>

int main()
{
    int minutes[7] = {100, 150, 200, 120, 180, 250, 300};
    int i;
    char confirm;
    FILE *file;

    printf("Are you sure you want to reset weekly data? (Y/N): ");
    scanf(" %c", &confirm);

    if (confirm == 'Y' || confirm == 'y')
    {
        // Clear the array
        for (i = 0; i < 7; i++)
        {
            minutes[i] = 0;
        }

        // Open file in write mode to clear its contents
        file = fopen("music_log.txt", "w");

        if (file != NULL)
        {
            fclose(file);
        }

        printf("Weekly data reset successfully.\n");
    }
    else
    {
        printf("Reset cancelled.\n");
    }

    return 0;
}

