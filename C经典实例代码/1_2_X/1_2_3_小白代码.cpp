/*********************************************************************
	@ Title:		С�׵�һ��	

	@ Description:		1�������λ��ʮλ����λ����ת��λ��
						
				2��������ʱ��������������

				3������������

				4��ϰ��ʵ��

	@ Conclusion:			

	@ Author:		rh_Jameson

	@ Date:			2014/08/09
**********************************************************************/

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;


//----------------1�������λ��ʮλ����λ����ת��λ��-----------------//
void reverseNum()
{
	//srand( (int)time(NULL) );
	//int num = rand()%10000;
	int num = 9876;
	cout << num << endl;
	
	//����һ�����Ϊ520�Ļ����÷�������תΪ025
	//cout << (num % 10) << (num / 10) % 10 << (num / 100) % 10 << (num / 1000) << endl;

	//����������ӣ������
	int res = ( num % 10 ) *1000 + (num / 10) % 10 * 100 + (num / 100) % 10 * 10 + (num / 1000);
	cout << res << endl;

}

//---------------------2��������ʱ��������������---------------------//
void swap(int &x, int &y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}

//--------------------------3������������----------------------------//
void triSort(int a, int b, int c)
{
	int tmp = 0;
	if(a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if(b > c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	cout << a << "\t" << b << "\t" << c << endl;
}

//----------------------------4��ϰ��ʵ��----------------------------//
void testExp()
{
	//cout << -111111 * 111111 << endl;

	cout << sqrt( -10.0 ) << endl;
}
//-------------2��ʵ��ÿ���10��Ԫ�أ��ͻ��У������-----------------//


int main()
{
	//reverseNum();

	/*int x =10, y = 20;
	swap(x, y);
	cout << x << endl;
	cout << y << endl;*/
	
	//triSort(90, 29,22);

	testExp();
	return 0;
}