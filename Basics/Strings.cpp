#include "Strings.h"
#include <algorithm>

void Strings::basics()
{
	std::string str1 = "spniCollege";
	std::string str2(5,'n');
	cout << str1 << endl;
	cout << str2 << endl;
	std::string str3("apniCollege");
	cout << str3 << endl;
	std::string str4("Apni College");
	cout << str4 << endl;
	std::string str5;
	//cin<<str; cannot take spaces it prints till there is first space- 
	//getline(cin,str); can take spaces

	//concatenate
	cout << str1.append(str2) << endl;
	str5 = str3 + str4;
	cout << str5 << endl;

	cout << str5[2] << endl;
	str5.clear();
	cout << str5 << endl;

	//compare
	cout << str1.compare(str3) << endl;

	//empty - checkes if string is empty
	bool isEmpty = str1.empty();

	//erase
	str1.erase(3, 2);
	cout << str1 << "lege";

	//insert
	str1.insert(2, "Surya");
	cout << str1 << "lege";

	//lenght 
	str1.length();
	str1.size();

	//find
	cout<<str1.find("apna")<<endl;

	//substring
	string str6 = str1.substr(2, 5);

	//convert string to integer

	string str7 = "789";
	int x = std::stoi(str7) + 2;

	cout << x << endl;

	str7 = std::to_string(x);
	cout << str7 << endl;
	
	//sort string
	std::string s1 = "safddfasf";
	sort(s1.begin(), s1.end());
	cout << s1 << endl;
}

void Strings::convertToCapital()
{
	std::string str1 = "adsdfsd";

	//ASCII Values of Upper case (lowe case comes last)
	cout << 'a' - 'A'<<endl; // 32
	
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] >= 'a' && str1[i]<='z') {
			str1[i] -=  32;
		}
	}
	std::cout << str1<<endl;

	//convert to lowercase
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] += 32;
		}
	}
	std::cout << str1 << endl;

	std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
	std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
}

void Strings::makeGreatestNumber()
{
	string str1 = "23452352";
	std::sort(str1.begin(), str1.end(), std::greater<int>());
	std::cout << str1 << endl;
}

void Strings::maxOccuranceOfLetter()
{
	 //make array of size 26
	int array[26] {};
	int a = 'a';
	cout<< int('a') << endl;

	std::string str = "abababsfabbsbabsfsdfdfssger";
	for (int i = 0; i < str.length(); i++) {
		int index = str[i] - 'a';
		array[index]++;
	}
	
	int maxCount = 0;
	int maxIndex = -1;
	for (int i = 0; i < 26; i++) {
		if (array[i] > maxCount) {
			maxCount = array[i];
			maxIndex = i;
		}

	}
	char value = 'a' + maxIndex;
	cout << value <<" of count "<< maxCount << endl;
}
