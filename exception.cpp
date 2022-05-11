#include "exception.h"

bool GC::FiveStack_String_handling_accountPlus (long long &ref)
{
	//cout<<"FiveStack_String_handling_accountPlus"<<endl;
	int stack = 0;
	string cheak;
	while(true)
	{
		if(stack > 5)
			exit(0);
		cin >> cheak;
		std::stringstream ssInt(cheak);
		ssInt >> ref;
		if (ref == -1)
			return true;
		if (ref < 0)
		{
			stack++;
			if(stack > 5)
				exit(0);
			cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =\n";
			cout << "(" << stack << ") 5번 이상 틀릴 시 시스템 초기화!" << endl;
			cout << "[정수값이 아닐 시 오류!] 다시 입력 해 주세요." << endl;
			cout << "goBack (-1)" << endl;
			cout << endl;
			cout << "계좌번호 입력 : ";
			continue;
		}
		string num1 = to_string((long long)ref);
		if (num1.length() < 8 || num1.length() > 12 )
		{
			stack++;
			if(stack > 5)
				exit(0);
			cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =\n";
			cout << "(" << stack << ") 5번 이상 틀릴 시 시스템 초기화!" << endl;
			cout << "[8이상 12이하의 자리수이 아닐 시 오류!] 다시 입력 해 주세요." << endl;
			cout << "goBack (-1)" << endl;
			cout << endl;
			cout << "계좌번호 입력 : ";
			continue;
		}
		break;
	}
	return false;
}

bool GC::String_handling_general_longlong(long long &ref)
{
	//cout<<"String_handling_general_longlong"<<endl;
	string cheak;

	while(true)
	{
		cin >> cheak;
		std::stringstream ssInt(cheak);
		ssInt >> ref;
		if (ref == -1)
			return true;
		if (ref < 0 || cheak.length() != to_string(ref).length())
		{
			cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =\n";
			cout << "[정수값이 아닐 시 오류!] 다시 입력 해 주세요." << endl;
			cout << "매뉴로 돌아가려면 -1을 입력해 주세요" << endl;
			//cout << "goBack (-1)" << endl;
			cout << endl;
			cout << " @'_'@? : ";

			continue;
		}
		break;
	}
	return false;
}

bool GC::String_handling_general_int(int &ref)
{
	ref = -2;
	//cout<<"String_handling_general_int"<<endl;
	string cheak;
	while(true)
	{
		cin >> cheak;
		std::stringstream ssInt(cheak);
		ssInt >> ref;
		if (ref == -1)
			return true;
		if (ref < 0 || cheak.length() != to_string((long long)ref).length())
		{
			cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =\n";
			cout << "[정수값이 아닐 시 오류!] 다시 입력 해 주세요." << endl;
			cout << "매뉴로 돌아가려면 -1을 입력해 주세요" << endl;
			//cout << "goBack (-1)" << endl;
			cout << endl;
			cout << " @'_'@? : ";
			continue;
		}
		break;
	}
	return false;
}
