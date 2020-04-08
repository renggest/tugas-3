#include <iostream>
using namespace std;

class Kalkulator {
	public:
		void hitung(int a){
	 if((a>=0)&&(a<=24))
	 {
	  cout<<"Nilai Siswa E"<<endl;
	 }
	 else if((a>=25)&&(a<=44))
	 {
	  cout<<"Nilai Siswa D"<<endl;
	 }
	 else if((a>=45)&&(a<=69))
	 {
	  cout<<"Nilai Siswa C"<<endl;
	 }
	 else if((a>=70)&&(a<=89))
	 {
	  cout<<"Nilai Siswa B"<<endl;
	 }
	 else if((a>=90)&&(a<=100))
	 {
	  cout<<"Nilai Siswa A"<<endl;
	 }
	 else
	 {
	  cout<<"Input Error";
	 }
	}
};

int main()
{
 int a;
 cout<<"Masukkan Nilai Siswa : ";
 cin>>a;
 
 Kalkulator kalkulator;
 kalkulator.hitung(a);
 
 return 0;
}