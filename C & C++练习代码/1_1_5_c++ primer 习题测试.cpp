/*********************************************************************
	@ Title:		c++ primer ϰ�����	

	@ Description:		1���޷������
						
				2���з������

	@ Conclusion:			

	@ Author:		rh_Jameson

	@ Date:			2014/07/30
**********************************************************************/

#include<iostream>
using namespace std;


int main()
{
	//unsigned short usVar = 65537;			//�޷����������������ǵ�ǰ��ģ2��n�η�
	////int iVar = 10000000000;
	//int iVar = 2100000000;					//�з���������Ǹ���
	//cout << iVar << endl;
	//cout << usVar << endl;

	int v = 10;
	int * const cpi = &v;

	//cout <<  *cpi << endl;
	
	const char *cp = "hello";
	int cnt = 0;
	while( cp )
	{
		++cnt;
		++cp;
		cout << cnt << endl;
	}
	
	/*while( *cp )
	{
		++cnt;
		++cp;
	}*/

	return 0;
}