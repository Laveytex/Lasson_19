#include <iostream>

class Animal
{
public:
	Animal() {}

	virtual void AnimalSong()
	{
		std::cout << "FirstSong" << '\n';
	}


private:
};

class Dog : public Animal
{
public:
	void AnimalSong() override
	{
		std::cout << "Woof" << '\n';
	}
	
private:
};

class Cat : public Animal
{
public:
	void AnimalSong() override
	{
		std::cout << "Mow" << '\n';
	}

private:
};

class Cow : public Animal
{
public:
	void AnimalSong() override
	{
		std::cout << "Mu" << '\n';
	}

private:
};

int main()
{
	int Size = 3;
	Animal* pDog = new Dog();
	Animal* pCat = new Cat();
	Animal* pCow = new Cow();

	Animal* AnimalArray[3]{pDog,pCat, pCow};

	for (int i = 0; i < Size; i++)
	{
		AnimalArray[i]->AnimalSong();
	}
}
