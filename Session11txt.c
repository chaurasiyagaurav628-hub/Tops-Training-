// Question::1
// Declare an integer variable called likes and a pointer variable called ptrLikes; assign likes a value, point ptrLikes to likes, and print both the value and the address stored in ptrLikes.

// Answer::
#include <stdio.h>

int main()
{
    int likes = 500;

    int *ptrLikes = &likes;

    printf("Likes: %d\n", likes);
    printf("Address stored in ptrLikes: %p\n", (void *)ptrLikes);

    return 0;
}
// Question::2
// Write a function swapPlaylistCounts(int *a, int *b) that swaps the number of songs in two Spotify playlists using pointers, then call the function in main and print the swapped values.

// Answer::
#include <stdio.h>

void swapPlaylistCounts(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int playlist1 = 20;
    int playlist2 = 35;

    printf("Before Swap: %d %d\n", playlist1, playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("After Swap: %d %d\n", playlist1, playlist2);

    return 0;
}

// Question::3
// Given an array of 5 order amounts (e.g., Zomato orders), use a pointer to iterate through the array and print each amount along with its memory address.<br><br><em><strong>Hint:</strong> Use pointer arithmetic to move to the next element.</em>

// Answer::
#include <stdio.h>

int main()
{
    int orders[5] = {200, 350, 150, 400, 250};
    int *ptr;
    int i;

    ptr = orders;

    for (i = 0; i < 5; i++)
    {
        printf("Order Amount: %d\n", *ptr);
        printf("Address: %p\n\n", (void *)ptr);

        ptr++;
    }

    return 0;
}

// Question::4
// Create a function incrementFollowers(int *followers, int n) that increases each follower count in an array (representing Instagram followers for 5 friends) by 100 using pointer arithmetic, then print the updated counts.

// Answer::
#include <stdio.h>

void incrementFollowers(int *followers, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        *followers = *followers + 100;
        followers++;
    }
}

int main()
{
    int followers[5] = {1000, 2000, 3000, 4000, 5000};
    int i;

    incrementFollowers(followers, 5);

    printf("Updated Followers:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", followers[i]);
    }

    return 0;
}

// Question::5
// Draw a simple memory diagram (on paper or using any drawing tool) showing how a pointer references the address of a variable, using the variables from your likes and ptrLikes example; label the variable, pointer, and address.

// Answer::

// likes     → Variable
// 1000      → Address of likes
// ptrLikes  → Pointer