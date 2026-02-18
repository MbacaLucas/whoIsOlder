#include <iostream>
#include <string>

std::string getnamesFromUser(int num)
{
    std::string name{};
    std::cout << "Enter the name of person #" << num << ": ";
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAgeFromUser(std::string name)
{
    int age{};
    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;

    return age;
}

int main()
{
    const std::string name1{getnamesFromUser(1)};
    const int age1{getAgeFromUser(name1)};
    return 0;
}