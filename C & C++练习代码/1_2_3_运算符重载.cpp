/*********************************************************************
	@ Title:		���������	

	@ Description:		1���������������

	@ Conclusion:			

	@ Author:		rh_Jameson

	@ Date:			2014/07/21
**********************************************************************/

#include<iostream>
#include<cstdlib>

using namespace std;

class Calculator
{
public:
	//���캯��
    	Calculator() 
	{ 
		value = 0 ; 
	}
	//����3�����������
    	void operator ++ () ;
    	void operator -- () ; 
    	unsigned int operator() () ;
  
private:
    	unsigned int value;
};
 
//������������嶨��
void Calculator::operator ++ ()
{ 
	if ( value < 65535 )
		value ++ ;
	else
    	{ 
		cout << "\nData overflow !" << endl ;
		exit( 0 ) ;
    	}
} 
void Calculator::operator --()
{ 
	if ( value > 0 ) 
		value -- ;
	else
    	{ 
		cout << "\n Data overflow !" << endl ;
		exit( 0 ) ;
    	}
}
unsigned int Calculator::operator() ()
{
	return value ; 
}


int main()
{ 
	Calculator Counter ;
	int i ;
	for( i = 0 ; i < 5 ; i ++ )
    	{	 
		//++ Counter;
		Counter ++;
		cout << "\n Counter = " << Counter() ;
	}
	for( i = 0 ; i <= 5 ; i ++ )
	{ 
		//-- Counter;
        	ounter --;
		cout << "\n Counter = " << Counter() ;
    	}
} 
