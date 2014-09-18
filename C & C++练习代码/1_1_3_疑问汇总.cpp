/*********************************************************************
	@ Title:		���ʻ���	

	@ Description:		1��try/catch/throw�쳣����
						
				2��typedef���ĸ���;����������

				3��ö��������int�Ķ�Թ

				4��new delete malloc free
				
				5��Ұָ�롢����ָ�롢����ָ��

				7��ָ�봫�ݣ�����ָ�뱾�����

	@ Problem:		1��vs2010Ϊʲô�����ڲ�����stdlib�������
				ʹ��malloc�������Ƶģ��ܶ඼�⺯��Ҳ��������			

	@ Author:		rh_Jameson

	@ Date:			2014/08/04
**********************************************************************/

#include<iostream>
#include<exception>
#include<string>

#include <memory>				//ʹ������ָ���õ�

using namespace std;


//---------------------1��try/catch/throw�쳣����----------------------//
//��ʽһ�������׳�������дcatch��׽
double divide(double x,double y)
{
	int e = 1;
	if( y == 0)
	{
		//throw y;			//�׳��쳣y�����û����Ӧ��catch��׽���ᱨ��
		//throw "error";		//ֻ���ܳ�һ���쳣��Ĭ���ǵ�һ���쳣
		throw e;			//�׳�catch��δֱ�����������ͣ�Ĭ����catch��...����׽

							/*���������Լ�����ĺ������׳�(throw)һ���쳣����ʱ�����
							���쳣�����ڱ��������壬��ô�������´���˶���ĳ���ض���
							������Ϊ���˺�������ʱ��ԭ���ڸú�������Ķ���ռ佫���ͷţ�
							����Ҳ�Ͳ������ˡ������������˶�������������ʹ��catch���
							ʱ���Է��ʵ��ö��󸱱�*/
	}
	else
		return x / y;
	
}
void TestExceptionWayOne()
{
	double x = 10,y = 0;
	
	try
	{
		cout << divide(x,y) << endl;
	}
	catch(double e)						//��Ӧthrow y
	{
		cout <<"����double y�쳣��" << endl;
	}
	catch(char *str)					//��Ӧthrow "error"
	{
		cout << "����string �쳣��" << endl;
	}
	catch(...)
	{
		cout << "����δ֪�쳣" << endl;
	}
	
}

//��ʽ�����Զ����쳣��������
class myException : public exception
{
public:
	const char* what() const throw()			//throw()��������ʲô���ã��൱��Java�е�throws��
	{
		return "My Exception!!!";
	}

	
};
void testExceptionWayTwo()
{
	myException me;
	try
	{
		//throw me;
		throw myException();	//ֱ���׳�
	}
	catch(myException& e)		//������Ϣeʹ��������myException
	{
		cout << "�Զ����쳣��׽�ɹ����쳣��Ϣ�ǣ�" << "\t";
		cout << e.what() << endl;
	}
	//catch(exception& e)		//������Ϣeʹ�û���exception����ǰ�߽��һ��
	//{
	//	cout << "�Զ����쳣��׽�ɹ����쳣��Ϣ�ǣ�" << "\t";
	//	cout << e.what() << endl;
	//}
}

//��������ʹ�ñ�׼�쳣����
void testException()
{
	exception e;
	try
	{
		throw e;
	}
	catch(exception &e)
	{
		cout << "���ñ�׼�쳣,�쳣��Ϣ�ǣ�\t" << e.what() <<endl; 
	}
}


//---------------------2��typedef���ĸ���;����������----------------------//

//��;һ������һ�����͵ı���������ֻ�Ǽ򵥵ĺ��滻
typedef int INT;

/*��;����	��׼C�У�����struct�¶���ʱ������Ҫ����struct��
*			ʹ��typedef������ʡ��struct���붨�������������һ�¡�
*			������;�ѳɼ��ߣ���Ϊc++�п��Բ�����struct��
*/
struct point
{
	int a;
	double b;
};
typedef struct					//�Ӳ��ӽṹ����������
{
	int a;
	int b;
} line;

