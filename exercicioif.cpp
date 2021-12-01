#include <iostream>
#include <locale.h>
using namespace std;

int main()

{
	setlocale(LC_ALL, "Portuguese");
  int age;


  cout <<"Informe sua idade: ";
  cin>>age;

  cout <<"------------------------------------\n";


  if (age>=7 && age<=12)

  {
    cout <<"Sua categoria é: INFANTIL";

  }

  else if (age>=13 && age<=17)	
  {
	cout<<"Sua categoria é: JUVENIL";
	


  }

  else if (age>=18 && age<=49)
  {
	cout<<"Sua categoria é: ADULTO";
    

  }
	else if (age>=50)
	cout<<"Sua categoria é: SENIOR";
	}
	

