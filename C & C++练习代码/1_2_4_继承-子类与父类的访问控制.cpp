/*********************************************************************
	@ Title:		��ļ̳�	

	@ Description:		1����ķ��ʿ���

	@ Conclusion:		1������ᴴ�������˽�г�Ա�������ɷ��ʸ���
				��˽�г�Ա��ֻ��ͨ�����г�Ա��������	

	@ Author:		rh_Jameson

	@ Date:			2014/07/24
**********************************************************************/
#include<iostream>
using namespace std;

//����
class Father
{
public:
	int pubVar;
	
	//��������˽�г�Ա����
	void printPFVar()
	{
		pfVar = 111;
		cout << pfVar << endl;
	}

private:
	int pfVar;
};
//����
class Son :public Father
{
public:
	void printFatherVar()
	{
		pubVar = 99;
		
		cout << pubVar << endl;
		printPFVar();
	}
};

class  base
  { public :
           int  a ,  b ;  
  } ;
class  derived : public  base
  { public :  
         int  b ,  c ; 
  } ;
void  f ()
{ derived  d ;
   d . a = 1 ;
   d . base :: b = 2 ;
   d . b = 3 ;
   d . c = 4 ;

   Son s;
	s.printFatherVar();
	s. Father :: pubVar = 22;

   cout<<"d.a = " << d.a << endl;
   cout<<"d.b = " << d.b << endl;
   cout<<"d.c = " << d.c << endl;

};



int main()
{
	
	//f();
	return 0;
}

