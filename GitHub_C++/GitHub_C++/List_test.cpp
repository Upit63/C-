#include <iostream>
#include <list>

using namespace std;


class GameObject
{
public:
	std::string name;
	int id;
public:
	GameObject(const int& id = 0, std::string name = "") : name(name), id(id)
	{
		//std::cout << " ID : " << id << "»ý¼ºÀÚ" << std::endl;
	}
	~GameObject()
	{

	}

	GameObject(const GameObject& other)
	{
		id = other.id;
		name = other.name;
		//std::cout << " ID : "<< id <<"&" << std::endl;
	}
	GameObject(const GameObject&& other)
	{
		id = other.id;
		name = other.name;
		//std::cout << " ID : " << id << "&&" << std::endl;
	}

	/*
	bool operator >(const GameObject& other) const
	{
	if (id > other.id) return true;
	return false;
	}
	bool operator ==(const GameObject& other)
	{
	//std::cout << "operator ==(const GameObject& other)" << std::endl;
	if (id == other.id)return true;
	return false;
	}
	bool operator ==(const GameObject&& other)
	{
	//std::cout << "operator ==(const GameObject&& other)" << std::endl;
	if (id == other.id)return true;
	return false;
	}
	bool operator !=(const GameObject& other)
	{
	if (id != other.id)return true;
	return false;
	}
	*/

};



int main()
{

	std::list<GameObject> l;

	for (int i = 0; i < 10; ++i)
	{
		l.push_back(i);
	}

	l.remove_if
	(
		[](const GameObject& GO)->bool
	{
		if (GO.id == 5)
		{
			return true;
		}

		else
			return false;
	}
	);

	for (const auto& a : l)
	{
		std::cout << a.id << endl;
	}


	return 0;
}