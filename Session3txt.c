
// Question:1
// Declare variables for a Flipkart product: productName (as a string), price (float), and rating (double). Assign sample values and print each variable with its data type.

// Answer::

#include <stdio.h>

int main()
{
    char productName[] = "Mobile";
    float price = 15999.50;
    double rating = 4.5;

    printf("Product Name: %s (String)\n", productName);
    printf("Price: %.2f (Float)\n", price);
    printf("Rating: %.1f (Double)\n", rating);

    return 0;
}


// Question : 2

// Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the final price of a Zomato order with a given base price.<br><br><em><strong>Constraint:</strong> The GST rate must not be changeable after its initial assignment.</em>

// Answer ::

#include <stdio.h>

int main()
{
    const float GST_RATE = 18.0;
    float basePrice = 500.0;
    float gst = basePrice * GST_RATE / 100;
    float finalPrice = basePrice + gst;

    printf("Base Price: %.2f\n", basePrice);
    printf("GST: %.2f\n", gst);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}

// Question :3
// Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), and average song duration in minutes (float). Print all values in a single formatted sentence.

// Answer::
#include <stdio.h>

int main()
{
    char playlistName[] = "My Favorites";
    int totalSongs = 25;
    float averageDuration = 3.5;

    printf("My playlist \"%s\" has %d songs with an average duration of %.1f minutes.",
           playlistName, totalSongs, averageDuration);

    return 0;
}

// Question:: 4
// Identify and correct the invalid variable names from this list: 1stPlayer, player_age, $score, total-marks, userName.<br><br><em><strong>Hint:</strong> Apply standard variable naming rules for your programming language.</em>

// Answer:

// C language me variable ka naam rakhne ke kuch rules hote hain:

// Variable name number se start nahi ho sakta.
// Variable name me letters, numbers aur underscore _ use kar sakte hain.
// Space aur special characters jaise $, - allowed nahi hote.
// Variable name C ke keywords jaise int, float, return nahi ho sakta.
// Variable name case-sensitive hota hai. userName aur username alag hain.


// example: 1. 1stPlayer → Invalid → firstPlayer
// 2. player_age → Valid
// 3. $score → Invalid → score
// 4. total-marks → Invalid → total_marks
// 5. userName → Valid


