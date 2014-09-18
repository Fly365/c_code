/*********************************************************************
	@ Title:		�����-�麯��-���麯��

	@ Description:		1���Ƚϻ��ࡢ�����

				2���ȽϺ������麯��


	@ Conclusion:			

	@ Author:			rh_Jameson

	@ Date:				2014/07/29
**********************************************************************/

#include <iostream>
using namespace std;
//-----------------------1���Ƚϻ��ࡢ�����--------------------------//

/*�����������������*/
class A
{
public:
    int iValue;
};

class B:public A
{
public:
    void bPrintf(){cout<<"This is class B"<<endl;};
};

class C:public A
{
public:
    void cPrintf(){cout<<"This is class C"<<endl;};
};

class D:public B,public C
{
public:
    void dPrintf(){cout<<"This is class D"<<endl;};
};





/*ʹ�����������*/
//class A
//{
//public:
//    int iValue;
//};
//
//class B:virtual public A
//{
//public:
//    void bPrintf(){cout<<"This is class B"<<endl;};
//};
//
//class C:virtual public A
//{
//public:
//    void cPrintf(){cout<<"This is class C"<<endl;};
//};
//
//class D:public B, public C
//{
//public:
//    void dPrintf(){cout<<"This is class D"<<endl;};
//};


int main()
{
	D d;

	d.A::iValue = 10;
	d.B::iValue = 20;
	d.C::iValue = 30;
    
	//cout<<d.iValue<<endl; //���󣬲���ȷ�ķ���
    cout<<d.A::iValue<<endl; //��ȷ
    cout<<d.B::iValue<<endl; //��ȷ
    cout<<d.C::iValue<<endl; //��ȷ


	return 0;
}