/*********************************************************************
	@ Title:		��׼������vector	

	@ Description:		1��ʹ��vector��ʵ��ѭ�����
						
				2��ʵ��ÿ���10��Ԫ�أ��ͻ��У������

				3������vector����Ϥvector�Ĵ����ʽ

	@ Conclusion:			

	@ Author:		rh_Jameson

	@ Date:			2014/08/03
**********************************************************************/

#include<iostream>
#include<vector>
using namespace std;

//---------------------1��ʹ��vector��ʵ��ѭ�����-------------------//
/*ʵ��vector����������Ԫ��֮�͵����*/
void vectorPrint()
{
	vector<int> ivec;							//����vector����
	int ival;

	cout << "������һ�����֣�";
	while( cin >> ival )
	{
		ivec.push_back( ival );
	}

	if(ivec.size() == 0)
	{
		cout << "û���������룡" << endl;
		exit(0);
	}
	for(vector<int>::size_type ix = 0; ix < ivec.size()-1; ix += 2)
	{
		cout << ivec[ix] + ivec[ix + 1] << "\t";
		if( ix % 6 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;

	if(ivec.size() % 2 != 0)
	{
		cout<<"���ڸô����ֺ������������֣��������һ������ԭ�������" << endl;
	}

	
}

//--------------2��ʵ��ÿ���10��Ԫ�أ��ͻ��У������----------------//
void intervalTen()
{
	//��ʽһ��
	for( int i = 0; i <= 100; i += 2)
	{
		cout << i << "\t";
		
		if( i % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	
	//��ʽ����
	for( vector<int>::size_type i = 0;i <= 100; i++)
	{
		cout << i << "\t";

		if( i % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
}

//-------------3������vector����Ϥvector�Ĵ����ʽ-----------------//
void vectorTest()
{
	//�����ʽһ
	vector<int> ivec;
	//�����ʽ��
	vector<int> ivecA(11);

	//ѭ�������ʽһ����
	for( vector<int>::size_type i = 0; i <= 10; i++ )
	{
		ivec.push_back(i);
		//ivec[i] =i;										//ivec������ͨ�����ַ�ʽ��ֵ����Ϊivec�в����κ�Ԫ��
		ivecA[i] = i;

		cout << ivec[i] << "\t";
		//cout << *(ivec + i) << "\t";						//��������Ҫʹ�����ַ�ʽ��ֻ���õ�����
		cout << ivecA[i] << "\t";
		
		if(i % 10 == 0 && i != 0)
		{
			cout << endl;
		}
		
	}
	//�����ʽ��
	vector<int> ivecB(10,1);
	//ѭ�������ʽ��
	for(vector<int>::iterator iter = ivecB.begin(); iter != ivecB.end(); ++iter)
	{
		vector<int>::const_iterator iterator = ivecB.begin();
		cout << *iter <<"\t";
		
		if(*iter % 10 == 0)
		{
			cout << endl;
		}
	}

	vector<int> ivecC;
	//ѭ�������ʽ��
	vector<int>::iterator iter =ivecC.end();
	for (int i = 0; i <= 10; ++i )
	{
		ivecC.insert(iter,44);
		iter = ivecC.end();
		cout << ivecC[i] << "\t";
	}
	cout << endl;
	
	
}





int main()
{
	//vectorPrint();
	/*const int a =10;
	int arr[a];
	for(int i = 0; i < 10; i++)
	{
		arr[i] = i;
		cout << arr[i] << endl;
	}*/
	vectorTest();
	return 0;
}