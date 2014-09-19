/*********************************************************************
	@ Title:		����ָ��	

	@ Description:		1�����ú���ָ�룬ʵ�������������Сֵ

				2��ʵ�ֻص�����

	@ Conclusion:		1������ָ�붨�壺	int ( * pf )(int x,int y);	
				   ��ֵ��ʼ����		pf = printMin;
				   ����ָ��ָ������	pf(x,y)

				2���ص�������ͨ�����ݺ���ָ��ʵ��

	@ Author:		rh_Jameson

	@ Date:			2014/07/24
**********************************************************************/
#include<iostream>

using namespace std;



//-------------1�����ú���ָ�룬ʵ�������������Сֵ------------------//

//ʵ�ֱȽϣ�������Сֵ
int printMin(int cmpM,int cmpN)
{
	return cmpM < cmpN ? cmpM : cmpN;
}
//ʵ�ֵ��ú���ָ��
void ptrToFunc()
{
	int x,y;
	
	//���庯��ָ��
	int ( * pf )(int x,int y);	
	
	//���Ƴ�ʼ��
	pf = printMin;
	
	cout << "��������Ƚ���x��y��";
	cin >> x >> y;

	cout << "x��y�н�С����ֵ�ǣ�" << pf(x,y) <<endl;		//pf(x,y)  ����pfָ��ĺ���
}




//-------------------------2��ʵ�ֻص�����---------------------------//

void printWelcome(int len)
{    
	cout << "��ӭ���� --" << len << endl;
}
 
void printGoodbye(int len)
{    
	cout << "лл�ݹ� --" << len << endl;
}

//ͨ������ָ����е��� 
void callback(int times, void (* print)(int))
{
    int i;
    for (i = 0; i < times; ++i)
    {
		cout<<i;
        print(i);			 
    }       
	cout << endl << "�Ҳ�֪������ӭ�ͻ����Ϳͣ�" << endl << endl;
}



int main()
{
	//ptrToFunc();
	
	//���ûص�����
	callback(10,printWelcome);
	callback(10,printGoodbye);

	return 0;
}
