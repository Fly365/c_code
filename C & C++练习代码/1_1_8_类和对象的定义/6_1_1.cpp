/*********************************************************************
	@title:			��Ͷ���Ķ���

	@description:		1���������������������ָ��

				2��һ���������

				3��дһ��������

				4��дһ����׼�ࣨ����ͷ�ļ���mainֱ�ӵ��ã�
				����ָ����ʳ�Ա�����뺯��

	@author:		rh_Jameson

	@date:			2014/07/21
**********************************************************************/
#include <iostream>
#include "PClass.h"

using namespace std;

//1���������������������ָ��
class Link
{
	public:
		int node;
		Link *link; 
};

//2��һ���������
class Tdate
{  public:
        
		//����������
		void  Set(int m, int d, int y )
		{ 
			month = m ;  
			day = d ; 
			year = y ; 
		}

		//�ж��Ƿ�Ϊ����
        int  IsLeapYear()
        { 
			return ( year % 4 == 0 && year % 100 != 0 )||( year % 400 == 0);
		}

		//���������
        void  Print()  
		{ 
			cout << year << "." << month << "." << day << endl ; 
		}

   private:
        int  month, day, year;
};

//3��������
class
{
public:
	
	void init(int x,int y)
	{
		this -> x = x;
		this -> y = y;
	}
	void print()
	{
		cout<<"x="<<x<<","<<"y="<<y<<endl;
	}
private:
	int x, y;

}unknown;



int main()
{
	
//--------------------ʵ������1----------------------//
	
	Link a;						//ʵ��������a
	a.node = 10;
	a.link = new Link;			//new link����һ��ָ��

	cout<<"a node="<<a.node<<endl;
	cout<<"a link="<<a.link<<endl;

	
//--------------------ʵ������2----------------------//
	cout<<endl<<endl;

	Tdate tdate;
	
	tdate.Set(7,21,2014);				//�����������ں���
	
	cout<<"��������Ϊ:";
	tdate.Print();					//��ӡ����

	cout<<endl;

	cout<<"������Ϊ������\t"<<tdate.IsLeapYear()<<endl<<endl;			//�ж��Ƿ�Ϊ����


//--------------------ʵ������3-----------------------//

	unknown.init(12,12);
	unknown.print();

//--------------------ʵ������4-----------------------//
	PClass *p = new PClass;
	
	p->x=10;
	p->y=10;

	p->print();

	return 0;
}

