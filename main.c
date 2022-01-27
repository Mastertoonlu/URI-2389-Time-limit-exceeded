#include <stdio.h>
#include <stdlib.h>
//Imagine que cada Carvalho seja um ponto do plano cartesiano primeiramente;
//Imagine que cada Eucalipto seja a altura menos um (y-1) sendo as ordenadas j� come�ando como 2 e
//a quantidade de Eucalipto na horizontal( x ) seja sempre = x-1 ;
//Ou seja, a quantidade de Eucalipo e calculada usando -> (x-1)*(y-1) e
//a quantidade de Carvalho � calculada usando -> x*y ;
// Logo, a equa��o -> N = x*y + (x-1)*(y-1) determina quantas plantas s�o necess�rias para determinada organiza��o de x e y;

int main(void) {
  int N;
  int produto;
  int aux = 0;
  int resposta = 0;
  int y=2;//altura; ordenada
  int x;//abscissa

  //N�mero de plantas
  scanf("%i",&N);

do{
    x=0;
    do{

      x++;
      //Varre as possibilidades aumentando o valor de x tendo como primeira organiza��o y = 2
      produto = ( x*y + (x-1)*(y-1) );

      //Ao verificar que o N�mero de plantas permite tal organiza��o; resposta++
      if(produto == N){resposta++;}
      //Caso ache ou supere o N�mero e plantas aux recebe um valor de erro
      if(produto >= N){aux = -1;}



    }while(aux != -1 && N>4);

    y++;//valor de y aumenta para varrer a proxima organiza��o possivel
    aux=0;// aux recebe um valor v�lido novamente
  }while(y < x);//"Considere que, para os prop�sitos deste problema, um ret�ngulo X�Y � equivalente a um ret�ngulo Y�X"
    //ou seja, a ordem dos fatores n�o altera o resultado
  printf("%i\n", resposta);
  return 0;
}
