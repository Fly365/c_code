//@description:1��дһ�����й��캯����������������
class Date
{ 
public:
      Date() ;
      ~Date() ;
	  Date(int,int,int) ;


      void SetDate( int y, int m, int d ) ;
      int IsLeapYear() ;
      void PrintDate() ;

private:
      int year, month, day ;
} ;