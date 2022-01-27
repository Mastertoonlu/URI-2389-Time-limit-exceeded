#include <stdio.h>
#include <stdlib.h>
//Imagine que cada Carvalho seja um ponto do plano cartesiano primeiramente;
//Imagine que cada Eucalipto seja a altura menos um (y-1) sendo as ordenadas já começando como 2 e
//a quantidade de Eucalipto na horizontal( x ) seja sempre = x-1 ;
//Ou seja, a quantidade de Eucalipo e calculada usando -> (x-1)*(y-1) e
//a quantidade de Carvalho é calculada usando -> x*y ;
// Logo, a equação -> N = x*y + (x-1)*(y-1) determina quantas plantas são necessárias para determinada organização de x e y;

int main(void) {
  int N;
  int produto;
  int aux = 0;
  int resposta = 0;
  int y=2;//altura; ordenada
  int x;//abscissa

  //Número de plantas
  scanf("%i",&N);

do{
    x=0;
    do{

      x++;
      //Varre as possibilidades aumentando o valor de x tendo como primeira organização y = 2
      produto = ( x*y + (x-1)*(y-1) );

      //Ao verificar que o Número de plantas permite tal organização; resposta++
      if(produto == N){resposta++;}
      //Caso ache ou supere o Número e plantas aux recebe um valor de erro
      if(produto >= N){aux = -1;}



    }while(aux != -1 && N>4);

    y++;//valor de y aumenta para varrer a proxima organização possivel
    aux=0;// aux recebe um valor válido novamente
  }while(y < x);//"Considere que, para os propósitos deste problema, um retângulo X×Y é equivalente a um retângulo Y×X"
    //ou seja, a ordem dos fatores não altera o resultado
  printf("%i\n", resposta);
  return 0;
}
