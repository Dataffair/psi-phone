#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Vector of positive messages
    std::vector<std::string> positiveMessages = {
        "You are capable of amazing things!",
        "Every day is a new opportunity to make someone smile.",
        "Believe in yourself and all that you are.",
        "Your positive action combined with positive thinking results in success.",
        "You are making a difference in the world, even if you don't realize it.",
        "Today is a good day for a good day!",
        "The best is yet to come.",
        "You have the power to create change.",
        "Your kindness is a gift to the world.",
        "Keep your face always toward the sunshine—and shadows will fall behind you."
    };

    // Generate a random index to select a random positive message
    int randomIndex = std::rand() % positiveMessages.size();

    // Print the positive message
    std::cout << "Positive Energy: " << positiveMessages[randomIndex] << std::endl;

    return 0;
}
