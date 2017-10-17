//Suma del 1 al 20 de los numeros pares (incluyendo el 20)
//Juan Manuel Badillo Serrano
//Martes 17 de octubre del 2017
#include <iostream>
using namespace std;
int main()
{
  int sum=0;
  int count=1;
  while (count<=20)
    { if (count%2 == 0)
      {
	sum=sum+count;
      }
      count++;
}
 cout<<"suma = "<<sum<<endl;
 return 0;
}
//(==) es para comparar
//La suma es 110
