#ifndef CRICKETTEAM_H
#define CRICKETTEAM_H
#include <string>
typedef std::int CricketType; // This can change to other types such
// as double and int, not just string

struct Node
{
	CricketType m_value;
	Node* next;
	Node* prev;
	std::string m_firstName;
	std::string m_lastName;
};
class CricketTeam
{
private:
	int listSize;
	Node* head;
	Node* tail;
	
public:
	CricketTeam();

	CricketTeam(const CricketTeam& other);

	~CricketTeam();

	const CricketTeam& operator=(const CricketTeam& rhs);

	bool noTeam() const; 

	int cricketerCount() const; 

	bool addCricketer(const std::string& firstName, const std::string&
		lastName, const CricketType& value);
	

	bool substituteCricketer(const std::string& firstName, const
		std::string& lastName, const CricketType& value);
	

	bool addOrSubstitute(const std::string& firstName, const
		std::string& lastName, const CricketType& value);
	

	bool releaseCricketer(const std::string& firstName, const
		std::string& lastName);
	

	bool rosteredOnCricketTeam(const std::string& firstName, const
		std::string& lastName) const;
	

	bool searchForCricketer(const std::string& firstName, const
		std::string& lastName, CricketType& value) const;
	

	bool checkTeamForCricketer(int i, std::string& firstName,
		std::string& lastName, CricketType& value) const;
	

	void tradeCricketTeams(CricketTeam& other);
	
};
bool mergeCricketers(const CricketTeam& odOne, const CricketTeam& odTwo, CricketTeam& odJoined);

void checkCricketers(const std::string& fsearch, const std::string& lsearch, const CricketTeam& odOne, CricketTeam& odResult);
#endif