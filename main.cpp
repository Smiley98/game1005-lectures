#include <iostream>
#include <array>
#include <string>

struct Person
{
	std::string name;
	int age;
};

void CreatePeople(std::array<Person, 3>& people)
{
	for (int i = 0; i < people.size(); i++)
	{
		// TODO -- assign each person a name and age
		people[i].age = 26;
		people[i].name = "Connor";
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

int main()
{
	std::array<Person, 3> people;
	CreatePeople(people);
	PrintPeople(people);
	return 0;
}