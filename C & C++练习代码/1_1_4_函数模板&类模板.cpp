/*********************************************************************
	@ Title:		����ģ�塢��ģ��	

	@ Description:		1��ʵ�ֺ���ģ��
						
				2��ʵ����ģ��


	@ Conclusion:			

	@ Author:		rh_Jameson

	@ Date:			2014/08/22
**********************************************************************/

#include<iostream>
using namespace std;


//----------------------------1��ʵ�ֺ���ģ��------------------------//
template <typename T>
T Max(T x, T y)
{
	return x > y ? x : y;
}


//----------------------------2��ʵ����ģ��--------------------------//
template <class S>
class Compare
{
public:
	Compare(S x, S y)
	{
		xx = x;
		yy = y;
	}
	S Min()
	{
		return xx < yy ? xx : yy;
	}

	S Max()
	{
		return xx > yy ? xx : yy;
	}

private:
	S xx, yy;
};

//-------------2��ʵ��ÿ���10��Ԫ�أ��ͻ��У������-----------------//
//-------------2��ʵ��ÿ���10��Ԫ�أ��ͻ��У������-----------------//
//-------------2��ʵ��ÿ���10��Ԫ�أ��ͻ��У������-----------------//


int main()
{
	//int res = Max(111.2, 22.0);
	//cout << res << endl;
	
	Compare<int> c(11, 33);
	//Compare<int> c;					//������Ĭ�Ϲ��캯��
	 
	int res = c.Min();
	cout << res << endl;
	
	return 0;
}