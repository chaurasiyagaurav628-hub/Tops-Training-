// Question::1
// Create a file called playlist.txt and write the names of your top 3 favorite songs from Spotify into it using write mode (w).

// Answer::
#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "w");

    fprintf(file, "Tum Hi Ho\n");
    fprintf(file, "Kesariya\n");
    fprintf(file, "Perfect\n");

    fclose(file);

    printf("Songs written successfully.");

    return 0;
}

// Question::2
// Open playlist.txt in read mode (r) and display each song name on a separate line in the console.

// Answer::
#include <stdio.h>

int main()
{
    FILE *file;
    char song[100];

    file = fopen("playlist.txt", "r");

    while (fgets(song, 100, file) != NULL)
    {
        printf("%s", song);
    }

    fclose(file);

    return 0;
}

// Question::3
// Add two more song names to playlist.txt without deleting the existing ones by opening the file in append mode (a).

// Answer::
#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "a");

    fprintf(file, "Love Me Like You Do\n");
    fprintf(file, "What Makes You Beautiful\n");

    fclose(file);

    printf("Songs added successfully.");

    return 0;
}

// Question::4
// Write a program that reads all song names from playlist.txt and prints only those that contain the word 'love' (case-insensitive).<br><br><em><strong>Hint:</strong> Use the 'in' keyword or equivalent string method for filtering.</em>

// Answer::
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char song[100];
    char lowerSong[100];
    int i;

    file = fopen("playlist.txt", "r");

    while (fgets(song, 100, file) != NULL)
    {
        for (i = 0; song[i] != '\0'; i++)
        {
            lowerSong[i] = tolower(song[i]);
        }

        lowerSong[i] = '\0';

        if (strstr(lowerSong, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}
