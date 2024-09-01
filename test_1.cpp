#include "quenor.hpp"
using namespace std;
int main()
{
	{
		quenor<string> data;

		string str = "Hello";
		string str2 = "World";
		string str3 = "Mr noRKUM";

		data.push_back(str);
		data.push_back(str2);
		data.push_back(str3);
		
		cout << data[0] << endl;
		cout << data[1] << endl;
		cout << data[2] << endl;

		data.erase(1);

		cout << data[0] << endl;
		cout << data[1] << endl;
	}

	{
		quenor<string&> data;

		string str = "enver";
		string str2 = "ali";
		string str3 = "veli";

		data.push_back(str);
		data.push_back(str2);
		data.push_back(str3);

		cout << data.at(0) << endl;
		cout << data.at(1) << endl;
		cout << data.at(2) << endl;

		data.erase(1);

		cout << data.at(0) << endl;
		cout << data.at(1) << endl;
	}

	{
		quenor<string*> data;

		string str = "enver";
		data.push_back(&str);

		cout << *(data.at(0)) << endl;
		str = "ali";
		cout << *(data.at(0)) << endl;
	}	
}