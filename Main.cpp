#include <iostream>
#include <string>

using namespace std; 

class Achievements

{
private: 

	string m_name;
	string m_Description;
	int m_scoreValue = 0;

public: 

	Achievements(){}
	Achievements(string name, string description, int scoreValue)
	{
		m_name = name; 
		m_Description = description;
		m_scoreValue = scoreValue;
    
	} 
	~Achievements(){}
	string getName()
	{
		return m_name;
    }

	string getDescription()

	{
		return m_Description;

	}

	int getscoreValue()
	{
		return m_scoreValue;

	}
    
	void setName(string name)
	{
		m_name = name;

	}

	void setDescription(string description)
	{
		m_Description = description;

	}

	void setscoreValue(int scoreValue)
	{
		m_scoreValue = scoreValue; 

	}

	void displayInfo()
	{



	}

	class Achievement
	{
	private:

		string m_name;
		string m_description;
		int m_scoreValue = 0;

	public:
		Achievement() {}
		Achievement(string name, string description, int scoreValue)
		{
			m_name = name;
			m_description = description;
			m_scoreValue = scoreValue;

		}

		~Achievement() {}

		string getName()
		{
			return m_name;
		}
		string getDescription()
		{
			return m_description;

		}
		int getscoreValue()
		{
			return m_scoreValue;
		}
	};

	void setName(string name)
	{
		m_name = name;

	}

	void setdescription(string description)
	{
		m_Description = description;

	}
	void setscoreValue(int scoreValue)

	{
		m_scoreValue = scoreValue;  

	}

	void displayInfo() 
	
	{

	}

	class Game
	{
	private:

		string m_name;
		string m_publisher;
		string m_developer;
		static const int m_maxAchievements = 100;
		Achievement m_achievements[m_maxAchievements];
		int m_numAchievements = 0;

	public:
		Game(string name, string publisher, string developer)
		{
			m_name = name;
			m_publisher = publisher;
			m_developer = developer;


		}

		~Game(){}
		
		string getName()
		{
			return m_name;
        }
		string getpublisher() 
		{
			return m_publisher;

		}
		string getDeveloper()
		{
			return m_developer; 
		}

		void setName(string name)
		{
			m_name = name; 
		}
		void setpublisher(string publisher)
		{
			m_publisher = publisher;
		}
		void setDeveloper(string developer)
		{
			m_developer = developer; 
		}
	};
	void addAcheivements()
	{

	}
	void display()
	{


	}

	class Platform
	{
	private:
		string m_name; 
		string m_manufacturer;
		static const int m_maxGames = 100;
		Game* m_pGames[m_maxGames];
		int m_numberOfGames = 0;

	public: 

		Platform(){}
		Platform(string name, string manufacturer)
		{ 
			m_name = name;
			m_manufacturer = manufacturer;
			m_numberOfGames = 0; 
		}

		~Platform() {}
		string getName()
		{
			return m_name;
		}
		string getManufacturer()
		{
			return m_manufacturer;
		}

		void setName(string name)
		{
			m_name = name; 
		}
		void setManufacturer(string manufacturer)
		{
			m_manufacturer = manufacturer;

		}

		void addGame() {
			if (m_pGames = m_maxGames)


				if (m_numberOfGames == m_maxGames) {
					cout << "\nThis Platform reached its limit for games " << endl;
					return;
				}
				else {
					string tempName;
					string tempPublisher;
					string tempDeveloper;
					cout << " Game Name: ";
					cin >> tempName;
					cout << " Game Publisher ";
					cin >> tempPublisher;
					cout << " Game Developer ";
					cin >> tempDeveloper;
					Game* temp = new Game(tempName, tempPublisher, tempDeveloper);
					m_numberOfGames++;
					m_pGames[m_numberOfGames] = temp;
					temp = nullptr;


				}


			void displayInfo();
			{
				cout << getName() << endl;
				cout << getManufacturer() << endl;
				displayGames();
			}
			void displayGames()
			{
				for (int i = 0; i < m_numberOfGames; i++)

					cout << "1. " << m_pGames[i]->getName() << endl;)
					cout << "\tPublisher: " << m_pGames[i]->getPublisher() << endl;
				cout << "\tDeveloper: " << m_pGames[i]->getPublisher() << endl; 

			}



		}

	};


	int main()
	{
		const const int maxNumberOfPlatforms = 50;
		Platform* p_platforms[maxNumberOfPlatforms];
		return 0;

	}



}; 
