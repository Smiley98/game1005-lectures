#include <iostream>
#include <array>
#include <string>

struct Person
{
	std::string name;
	int age;
};

void CreatePeople(std::array<Person, 3> people)
{
	for (int i = 0; i < people.size(); i++)
	{
		// TODO -- assign each person a name and age
	}
}

void PrintPeople(std::array<Person, 3> people)
{
	for (int i = 0; i < people.size(); i++)
	{
		std::cout << people[i].name << std::endl;
		std::cout << people[i].age << std::endl;
	}
}

// TODO -- create this function with a native array. Does it produce the same result?

int main()
{
	std::array<Person, 3> people;
	CreatePeople(people);
	PrintPeople(people);
	return 0;
}