//��;�����������������ע���ʽ��������~~ôô�գ�
typedef int int_arr_10[10];
typedef int int_arr_100[100];

//��;�ģ�Ϊ����ָ�붨���µ����ƣ�typedef int (*MyFUN)(int a��intb);
//type (*)(....)����ָ��
//type (*)[]����ָ��


//����һ���Ǽ򵥵ĺ��滻
#define DF_INTPTR int*
typedef int* TYPE_INTPTR; 

void testTypedef()
{	
	//��;һ��
	INT val = 100;
	//unsigned INT valA = 100;				//����������д��ԭ�������Ҳ£�typedef int INT;������Ѿ���INT�����int����

	cout << val << endl;
	//cout << valA << endl;


	//��;��:�Ա�
	//point AA;								//c++�п�����������ṹ����󣬵���׼C�б���struct point AA��
	struct point AA;		
	AA.a = 10;
	AA.b = 22;
	cout << AA.a << "\t" << AA.b << endl;
	
	line BB;
	BB.a = 99;
	BB.b = 88;
	cout << BB.a << "\t" << BB.b << endl;


	//��;����
	int_arr_10 arr;
	int_arr_100 arr_100;

	for(int i = 0; i < 10; i++ )
	{
		arr[i] = i;
		arr_100[i] = i;
		cout << arr[i] << endl;
		cout << arr_100[i] << endl;
	}

	//����һ��
	DF_INTPTR p1,p2;						//������һ��ָ��p1,һ������p2,�ȼ���int *p1,p2;
	TYPE_INTPTR p3,p4;						//����������ָ��p3��p4���ȼ���int *p3, *p4;

	//�����:
	int varA = 11,varB = 22;

	const DF_INTPTR p5 = &varA;				//����ָ�룬�ȼ���const int* p5 = &varA;	const���ε���ָ��ָ��Ķ���
	const TYPE_INTPTR p6 = &varB;			//ָ�볣�����ȼ���int* const p6 =��&varB��	��Ϊconst���ε���ָ�뱾��
	TYPE_INTPTR const p7 = &varB;			//ָ�볣������ͬp6

}




//-----------------------3��ö��������int�Ķ�Թ-------------------------//
void testEnum()
{
	enum color{red, green, blue};
	//color c = 1 ;								//c����������ͨ�����Զ�ת����green
	color c = green;
	c = color( 2 );								//intתΪcolor��
	int greenVar = green;

	cout << greenVar << endl;
	cout << c <<endl;
}


//-----------------------4��new delete malloc free-----------------------//

//--------------------5��Ұָ�루����ָ�룩������ָ��----------------------//
/*	ά���ٿƣ�Ұָ��==����ָ��==��;ָ��
*	��һ˵����	Ұָ�룺	��������δ��ʼ����ָ��
*				����ָ�룺	ָ��ָ��Ŀռ��ѱ��ͷţ���ָ��δ��NULL
*
*	Java���ԣ�����ָ�������Ĵ����ǲ��ᷢ����
*
*	c++��ֹ����ָ��ķ�����
*		��1������Ĭ�Ͽ������캯�����Լ�дһ��		����ֵ�͵ķ�ʽ����
*		��2��ʹ������ָ��							����ʹ�����ü���
*/
class Point
{
public:
	int x,y;
};

//ʹ������ָ��share_ptr
void testShare_ptr()						//���Բ��ˣ�vs2010����ľ���ļ�boost���밲װ~~
{
	//share_ptr<int> ip( new int );
	//*ip = 11;
	//cout << *ip << endl;
}


