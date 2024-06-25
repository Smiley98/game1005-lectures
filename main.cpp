#include <iostream>

class Player1
{
public:
	int health;

	void SetHealth(int heath)
	{
		this->health = heath;
	}
};

struct Player2
{
public:
	int health;
};

void SetHealth(Player2 player, int health)
{
	player.health = health;
}

bool CheckHealth(int health, int requiredHealth)
{
	return health > requiredHealth;
}

int main()
{
	int warriorHealths[5];
	warriorHealths[0] = 100;
	warriorHealths[1] = 69;
	warriorHealths[2] = 420;
	warriorHealths[3] = 42;
	warriorHealths[4] = -9000;

	int requiredHealth = 50;
	for (int i = 0; i < 5; i++)
	{
		if (CheckHealth(warriorHealths[i], requiredHealth))
			std::cout << "Warrior " << i << " ready for battle!" << std::endl;
		else
			std::cout << "Warrior " << i << " must rest!" << std::endl;
	}
	return 0;
}
