/*********************************************************************************************
	@ Title:			С����ڶ���	

	@ Description:		1�����Գ�������ʱ��
						
				2������cin�ķ���ֵ

				3�����������λ��

				4����������ǡ������ǡ�����

	@ Conclusion:		1����ӡ����
					i < lineʱ����line - i���ո񣬴�ӡ2i-1���Ǻţ�
						line - i, 2 * line-(line-i)=n+i

					i > line�ǣ���i - line���ո񣬴�ӡ2i-1���Ǻţ�
						i - line,  2 * line - (i - line)=3 * line - i;

	@ Author:		rh_Jameson

	@ Date:			2014/08/27
*********************************************************************************************/

#include<iostream>
#include<ctime>
using namespace std;


//----------------------1�����Գ�������ʱ��--------------------------//
void testCount()
{
	//cout << clock()/ CLOCKS_PER_SEC << endl;
	cout << clock() << endl;
}
//----------------------2������cin�ķ���ֵ---------------------------//
void testCin()
{
	int a, b;
	while( cin >> a >> b )
	{
		cout << a + b << endl;
	}
}
//----------------------3�����������λ��---------------------------//
int printNumCount(int num)
{
	int count = 0;
	while(num != 0)
	{
		num /= 10;
		count++;
	}
	cout << count << endl;
	return count;
}
//---------------------4������������Σ�1,3,5...----------------------//
int printTopTri()
{
	int i,j;
	int line = 10;
	for( i = 1; i <= line; ++i )					//��������
	{
		j = 1;
		/*while(j <= line - i)
		{
			cout << " ";
			++j;
		}*/
		for( j =1;  j <= ( line - i ); ++j )		//��������ո�line - i��
		{
			cout << " ";
		}

		
		/*while( j <= (2 * i -1) )
		{
			cout << "*";
			++j;
		}*/
		for( j = 1; j <= (2 * i - 1); ++j )			//��������Ǻ�2 * i - 1��
		{
			cout << "*";
		}
		
		cout << endl; 
	}
	return 0;
	
    
}

//---------------------------5�����������---------------------------------//
void printReverseTri()
{
	int i,j;
	int line = 10;
	for( i = line; i >= 1; --i )						//���������ѭ�����ޱ䶯
	{
		j = 1;
		/*while(j <= line - i)
		{
			cout << " ";
			++j;
		}*/
		for( j =1;  j <= ( line - i ); ++j )
		{
			cout << " ";
		}

		
		/*while( j <= (2 * i -1) )
		{
			cout << "*";
			++j;
		}*/
		for( j = 1; j <= (2 * i - 1); ++j )
		{
			cout << "*";
		}
		
		cout << endl; 
	}
}
//---------------------------5��������η���һ---------------------------------//
void printLing()
{
	int i,j;
	int line = 10;
	for( i = 1; i <= line; ++i )
	{
		j = 1;
		/*while(j <= line - i)
		{
			cout << " ";
			++j;
		}*/
		for( j =1;  j <= ( line - i ); ++j )
		{
			cout << " ";
		}

		
		/*while( j <= (2 * i -1) )
		{
			cout << "*";
			++j;
		}*/
		for( j = 1; j <= (2 * i - 1); ++j )
		{
			cout << "*";
		}
		
		cout << endl; 
	}

	for( i = line-1; i >= 1; --i )
	{
		j = 1;
		/*while(j <= line - i)
		{
			cout << " ";
			++j;
		}*/
		for( j =1;  j <= ( line - i ); ++j )
		{
			cout << " ";
		}

		
		/*while( j <= (2 * i -1) )
		{
			cout << "*";
			++j;
		}*/
		for( j = 1; j <= (2 * i - 1); ++j )
		{
			cout << "*";
		}
		
		cout << endl; 
	}

	
}

//---------------------------5��������η�����---------------------------------//
void printLin()
{
	int line = 10;
	int i,j;												//�У��� 
    for(i = 1; i <= 2 * line; i++) 
    { 
        for(j = 1; j <= 2 * line; j++) 
        { 
            if(i < line)									//i < lineʱ�����ӡline - i���ո�
            { 
                if(j > line - i && j < line + i)			//line - i, 2 * line-(line-i)=n+i
                { 
                    cout << '*'; 
                } 
                else 
                { 
                    cout << ' '; 
                } 
            } 
            else											//i > lineʱ�����ӡi - line���ո�
            { 
                if(j > i - line && j < 3 * line - i)		//i - line,  2 * line - (i - line)=3 * line - i;
                { 
                    cout << '*'; 
                } 
                else  
                { 
                    cout << ' '; 
                } 
            } 
 
        } 
        cout << endl; 
    } 
}

int main()
{
	//testCount();
	//testCin();
	//printNumCount( 9876 );
	//printTopTri();
	//printReverseTri();
	//printLing();
	printLin();
	return 0;
}