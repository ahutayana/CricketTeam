#include "CricketTeam.h"
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
	CricketTeam rajasthanRoyals;
	rajasthanRoyals.addCricketer("Sanju", "Samson", 11);
	rajasthanRoyals.addCricketer("Jos", "Buttler", 63);
	rajasthanRoyals.addCricketer("Yashavi", "Jaiswal", 19);
	rajasthanRoyals.addCricketer("Shimron", "Hetmeyer", 189);
	rajasthanRoyals.addCricketer("Trent", "Boult", 18);
	rajasthanRoyals.addCricketer("Ravichandran", "Ashwin", 99);
	rajasthanRoyals.addCricketer("Yuzvendra", "Chahal", 3);
	for (int n = 0; n < rajasthanRoyals.cricketerCount(); n++)
	{
		string first;
		string last;
		int val;
		rajasthanRoyals.checkTeamForCricketer(n, first, last,
			val);
		cout << first << " " << last << " " << val << endl;
	}
}





//#include "CricketTeam.h"
//#include <type_traits>
//
//#define CHECKTYPE(f, t) { auto p = (t)(f); (void)p; }
//static_assert(std::is_default_constructible<CricketTeam>::value,
//	"Map must be default-constructible.");
//
//static_assert(std::is_copy_constructible<CricketTeam>::value,
//	"Map must be copy-constructible.");
//void ThisFunctionWillNeverBeCalled() {
//	CHECKTYPE(&CricketTeam::operator=, CricketTeam &
//		(CricketTeam::*)(const CricketTeam&));
//	CHECKTYPE(&CricketTeam::noTeam, bool
//	(CricketTeam::*)() const);
//	CHECKTYPE(&CricketTeam::cricketerCount, int
//	(CricketTeam::*)() const);
//	CHECKTYPE(&CricketTeam::addCricketer, bool (CricketTeam::*)
//		(const std::string&, const std::string&, const
//			CricketType&));
//	CHECKTYPE(&CricketTeam::substituteCricketer, bool
//	(CricketTeam::*)(const std::string&, const std::string&,
//		const CricketType&));
//	CHECKTYPE(&CricketTeam::addOrSubstitute, bool
//	(CricketTeam::*)(const std::string&, const std::string&,
//		const CricketType&));
//	CHECKTYPE(&CricketTeam::releaseCricketer, bool
//	(CricketTeam::*)
//		(const std::string&, const std::string&));
//	CHECKTYPE(&CricketTeam::rosteredOnCricketTeam, bool
//	(CricketTeam::*)(const std::string&, const std::string&)
//		const);
//	CHECKTYPE(&CricketTeam::searchForCricketer, bool
//	(CricketTeam::*)
//		(const std::string&, const std::string&, CricketType&)
//		const);
//	CHECKTYPE(&CricketTeam::checkTeamForCricketer, bool
//	(CricketTeam::*)
//		(int, std::string&, std::string&, CricketType&)
//		const);
//	CHECKTYPE(&CricketTeam::tradeCricketTeams, void
//	(CricketTeam::*)(CricketTeam&));
//
//	CHECKTYPE(mergeCricketers, bool (*)(const CricketTeam&,
//		const
//		CricketTeam&, CricketTeam&));
//	CHECKTYPE(checkCricketers, void (*)(const std::string&,
//		const std::string&, const CricketTeam&, CricketTeam&));
//}
//int main() {}











//#include "CricketTeam.h"
//#include <string>
//#include <iostream>
//#include <cassert>
//using namespace std;
//void test() {
//	CricketTeam pakistanCricket;
//
//	assert(pakistanCricket.addCricketer("Mohammad", "Rizwan",
//		"mohammadr@pakistancricket.com"));
//	assert(pakistanCricket.addCricketer("Babar", "Azam",
//		"babara@pakistancricket.com"));
//	assert(pakistanCricket.cricketerCount() == 2);
//	string first, last, e;
//	assert(pakistanCricket.checkTeamForCricketer(0, first, last,
//		e) && e == "babara@pakistancricket.com");
//	assert(pakistanCricket.checkTeamForCricketer(1, first, last,
//		e) && (first == "Mohammad" && e ==
//			"mohammadr@pakistancricket.com"));
//	return;
//}
//int main() {
//	test();
//	cout << "Passed all tests" << endl;
//	return 0;
//}








//#include "CricketTeam.h"
//#include <string>
//#include <iostream>
//#include <cassert>
//using namespace std;
//void test() {
//	CricketTeam englandCricket;
//	assert(englandCricket.addCricketer("Joe", "Root", 66));
//	assert(englandCricket.addCricketer("Sam", "Curran", 58));
//	assert(englandCricket.cricketerCount() == 2);
//	string first, last;
//	int jn;
//	assert(englandCricket.checkTeamForCricketer(0, first, last,
//		jn) && jn == 58);
//	assert(englandCricket.checkTeamForCricketer(1, first, last,
//		jn) && (first == "Joe" && jn == 66));
//	return;
//}
//int main() {
//	test();
//	cout << "Passed all tests" << endl;
//	return 0;
//}