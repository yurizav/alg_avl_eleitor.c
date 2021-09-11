#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
  setlocale (LC_ALL,"Portuguese");
  int idade; 
    printf ("Digite a Idade: ");
    scanf ("%d", &idade);
      if ( idade >= 16 && idade <= 18 || idade >= 70)
          printf("Pode Votar!\n\n\n");
      else
        if ( idade > 18)
          printf("Deve votar!\n\n\n");
        else
          printf("Não Pode Votar!\n\n\n");
      system("pause");
  return 0;
}