//@description:		3���ó�ʼʽ�����ݳ�Ա��ֵ

#include <iostream>
#include "Date.h"

using namespace std;


/*
Date:: Date(int y, int m, int d)	// ���������캯��
 { year = y ;    month = m ;    day = d ;
   cout <<year <<"/"<<month<<"/"<<day<<": Date with argument object initialized."<<"\n" ;
 }
 */
Date:: Date(int y, int m, int d):year(y),month(m),day(d)	// ���������캯��, �ó�ʼʽ�����ݳ�Ա��ֵ

 { 
   cout <<year <<"/"<<month<<"/"<<day<<": Date with argument object initialized."<<"\n" ;
 }

// �޲ι��캯��
Date:: Date() 
{ 
	cout << "Date object initialized.\n" ; 
}

// ��������	
Date:: ~Date() 
{ 
	cout << "Date object destroyed.\n" ; 
}

void Date:: SetDate( int y, int m, int d ) 
{ 
	year = y ; 
	month = m ;  
	day = d ; 
}

int Date::IsLeapYear() 
{ 
	return ( year%4==0 && year%100!=0 ) || ( year%400==0 ) ; 
}

void Date::PrintDate()  
{ 
	cout << year << "/" << month << "/" << day << endl ; 
}
