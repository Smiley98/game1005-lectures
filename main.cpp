#include <iostream>
#include <string>

struct Warrior
{
	int health;
};

// Removing the & makes warrior a copy, causing the change to not apply outside of the function!!!
void SetHealth(Warrior& warrior, int health)
{
	warrior.health = health;
}

int main()
{
	int warriorHealths[5];
	warriorHealths[0] = 100;
	warriorHealths[1] = 69;
	warriorHealths[2] = 420;
	warriorHealths[3] = 42;
	warriorHealths[4] = -9000;

	Warrior warriors[5];
	for (int i = 0; i < 5; i++)
	{
		SetHealth(warriors[i], warriorHealths[i]);
		printf("Health: %i\n", warriors[i].health);
	}

	std::string warriorNames[]
	{
		"Jay",
		"Matthew",
		"JP",
		"Ruthie the Fallen",
		"Eevee"
	};

	int requiredHealth = 50;
	for (int i = 0; i < 5; i++)
	{
		int warriorNumber = i + 1;
		std::string warriorName = warriorNames[i];
		if (warriorHealths[i] >= requiredHealth)
			std::cout << warriorName << " ready for battle!" << std::endl;
		else
			std::cout << warriorName << " must rest!" << std::endl;
	}
	return 0;
}
