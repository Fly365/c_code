//@description:		4���Զ��帴�ƹ��캯����ǳ���ơ���ƣ�

#include<iostream>
using namespace std ;
class  Location 
{
public :
      Location ( int xx = 0, int yy = 0 )  
	  { 
		  X = xx ;  
		  Y = yy ; 
		  cout << "constructor called." << endl ; 
	  }
      //�Զ��帴�ƹ��캯��
	  Location ( const Location  & p ) 
      { 
		  X = p.X ;  
		  Y = p.Y ;   
		  cout << "Copy_constructor called." << endl ; 
	  }
	  
      int GetX() 
	  { 
		  return  X ; 
	  }
      int GetY() 
	  { 
		  return  Y ; 
	  }
private :  
	int  X ,  Y ;
} ;
 
