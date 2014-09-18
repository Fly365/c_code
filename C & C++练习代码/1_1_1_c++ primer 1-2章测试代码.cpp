/*********************************************************************
	@ Title:		c++ primer 1-2�²��Դ���

	@ Description:		1������cerr/clog/cout
						
				2��ֱ�ӳ�ʼ��

				3����������

				4�������ַ������������ǳ����

				5��testFOR ++i

	@ Conclusion:			

	@ Author:		rh_Jameson

	@ Date:			2014/08/02
**********************************************************************/

#include <iostream>
#include <string>
using namespace std;

//---------------------1������cerr/clog/cout-------------------------//
void testCerrClogCout()
{
	cout << "������cout���" << endl;
	cerr << "������cerr���" << endl;
	clog << "������clog���" << endl;

	//�����ʽ
	cout << "helloworld " "helloworld " "osijdfioja" <<endl;
	cout << "hi!" << endl;

	cout << "/*";
	cout << "*/ ";
	//cout << /* "*/" */ ;
	cout <<  /* "*/" */ ";

}

//----------------------2��ֱ�ӳ�ʼ��-------------------------//
void initial()
{
	//��ʼ������һ���Ǹ�ֵ��
	int val(10);
	cout<< val << endl;
}

//-----------------------3����������----------------------------//
void refFunc()
{
	int v = 10, n = 20;
	int &refM =v;
	//int &refN;			//�������ʼ�������򱨴�
	const int &rval = 8 ;

	refM = n;
	cout << refM << endl;
	cout << v <<endl;
	cout << &rval << endl; 
}


//--------------4�������ַ������������ǳ����---------------------//
void testString()
{
	string strA,strB;
	strA ="abc";
	strB = strA;
	strB ="ttt";
	
	cout << strB << endl;
	cout << strA << endl;

	int size;
	cin >>size;
	char* str = ( char* ) malloc ( size * sizeof(char) );
	str = "jjjjjjj";
	cout << str << endl;
}


//------------------5��testFOR ++i----------------------//
void tesStringDeep()
{
	int sum = 0;
	for (int i = 0; i <= 10; ++i)
	{
		sum += i;
	}
	cout << sum << endl;


}


int main()
{
	
	string line,word;
	
	while(getline(cin,line))
	{
		cout << line << endl;
	}
	while (cin >> word)
	{
		cout << word << endl;
	}

	//testCerrClogCout();
	
	return 0;
}