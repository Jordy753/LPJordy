//Chrono.h (1,2y3)

#include <iostream>

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
			
			void add_day(int n);
			void add_month(int n);
			void add_year(int n);
		
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

