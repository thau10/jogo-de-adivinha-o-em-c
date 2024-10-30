int main(){
    // imprime cabecalho do nosso jogo
    printf("**********");
    printf("*Bem-vindo ao nosso jogo de adivinhação*\n");
    printf("**********\n");
    
    int numerosecreto = 17;
    //armazenar o chute
    int chute;
    printf ("Qual é o seu chute\n");
    
    scanf("%d", & chute);
    printf ("seu chute foi %d \n", chute);
    //condições e loops 

    if(chute==numerosecreto){
    printf ( "você acertou!\n");
    
  }else{
      if( chute > numerosecreto)
     printf( " você errou! que pena \n");
     printf( " O seu chute foi maior que o número secreto, tente novamente \n");
     
     if ( chute < numerosecreto){
      printf ( " você errou! que pena! \n");
      printf(" O seu chute  foi menor que o número secreto, tente novamente \n");
  }
}