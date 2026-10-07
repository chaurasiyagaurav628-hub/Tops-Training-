// Question::1
// Declare a 1D array called dailySteps with 7 elements to store your step count for each day of the week, assign sample values, and print each value using a loop.

// Answer::
#include <stdio.h>

int main()
{
    int dailySteps[7] = {5000, 6200, 7000, 4500, 8000, 6500, 9000};
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}

// Question::2
// Create a 2D array called playlistRatings to store ratings for 3 Spotify playlists over 5 days (rows = playlists, columns = days). Fill it with sample numbers and print the ratings for the second playlist.

// Answer::
#include <stdio.h>

int main()
{
    int playlistRatings[3][5] = {
        {4, 5, 3, 4, 5},
        {5, 4, 5, 3, 4},
        {3, 4, 4, 5, 3}
    };

    int i;

    printf("Ratings of second playlist:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", playlistRatings[1][i]);
    }

    return 0;
}

// Question::3
// Build a function that takes a 1D array of 7 integers representing your daily Zomato order amounts and calculates the average spend for the week.<br><br><em><strong>Hint:</strong> Use a loop to sum the values, then divide by the array length.</em>

// Answer::
#include <stdio.h>

float calculateAverage(int orders[], int size)
{
    int i;
    int sum = 0;

    for (i = 0; i < size; i++)
    {
        sum = sum + orders[i];
    }

    return (float)sum / size;
}

int main()
{
    int orders[7] = {200, 350, 150, 400, 250, 300, 350};

    float average;

    average = calculateAverage(orders, 7);

    printf("Average weekly spend: %.2f\n", average);

    return 0;
}
// Question::4
// Given a 2D array called cricketScores where each row represents an IPL match and columns represent runs scored by each team, write code to print the highest score from each match.

// Answer::
#include <stdio.h>

int main()
{
    int cricketScores[4][2] = {
        {180, 175},
        {150, 165},
        {200, 190},
        {170, 185}
    };

    int i;

    for (i = 0; i < 4; i++)
    {
        if (cricketScores[i][0] > cricketScores[i][1])
        {
            printf("Match %d highest score: %d\n", i + 1, cricketScores[i][0]);
        }
        else
        {
            printf("Match %d highest score: %d\n", i + 1, cricketScores[i][1]);
        }
    }

    return 0;
}
