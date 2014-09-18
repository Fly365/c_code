/***********************************************************************************
	@ Title:		��̬��Ա&����&��

	@ Description:		1��������ľ�̬��Ա����̬����
				2�������Ƿ���ھ�̬��

	@ Conclusion��		1������������̬������һ��Ҫ�������ʼ���������򱨴�
				��Ҳ�����������г�ʼ��)
						
				2���ھ�̬���������÷Ǿ�̬�����Ļ�����ָ���������
				����������Ҫ֪���÷Ǿ�̬���������ĸ�����

				3����C++�У����Զ�������static����������з��ʻ����
				������ϵ�һЩ�۵㣬c++��Ӧ��û�о�̬���˵����ֻ
				������Java��C#�С�

				4��c#/Java�еľ�̬����
					��1����������̬��Ա
					����������ԣ�c++�ġ���̬�ࡱ�г�Ա�����Զ�ת�ɾ�̬��Ա��
							
					��2������ʵ����

	@ Author:		rh_Jameson

	@ Date:			2014/07/23
**************************************************************************************/
#include <iostream>

using namespace std;


//----------------1��������ľ�̬��Ա����̬����-----------------------//
class SClass
{	
public:
	
	//��̬�������þ�̬����
	static void setStaticVar(int x)
	{
		s = x;
		cout << "This is a static func" << endl;
	}
	
	//��̬�������÷Ǿ�̬��������ָ��������󣬷��򱨴�
	static void setVar(int x,SClass *ptr)
	{
		ptr-> ns = x;
	}

	static int s;	//��̬���� s

	int ns;			//�Ǿ�̬���� ns
};
int SClass :: s = 10;			//��̬��Ա���������ʼ�������򱨴�

/*���ⶨ�徲̬����*/
//void SClass :: setVar(int x,SClass *ptr)
//{
//	ptr-> ns = x;
//}


//-----------------------------2����̬�����---------------------------------//
static class StaticClass
{	
public:
	
	
	static void setStaticVar(int x)
	{
		s = x;
		cout << "This is a static func:" << s << endl;
	}
	
	static int s;			
};







int main()
{

//-----------------------��̬��������̬��Ա-------------------------------//
	/*
		SClass sc;
		sc.set(10);
		cout<<"s = "<<sc.s<<endl;
	*/
	
	//���Բ�new����£��Ƿ���Է���ָ�����			�����Debug Error
	//SClass *p ;

	SClass *p = new SClass();

	p -> setStaticVar ( 15 );		//s = 15
	p -> setVar ( 13, p );			//ns = 13
	

	cout << "s=" << p->s << endl;
	cout << "ns=" << p->ns << endl;


//--------------------------��̬�����----------------------------------//
	/*
		StaticClass.s=10;
		StaticClass.setStaticVar(111);
	*/
	return 0;
}