//ʹ������ָ��auto_ptr��unique_ptr
void testSmartPointer()
{
	/*Point *pp = new Point();							//��ָͨ�붨�巽ʽ
	pp->x = 10;
	pp->y = 100;*/

	auto_ptr<Point> ptr ( new Point() );				//����ָ�붨�巽ʽ
	ptr->x = 10;
	ptr->y = 20;

	//auto_ptr<Point> ptrA(ptr);							//��ptr�Ŀռ����ptrA��ptr���
	auto_ptr<Point> ptrA = ptr;							//��ptr�Ŀռ����ptrA��ptr���
	
		
	//cout << ptr->x << endl;
	cout << ptrA->x << endl;
	
	ptr.release();										//�൱��delete��free���ͷſռ�
	if(ptr.get() == NULL)								//�ж�ָ���Ƿ�Ϊ��
	{
		cout << "����ָ��ptr�Ѿ�����" << endl;	
	}
	/*unique_ptr<int> ptr ( new int() );
	*ptr =10;
	unique_ptr<int> ptrA = move( ptr );
	cout << *ptrA << endl;
	cout << *ptr << endl;*/
}

void testWildPointer()
{
	Point a;
	a.x = 10;
	a.y = 20;
	
	Point b = a;					//���󿽱�����ʱ����b�����⿪��һ��ռ䣬
									//��a�����ݿ������ÿռ���

	cout << &a << endl;
	cout << &b << endl;

	Point *pp = new Point();
	pp->x = 10;
	pp->y = 100;

	Point *cp = pp;					//���󿽱�����ʱ����b�Ͷ���a���ڴ��й���ͬһ��ռ�
	cout << pp << endl;
	cout << cp <<endl;
}


//malloc/free��new/delete��ȷ�ķ��䡢�ͷŷ�ʽ
void testPointer()
{
	//malloc/free��ȷ���䡢�ͷŷ�ʽ
	/*int *p = (int *) malloc(10 * sizeof( int ) );
	for ( int i = 0; i < 10; i++ )
	{
		*( p + i ) = i;
		cout << *( p + i ) << endl;
	}
	free(p);
	p = NULL;*/												//û����䣬p����ΪҰָ��

	//new/delete��ȷ���䡢�ͷŷ�ʽ
	int *q = new int[10];
	for ( int j = 0; j < 10; j++ )
	{
		* ( q + j ) = j;
		cout << * ( q + j ) << endl;
	}
	delete []q;
	q = NULL;												//û����䣬q����ΪҰָ��
	cout << q << endl;

	if ( q == NULL )
	{
		cout << "qָ���Ѿ�����" << endl;
	}



}


//------------------7��ָ�봫�ݣ�����ָ�뱾�����----------------------//
//�汾һ:
//void GetMemoryA( char* &p)					//ָ�������ͬһָ��
void GetMemoryA( char* p)						//ָ�븱��
{
	p = (char *)malloc(100 * sizeof( char ));
}
void testGetMemoryA() 
{
	char* str = NULL;
	GetMemoryA( str );						//ʵ���ϲ�û�л�ȡ���ڴ�ռ䣬�����ָ����˲������󣬵������꣬���ص��ú���ʱ���Ͳ�������
	strcpy( str, "hello world" );
	cout << str << endl;
  
}
//�汾��:
void GetMemoryB( char **p, int num )
{
	*p = (char*) malloc(num);
	if(*p==NULL)
	{
	/*�������*/
	}
}
void testGetMemoryB()
{
	char *str = NULL;
	GetMemoryB( &str, 100 );				//�ð汾���Ի�ȡ���ڴ�ռ䣬��Ϊ���ﴫ����ָ���ָ�룬���������ָ꣬���ָ��û�ˣ���ָ���Դ���
	strcpy( str, "hello" );
	cout << str << endl;
}


int main()
{
	//testDynamicAssign();
	//testShare_ptr();
	testGetMemoryA();
	//testEnum();
	//testTypedef();
	//TestExceptionWayOne();
	return 0;
}