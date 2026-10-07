// Question::1
// Declare a structure named Playlist to store details of a song: title (string), artist (string), and duration in seconds (integer). Initialize one Playlist variable with your favorite song's details and print each field.

// Answer::
#include <stdio.h>

struct Playlist
{
    char title[50];
    char artist[50];
    int duration;
};

int main()
{
    struct Playlist song = {"Tum Hi Ho", "Arijit Singh", 262};

    printf("Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.duration);

    return 0;
}
// Question::2
// Create a structure called FoodItem to store Zomato-style menu data: itemName (string), price (float), and rating (float). Initialize an array of 3 FoodItem variables with real menu items and display their details using a loop.

// Answer::
#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem items[3] = {
        {"Pizza", 299.00, 4.5},
        {"Burger", 199.00, 4.2},
        {"Biryani", 249.00, 4.6}
    };

    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Item: %s\n", items[i].itemName);
        printf("Price: %.2f\n", items[i].price);
        printf("Rating: %.1f\n\n", items[i].rating);
    }

    return 0;
}

// Question::3
// Define a nested structure called MovieShow for a BookMyShow-style app: Movie (string), Screen (integer), and a nested structure Time with hours and minutes (integers). Create and initialize a MovieShow variable for any movie and print its details in the format 'Movie: X, Screen: Y, Time: HH:MM'.

// Answer::

#include <stdio.h>

struct MovieShow
{
    char movie[50];
    int screen;

    struct Time
    {
        int hours;
        int minutes;
    } time;
};

int main()
{
    struct MovieShow show = {"Dangal", 3, {18, 30}};

    printf("Movie: %s, Screen: %d, Time: %02d:%02d",
           show.movie,
           show.screen,
           show.time.hours,
           show.time.minutes);

    return 0;
}

// Question::4
// Build a structure called InstaProfile with fields: username (string), followers (integer), and a nested structure Bio with fields: description (string) and age (integer). Initialize an InstaProfile variable with your own details and display all fields.

// Answer::
#include <stdio.h>

struct InstaProfile
{
    char username[50];
    int followers;

    struct Bio
    {
        char description[100];
        int age;
    } bio;
};

int main()
{
    struct InstaProfile profile = {
        "gaurav",
        5000,
        {"Software Developer", 21}
    };

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Description: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    return 0;
}
