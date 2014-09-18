/*********************************************************************
	@ Title:		��Ԫ��������Ԫ��	

	@ Description:		1������һ����Ԫ��������Ԫ��
						
				2��ͨ����Ԫ����Դ���private��Ա
						

	@ Conclusion:			

	@ Author:		rh_Jameson

	@ Date:			2014/07/21
**********************************************************************/

#include <iostream>

using namespace std;

//Դ��
class MyClass
{
public:
	int pubX, pubY;					//���г�Ա����
	
	//�����������Ԫ�࣬������public����private�£�����Ч
	friend class FriendClass;

	//MyClass(int X):pubY(X){}			//���캯����ʼ��

	//���ù��г�Ա����pubX��pubY
	void setPubX ( int X )				
	{
		this -> pubX =X;
		cout<<"This is setPubX, PubX = "<<(this -> pubX)<<endl;
	}
	void setPubY ( int Y )
	{
		this -> pubY = Y;
		cout<<"This is setPubY, PubY = "<<(this -> pubY)<<endl;
	}

	//����˽�г�Ա����priX��priY
	void setPriX ( int X )				
	{
		this -> priX =X;
		cout<<"This is setPriX, PriX = "<<(this -> priX)<<endl;
	}
	void setPriY ( int Y )
	{
		this -> priY = Y;
		cout<<"This is setPriY, PriY = "<<(this -> priY)<<endl;
	}

	friend void friFunc(MyClass &p);		//������Ԫ����
	//void friFunc(MyClass &p);				//δ������Ԫ����ʱ����Ԫ���������޷�����

private:
	int priX,priY;					//˽�г�Ա����
	
	//˽�в���
	void priFunc()
	{
		cout<<"����˽�в�������"<<endl;
	}
};

//��Ԫ��������
void friFunc(MyClass &p)
{
	p.priX = 10;
	
	cout<<"priX:"<< p.priX <<endl;
	
}

//����Ԫ�࣬������Ԫ����
class NFriendClass
{
public:
	MyClass mc;
	void printXY()
	{
		/*    ͨ��������ȡ���С�˽�г�Ա�����ɹ�    */
		mc.setPubX(10);		
		mc.setPubY(20);
		mc.setPriX(30);
		mc.setPriY(40);


		//ֱ�ӻ�ȡ��Ա���������г�Ա������ȡ�ɹ�����˽�г�Ա��ʧ��
		cout<<"ֱ�ӻ�ȡPubX��"<<mc.pubX<<endl;
		cout<<"ֱ�ӻ�ȡPubY��"<<mc.pubY<<endl;
		
		/*
		cout<<"ֱ�ӻ�ȡPriX��"<<mc.priX<<endl;			//��ʾPriX���ɷ���
		cout<<"ֱ�ӻ�ȡPriY��"<<mc.priY<<endl;
		mc.priFunc();
		*/		
		
	}


};

//��Ԫ��
class FriendClass
{
public:
	MyClass mc;
	void printXY()
	{
		/*    ͨ��������ȡ���С�˽�г�Ա�����ɹ�    */
		mc.setPubX(10);		
		mc.setPubY(20);
		mc.setPriX(30);
		mc.setPriY(40);


		//ֱ�ӻ�ȡ��Ա���������С�˽�г�Ա������ȡ�ɹ�
		cout<<"ֱ�ӻ�ȡPubX��"<<mc.pubX<<endl;
		cout<<"ֱ�ӻ�ȡPubY��"<<mc.pubY<<endl;
		
		
		cout<<"ֱ�ӻ�ȡPriX��"<<mc.priX<<endl;			//�ɹ�����˽�г�Ա����
		cout<<"ֱ�ӻ�ȡPriY��"<<mc.priY<<endl;
		
		cout<<endl;

		mc.priFunc();						//ͨ����Ԫ����Ԫ���˽�к���
	}
};



int main()
{
	//��������Ԫ��	
	NFriendClass nfc;
	nfc.printXY();
	
	

	//������Ԫ��
	FriendClass fc;
	fc.printXY();
	
	//������Ԫ����
	MyClass mc;
	friFunc(mc);

	return 0;
}