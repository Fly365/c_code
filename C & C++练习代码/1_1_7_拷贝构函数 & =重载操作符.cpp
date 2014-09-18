/*********************************************************************
	@ Title:		���������� & =���ز�����	

	@ Description:		1����Ϥ�������캯����copy assign������					
						
				2�����Է����ⲿָ������ã��û�ʹ��
				�ⲿָ��ı��ڲ������Լ��������

	@ Conclusion:			

	@ Author:			rh_Jameson

	@ Date:				2014/09/08
**********************************************************************/

#include<iostream>
using namespace std;


//-------------1����Ϥ�������캯����copy assignment����-----------------//
class Refer					//���ö���
{
public:	
	void setA(int a)
	{
		this->a = a;
	}
	int getA()
	{
		return a;
	}

	void setB(int b)
	{
		this->b = b;
	}	
	int getB()
	{
		return b;
	}
private:
	int a, b;
};

class Test
{
public:
	Test()
	{
	}
	~Test()
	{
	}
	Test(const Test &other)							//�������캯��
	{
		cout << "���ǿ������캯��" << endl;
		res = other.res;						//��������ֱ�Ӹ�ֵ
		r = other.r;							//Ӧ�ö���ֱ�Ӹ�ֵ
		rr = new Refer();						//ָ�������·���һ�οռ䣬����һ��ֵ
		rr->setA( other.rr->getA() );
		rr->setB( other.rr->getB() );
	}
	const Test & operator=(const Test &other)				//���ظ�ֵ������
	{
		cout << "�������ظ��Ʋ�����" << endl;
		res = other.res;
		r = other.r;
		rr = new Refer();
		rr->setA( other.rr->getA() );
		rr->setB( other.rr->getB() );
		return *this;
	}

	void setRes(int res)
	{
		this->res = res;
	}
	int getRes()
	{
		return res;
	}
	void setRefer(Refer r)
	{
		this->r = r;
	}
	Refer getRefer()
	{
		return r;
	}
	void setReferPointer(Refer* rr)
	{
		this->rr = rr;
	}
	//ǿ�Ҿ��棺����ָ��ָ���ڲ�����,�ⲿָ����Ըı�private������
	Refer* getReferPointer()
	{
		return rr;
	}
	//���֮��
	Refer const * getReferP()
	{
		return rr;
	}
	

private:
	int res;
	Refer r;
	Refer *rr;

};

//���Ը��ƹ��캯���͸�ֵ������
void testCopyConstructorAssign()
{
	Refer r;							//����refer���󣬲���ʼ�����Ա����
	r.setA(10);
	r.setB(20);

	Test source;							//����Դ���󣬲���ʼ��
	source.setRes( 30 );
	source.setRefer( r );

	r.setA( 40 );
	r.setB( 50 );	
	source.setReferPointer( &r );	

	cout << "Դ����ĳ�Աֵ�ǣ�" << endl;
	cout << "source.Res:" << source.getRes() << endl;

	cout << "source.getRefer.A:" << source.getRefer().getA() <<endl;
	cout << "source.getRefer.B:" << source.getRefer().getB() << endl;
	
	cout << "source.getReferPointer.A:" << source.getReferPointer()->getA() << endl;
	cout << "source.getReferPointer.B:" << source.getReferPointer()->getB() << endl;

	Test obj(source);
	//Test obj = source;						//���ÿ������캯��
	//obj = source;							//���ø�ֵ�������������ĸ�����ȡ����obj�Ƿ��ʼ��		
	cout << "Ŀ�����ĳ�Աֵ�ǣ�" << endl;
	cout << "obj.Res:" << obj.getRes() << endl;

	cout << "obj.getRefer.A:" << obj.getRefer().getA() <<endl;
	cout << "obj.getRefer.B:" << obj.getRefer().getB() << endl;
	
	cout << "obj.getReferPointer.A:" << obj.getReferPointer()->getA() << endl;
	cout << "obj.getReferPointer.B:" << obj.getReferPointer()->getB() << endl;


	cout << "�ı�obj��������ݣ�" << endl;
	obj.setRes( 80 );
	r.setA( 90 );
	r.setB( 100 );
	obj.setRefer( r );
	r.setA( 110 );
	r.setB( 120 );
	obj.setReferPointer( &r );

	cout << "Ŀ�����ĳ�Աֵ�ǣ�" << endl;
	cout << "obj.Res:" << obj.getRes() << endl;

	cout << "obj.getRefer.A:" << obj.getRefer().getA() <<endl;
	cout << "obj.getRefer.B:" << obj.getRefer().getB() << endl;
	
	cout << "obj.getReferPointer.A:" << obj.getReferPointer()->getA() << endl;
	cout << "obj.getReferPointer.B:" << obj.getReferPointer()->getB() << endl;


	//Դ�����Ŀ��������Ӧһ�οռ䣬�ı���Ŀ���������ݣ�����Ӱ�쵽Դ���������
	cout << "��ʱ��Դ����ĳ�Աֵ�ǣ�" << endl;

	cout << "Դ����ĳ�Աֵ�ǣ�" << endl;
	cout << "source.Res:" << source.getRes() << endl;

	cout << "source.getRefer.A:" << source.getRefer().getA() <<endl;
	cout << "source.getRefer.B:" << source.getRefer().getB() << endl;
	
	cout << "source.getReferPointer.A:" << source.getReferPointer()->getA() << endl;
	cout << "source.getReferPointer.B:" << source.getReferPointer()->getB() << endl;

}

//-------------2����Ϥ�������캯����copy assignment����-----------------//
void testPointerChangeInternalData()
{
	Refer r;
	r.setA(10);
	r.setB(20);
	Test source;
	source.setRes( 30 );
	source.setRefer( r );

	r.setA( 40 );
	r.setB( 50 );	
	source.setReferPointer( &r );	

	cout << "�ı�ǰ�ڲ�ָ��ָ���������ݣ�" << endl;
	cout << "source.getReferPointer().A: " << source.getReferPointer()->getA() << endl;
	cout << "source.getReferPointer().B: " << source.getReferPointer()->getB() << endl << endl;

	//ǿ�Ҿ��棺����ָ��ָ���ڲ�����
	Refer *t = source.getReferPointer();
	//const Refer *t = source.getReferP();						//�������
	t->setA( 60 );									//�ⲿָ��t�ı�ָ���������ݣ��ڲ�ָ��rrָ�������Ҳ���Ÿı�
	t->setB( 70 );
	cout << "�ⲿָ��t�ı�ָ����������:" << endl;
	cout << "t->A:" << t->getA() << endl;
	cout << "t->B:" << t->getB() << endl << endl;
	
	cout << "�ı���ڲ�ָ��ָ���������ݣ�" << endl;
	cout << "source.getReferPointer().A: " << source.getReferPointer()->getA() << endl;
	cout << "source.getReferPointer().B: " << source.getReferPointer()->getB() << endl;

}


int main()
{
	//testPointerChangeInternalData();
	testCopyConstructorAssign();
	return 0;
}