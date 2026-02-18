#include <iostream>
#include <string>

/**
 * Prompts the user for a name and handles leading whitespace.
 * param num The index of the person (e.g., 1 or 2).
 * return The name entered by the user.
 */
std::string getnamesFromUser(int num)
{
    std::string name{};
    std::cout << "Enter the name of person #" << num << ": ";
    // std::ws skips any leading whitespace (like the newline from previous inputs)
    std::getline(std::cin >> std::ws, name);

    return name;
}

/**
 * Prompts the user for the age of a specific person.
 * param name The name of the person being queried.
 * return The age entered by the user.
 */
int getAgeFromUser(std::string name)
{
    int age{};
    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;

    return age;
}

/**
 * Compares two ages and prints the result to the console.
 * Uses string_view to avoid unnecessary string copies.
 */

void calculateWhoIsOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
    // Compare ages and output the older person's information
    if (age1 > age2)
        std::cout << name1 << " (age " << age1 << ")" << " is older than " << name2 << " (age " << age2 << ")." << '\n';
    else
        std::cout << name2 << " (age " << age2 << ")" << " is older than " << name1 << " (age " << age1 << ")." << '\n';
}

int main()
{
    const std::string name1{getnamesFromUser(1)};
    const int age1{getAgeFromUser(name1)};

    const std::string name2{(getnamesFromUser(2))};
    const int age2{getAgeFromUser(name2)};

    // Perform comparison and display result
    calculateWhoIsOlder(name1, age1, name2, age2);

    return 0;
}