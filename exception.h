/**
예외처리를(계좌번호 입력시 숫자가 아닌 문자 입력등) 위한 함수 목록
try catch가 아닌 if와 반복문을 사용하여 만들었다.
담당 최수안
*/
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

namespace GC
{
	long long FiveStack_String_handling();
	bool FiveStack_String_handling_accountPlus(long long &ref);//계좌 생성시
	bool String_handling_general_longlong(long long &ref);//조회, 입/출금, 조회
	bool String_handling_general_int(int &ref);//입/출금액
}
