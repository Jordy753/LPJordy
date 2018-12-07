//Chrono.cpp (1,2y3) 
//Chrono.h (1,2y3)

#include <iostream>

using namespace std;

namespace Chrono {
	class Date{
		
		public:
			enum Month {
				jan=1, feb, mar, apr, may, jun, jul, aug,
				sep, oct, nov, dec
			};
			
			class Invalid {};			//para lanzar excepciones
			Date(int y, Month m, int d);	//valida e inicializa
			Date();		//constructor por default
			
			//las operaciones por default
			//del operador copia estan bien 
			
	
			//operaciones que no modifican:
			int day()		const { return d; }
			Month month()	const { return m; }
			int year()		const { return y; }
			
			//operaciones que modifican:
			
			void add_day(int n);  //-----------
			void add_month(int n); //-----------
			void add_year(int n); //-----------
		
		private:
			int y; 
			Month m;
			int d;
			
	};
	
	bool is_date(int y, Date::Month m, int d); 	//true
			//para fechas validas
	bool leapyear(int y);			//true si es anho bisiesto
	
	bool operator ==(const Date& a, const Date& b);
	bool operator !=(const Date& a, const Date& b);
	
	ostream& operator<<(ostream& os, const Date& d);
	istream& operator>>(istream& is, Date& dd);	
	
}			//Chrono termina al fin


namespace Chrono {
	
	//definiciones de las funciones miembro
	
	Date::Date(int yy, Month mm, int dd)
			:y(yy), m(mm), d(dd)
	{
		if(!is_date(yy, mm, dd)) throw Invalid();
	}
	
	const Date& default_date()
	{
		
		static const Date dd(2001, Date::jan, 1);
		
		//empieza en el siglo 20
		return dd;
	}
	
	Date::Date()
		:y(default_date().year()),
		m(default_date().month()),
		d(default_date().day())
	{}		
	
void Date::add_day(int n)	{
  bool s="si";
  while(n!=0){
    
    if(m==feb && d==29 && leapyear(y)==s){
      d=0;
      m=Month(m+1);
    }
    else if(m==dec||m==oct||m==aug||m==jul||m==may||m==mar||m==jan){  //todos los 31
      if(d==31){
        d=0;
        m=Month(m+1);
      if(m>=dec){
        y=y+1;
        m=jan;
      }
      }
    }  
    else{
        if(m==feb && d==28 && leapyear(y)!=s){
          d=0;
          m=Month(m+1);
        }
        else{
          if(d==30){
            d=0;
            m=Month(m+1);
          }
        }  
      }  
    d=d+1;
    n=n-1;
  }

}
void Date::add_month(int n)	{
    bool s="si";
    int _m=m;
    int dat_m=_m+n;
    while(dat_m>12){
      y=y+1;
      dat_m=dat_m-12;
    }

  if(dat_m==2 && leapyear(y)==s){
    if(d>=30){  
      m=mar;
      d=d-29;
    }
    else
      m=feb;  
  }
  else if(d<=30){
    if(dat_m==2 && d>=29){
      m=mar;
      d=d-28;
    }
    else{
    while(m!=dat_m){
      if(m==dec) m=jan;
      m=Month(m+1);
    }
    }
  }
  else if(d==31 ){
    if(dat_m==12||dat_m==10||dat_m==8||(dat_m)%2!=0){   
    while(m!=dat_m){
      if(m==dec) m=jan;
      m=Month(m+1);
    }
    }  
    else{
    while(m!=dat_m+1){
      if(m==dec) m=jan;
      m=Month(m+1);
    }
    d=1;
  	}
  }


}

	void Date::add_year(int n) 
	{
		if(m==feb && d==29 && !leapyear(y+n)){//cuidado con anhos bisiestos!!
			m = mar; 	//usa primero de Mar
						    //en vez de 29 de Feb 
			d = 1;
		}
		y+=n; //------
	}

	//Funciones de ayuda
	bool is_date(int y, Date::Month m, int d)
	{
		//asume que y es valido
		
		if(d<=0) return false;			//d debe ser positivo
		int days_in_month = 31; 		//por lo general son 31
		switch (m) {
			
			case Date::feb:
				days_in_month = (leapyear(y))?29:28;
			  break;
			case Date::apr: case Date::jun: case Date::sep:
			
			days_in_month = 30; 
			break;
				
		}
		
		if (days_in_month<d) return false;
		return true;
		
	}
	
	bool leapyear(int y)
	{
    if(y%4==0){
      return true;
    }
    else if(y%100==0){
      return true;
    }
    else if(y%400==0){
      return true;
    }  
		return false;
	}
	bool operator ==(const Date& a, const Date& b)
	{
		return a.year() == b.year()
			&& a.month() == b.month()
			&& a.day() == b.day();
	}
		
	bool operator!= (const Date& a, const Date& b)
	{
		return !(a == b);
	}	
/*	
  istream& operator>>(istream& is, Date& dd){
    char aa;
    char ba;
    char ca;
    char da;
    return is>>aa>>dd.day()>>ba>>dd.month()>>ca>>dd.year()>>da;

  }
*/
	ostream& operator<<(ostream& os, const Date& d)
	{
		
		return os<< '('<<d.year()
             << ','<<d.month()
		         << ','<<d.day()
		         << ')';			
	}

	enum Day {
		sunday, monday, tuesday, wednesday,
		thursday, friday, saturday
	};
	
	Day day_of_week(const Date& d) 		{return sunday;}
	Date next_Sunday(const Date& d) 	{return d;}
	Date next_weekday(const Date& d)	{return d;}
	
} 		//Fin Chrono 


int main()

try
{
	int _a,_m,_d;
  Chrono::Date holiday(2016, Chrono::Date::jan, 10);
	Chrono::Date d2= Chrono::next_Sunday(holiday);
	Chrono::Day d= day_of_week(d2);
	
	cout<<"Feriado es "<<holiday<<" d2 es "<<d2<<endl;
  //cin>>d2;
  cout<<"Anade valores para agregar a la fecha anterior segun: años,mes y dias\n";
  cin>>_a;
  d2.add_year(_a);
  cout<<d2<<endl;
  cin>>_m;
  d2.add_month(_m);
  cout<<d2<<endl;
  cin>>_d;
  d2.add_day(_d);
	cout<<d2<<endl;

}

catch (Chrono::Date::Invalid&){
	
	cerr<<" error: Fecha invalida\n";
	return 1;
}
