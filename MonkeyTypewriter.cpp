#include <iostream>
#include <string>

int main()
{
    std::string uSentence;  // user sentence
    std::string mSentence;  // monkey's sentence

    int lower = ' ';    // lower bound for choosing letters
    int upper = '~';    // upper bound for choosing letters

    int golfScore;      // score to grade each attempt; following golf rules
    int bestScore;      // grade of the best attempt so far

    // Get input from the user
    std::cout << "Please enter text to test the monkey: ";
    getline(std::cin, uSentence);

    // Set the seed for the random number
    srand(time(NULL));

    // Set the begining worst possible score
    bestScore = (upper - lower) * uSentence.size();

    while (uSentence != mSentence)
    {
        // Reset the sentence and score for this attempt
        mSentence = "";
        golfScore = 0;

        for (int i = 0; i < uSentence.size(); i++)
        {
            // Append a new random letter to the sentence
            char randGuess = lower + rand() % (upper - lower);
            mSentence += randGuess;

            // Grade each letter
            golfScore += fabs(uSentence[i] - mSentence[i]);
        }

        // Output the monkey's progress
        if (golfScore <= bestScore)
        {
            std::cout << "Progress: " << mSentence << std::endl;
            bestScore = golfScore;
        }
    }

    // Alert the user of success should the monkey type the sentence
    std::cout << "The monkey has passed! They wrote: " << mSentence << std::endl;
    std::cin.get();
}
