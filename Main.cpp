#include <iostream>
#include <string> 
using namespace std;

class Platform
{


private:



	string m_name;
	string m_manufacturer;
	static const int m_maxGames = 100;
	Game* m_pGames[m_maxGames];
	int m_numberOfGames = 0;

public:
	Platform()

	{



	};





	void DisplayInfo()
	
{





}
	void DisplayMenu()
	{



	};

	void DisplayGames()
{
		for (int i = 0; i < m_numberOfGames; i++)
	{

		

	}


}

};

class Game
{

private: 

	string m_name;
	string m_publisher;
	string m_developer;
	static const int m_maxAchievements = 100;
	Achievements m_Achievements[m_maxAchievements];
	int m_numAchievements = 0;


public: 

	void addAchievement()
	{
		if (m_numAchievements == m_maxAchievements)
		{
			cout << " Number of Achievements is full " << endl;

			return;
        }

		else
		{
         
			string TempName;
			string TempDescription;
		    int    TempScoreValue;
         
			cout << " Get Title " << endl; 
			cin  >> TempName; 

			cout << " Get Description " << endl; 
			cin >> TempDescription;

			cout << " Get Score Value of Achievements " << endl; 
			cin >> TempScoreValue; 





        }
		 

		
		{
			Achievements temp;
			temp.setName(TempName);
			temp.setDescription(TempDescription);
			temp.setScoreValue(TempScoreValue);
			m_numAchievements++;
			m_Achievements[m_numAchievements] = temp;
		}



	}


};

class Achievements

{
private:

	string m_title;
	string m_Description;
	int    m_Scorevalue;


public: 
	Achievements() {}
	Achievements(string title, string description, int ScoreValue)
	{
		m_title = title;
		m_Description = description;
		m_Scorevalue = ScoreValue; 
	
	}










void display()
{


}


};



int main()

{
	const int maxNumberofPlatforms = 50;
	Platform* p_pPlatforms[maxNumberofPlatforms];

	return 0; 


}
