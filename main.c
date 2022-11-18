#include <stdlib.h>
#include <stdio.h>
int verificador(char posicoes[3][3])
{
    int verifica = 9;

    for(int l = 0;l <= 2;l++)
    {
        for(int c = 0;c <= 2;c++)
        {
            if(posicoes[l][c] == ' ')
            {
                verifica --;
            }
        }
    }
    if(verifica == 9)
    {
        return 1;
    }
}
void Tabuleiro(char posicoes[3][3])
{

    printf("\n\n   ------- TABULEIRO -------  \t  >>>>> EXEMPLO DE COORDENADAS <<<<<< \n\n\n");
    printf("       %c  |    %c    |  %c   \t          1/1 | 1/2 | 1/3 \n",posicoes[0][0],posicoes[0][1],posicoes[0][2]);
    printf("    -----------------------   \t       ---------------------\n");
    printf("       %c  |    %c    |  %c   \t          2/1 | 2/2 | 2/3 \n",posicoes[1][0],posicoes[1][1],posicoes[1][2]);
    printf("    -----------------------   \t       ---------------------\n");
    printf("       %c  |    %c    |  %c   \t          3/1 | 3/2 | 3/3 \n",posicoes[2][0],posicoes[2][1],posicoes[2][2]);
}
void LimpaTabuleiro(char posicoes[3][3])
{
    for(int l = 0;l<=2;l++)
    {
        for(int c = 0;c<=2;c++)
        {
            posicoes[l][c] = ' ';
        }
    }
}
int verificavencedor(char posicoes[3][3])
{

    if (posicoes[0][0] == 'X' && posicoes[0][1] == 'X' && posicoes[0][2] == 'X')
    {
        return 1;
    }
    if (posicoes[1][0] == 'X' && posicoes[1][1] == 'X' && posicoes[1][2] == 'X')
    {
        return 1;
    }
    if (posicoes[2][0] == 'X' && posicoes[2][1] == 'X' && posicoes[2][2] == 'X')
    {
        return 1;
    }
    if (posicoes[0][0] == 'X' && posicoes[1][0] == 'X' && posicoes[2][0] == 'X')
    {
        return 1;
    }
    if (posicoes[0][1] == 'X' && posicoes[1][1] == 'X' && posicoes[2][1] == 'X')
    {
        return 1;
    }
    if (posicoes[0][2] == 'X' && posicoes[1][2] == 'X' && posicoes[2][2] == 'X')
    {
        return 1;
    }
    if (posicoes[0][2] == 'X' && posicoes[1][1] == 'X' && posicoes[2][0] == 'X')
    {
        return 1;
    }
    if (posicoes[0][0] == 'X' && posicoes[1][1] == 'X' && posicoes[2][2] == 'X')
    {
        return 1;
    }

    // -----------------------------------------------------------------------------------------//

    if (posicoes[0][0] == 'O' && posicoes[0][1] == 'O' && posicoes[0][2] == 'O')
    {
       return 0;
    }
    if (posicoes[1][0] == 'O' && posicoes[1][1] == 'O' && posicoes[1][2] == 'O')
    {
        return 0;
    }
    if (posicoes[2][0] == 'O' && posicoes[2][1] == 'O' && posicoes[2][2] == 'O')
    {
        return 0;
    }
    if (posicoes[0][0] == 'O' && posicoes[1][0] == 'O' && posicoes[2][0] == 'O')
    {
        return 0;
    }
    if (posicoes[0][1] == 'O' && posicoes[1][1] == 'O' && posicoes[2][1] == 'O')
    {
        return 0;
    }
    if (posicoes[0][2] == 'O' && posicoes[1][2] == 'O' && posicoes[2][2] == 'O')
    {
        return 0;
    }
    if (posicoes[0][2] == 'O' && posicoes[1][1] == 'O' && posicoes[2][0] == 'O')
    {
        return 0;
    }
    if (posicoes[0][0] == 'O' && posicoes[1][1] == 'O' && posicoes[2][2] == 'O')
    {
        return 0;
    }
}
int menuInicial(int inicio)
{
    printf("       _  ____   _____  ____         _____            __      ________ _      _    _  \n");
    printf("      | |/ __  |/ ____|/ __  |      |  __  |  /|     |  |    / /  ____| |    | |  | |   / | \n");
    printf("      | | |  | | |  __| |  | |      | |  | | /  |      | |  / /| |__  | |    | |__| |  /   |  \n");
    printf("  _   | | |  | | | |_ | |  | |      | |  | |/ /| |      | || / |  __| | |    |  __  | / / | |  \n");
    printf(" | |__| | |__| | |__| | |__| |      | |__| / ____ |      |  /  | |____| |____| |  | |/ ____| | \n");
    printf(" |____/ |____/ |_____|| |____/      |_____/_/    |_|      ||   |______|______|_|  |_/_/    |_| \n");
    printf("\n\n\n\n Escolha quem iniciara jogando!");
    printf("\n1 - O\n2 - X ");
    scanf("%d",&inicio);
    if(inicio == 1)
    {
        return 0;
    }
    if(inicio == 2)
    {
        return 1;
    }
}
int MenuPrincipal()
{
int opc;
    printf("       _  ____   _____  ____         _____            __      ________ _      _    _  \n");
    printf("      | |/ __  |/ ____|/ __  |      |  __  |  /|     |  |    / /  ____| |    | |  | |   / | \n");
    printf("      | | |  | | |  __| |  | |      | |  | | /  |      | |  / /| |__  | |    | |__| |  /   |  \n");
    printf("  _   | | |  | | | |_ | |  | |      | |  | |/ /| |      | || / |  __| | |    |  __  | / / | |  \n");
    printf(" | |__| | |__| | |__| | |__| |      | |__| / ____ |      |  /  | |____| |____| |  | |/ ____| | \n");
    printf(" |____/ |____/ |_____|| |____/      |_____/_/    |_|      ||   |______|______|_|  |_/_/    |_| \n");
    printf("\n\n\n >>>>>>>>>> ESCOLHA A OPICAO DESEJADA <<<<<<<<<<<<<< ");
    printf("\n 1 - | PLAYER VS PLAYER |");
    printf("\n 2 - | PLAYER VS BOOT   |");
    scanf("%d",&opc);
    return opc;
}
int menuBoot(int inicio)
{
    printf("       _  ____   _____  ____         _____            __      ________ _      _    _  \n");
    printf("      | |/ __  |/ ____|/ __  |      |  __  |  /|     |  |    / /  ____| |    | |  | |   / | \n");
    printf("      | | |  | | |  __| |  | |      | |  | | /  |      | |  / /| |__  | |    | |__| |  /   |  \n");
    printf("  _   | | |  | | | |_ | |  | |      | |  | |/ /| |      | || / |  __| | |    |  __  | / / | |  \n");
    printf(" | |__| | |__| | |__| | |__| |      | |__| / ____ |      |  /  | |____| |____| |  | |/ ____| | \n");
    printf(" |____/ |____/ |_____|| |____/      |_____/_/    |_|      ||   |______|______|_|  |_/_/    |_| \n");
    return 0;

}
int verificadorBoot(char posicoes[3][3])
{
    if (posicoes[0][0] == 'O' && posicoes[0][1] == 'O' && posicoes[0][2] == ' ')
    {
        return 4; // colocar X 0,2
    }
    if (posicoes[0][0] == 'O' && posicoes[0][2] == 'O' && posicoes[0][1] == ' ')
    {
        return 5; // colocar X 0,1
    }
    if (posicoes[0][1] == 'O' && posicoes[0][2] == 'O' && posicoes[0][0] == ' ')
    {
        return 6; // colocar X 0,0
    }
    if (posicoes[1][0] == 'O' && posicoes[1][1] == 'O' && posicoes[1][2] == ' ')
    {
        return 7; // colocar X 1,2
    }
    if (posicoes[1][0] == 'O' && posicoes[1][2] == 'O' && posicoes[1][1] == ' ')
    {
        return 8; // colocar X 1,1
    }
    if (posicoes[1][1] == 'O' && posicoes[1][2] == 'O' && posicoes[1][0] == ' ')
    {
        return 9; // colocar X 1,0
    }
    if (posicoes[2][0] == 'O' && posicoes[2][1] == 'O' && posicoes[2][2] == ' ')
    {
        return 10; // colocar X 2,2
    }
    if (posicoes[2][0] == 'O' && posicoes[2][2] == 'O' && posicoes[2][1] == ' ')
    {
        return 11; // colocar X 2,1
    }
    if (posicoes[2][1] == 'O' && posicoes[2][2] == 'O' && posicoes[2][0] == ' ')
    {
        return 12; // colocar X 2,0
    }
    if (posicoes[0][0] == 'O' && posicoes[1][0] == 'O' && posicoes[2][0] == ' ')
    {
        return 13; // colocar X 2,0
    }
    if (posicoes[1][0] == 'O' && posicoes[2][0] == 'O' && posicoes[0][0] == ' ')
    {
        return 14; // colocar X 0,0
    }
    if (posicoes[0][0] == 'O' && posicoes[2][0] == 'O' && posicoes[1][0] == ' ')
    {
        return 15; // colocar X 1,0
    }
    if (posicoes[0][1] == 'O' && posicoes[1][1] == 'O' && posicoes[2][1] == ' ')
    {
        return 16; // colocar X 2,1
    }
    if (posicoes[0][1] == 'O' && posicoes[2][1] == 'O' && posicoes[1][1] == ' ')
    {
        return 17; // colocar X 1,1
    }
    if (posicoes[1][1] == 'O' && posicoes[2][1] == 'O' && posicoes[0][1] == ' ')
    {
        return 18; // colocar X 0,1
    }
    if (posicoes[0][1] == 'O' && posicoes[1][1] == 'O' && posicoes[2][1] == ' ')
    {
        return 19; // colocar X 2,1
    }
    if (posicoes[0][2] == 'O' && posicoes[1][2] == 'O' && posicoes[2][2] == ' ')
    {
        return 20; // colocar X 2,2
    }
    if (posicoes[0][2] == 'O' && posicoes[2][2] == 'O' && posicoes[1][2] == ' ')
    {
        return 21; // colocar X 1,2
    }
    if (posicoes[1][2] == 'O' && posicoes[2][2] == 'O' && posicoes[0][2] == ' ')
    {
        return 22; // colocar X 0,2
    }
    if (posicoes[0][0] == 'O' && posicoes[1][1] == 'O' && posicoes[2][2] == ' ')
    {
        return 23; // colocar X 2,2
    }
    if (posicoes[0][0] == 'O' && posicoes[2][2] == 'O' && posicoes[1][1] == ' ')
    {
        return 24; // colocar X 1,1
    }
    if (posicoes[1][1] == 'O' && posicoes[2][2] == 'O' && posicoes[0][0] == ' ')
    {
        return 25; // colocar X 0,0
    }
    if (posicoes[0][2] == 'O' && posicoes[1][1] == 'O' && posicoes[2][0] == ' ')
    {
        return 26; // colocar O 2,0
    }
    if (posicoes[0][2] == 'O' && posicoes[2][0] == 'O' && posicoes[1][1] == ' ')
    {
        return 27; // colocar X 1,1
    }
    if (posicoes[1][1] == 'O' && posicoes[2][0] == 'O' && posicoes[0][2] == ' ')
    {
        return 28; // colocar X 0,2
    }
    return 1;
}
int attachBoot(char posicoes[3][3])
{
    if (posicoes[0][0] == 'X' && posicoes[0][1] == 'X' && posicoes[0][2] == ' ')
    {
        return 4; // colocar X 0,2
    }
    if (posicoes[0][0] == 'X' && posicoes[0][2] == 'X' && posicoes[0][1] == ' ')
    {
        return 5; // colocar X 0,1
    }
    if (posicoes[0][1] == 'X' && posicoes[0][2] == 'X' && posicoes[0][0] == ' ')
    {
        return 6; // colocar X 0,0
    }
    if (posicoes[1][0] == 'X' && posicoes[1][1] == 'X' && posicoes[1][2] == ' ')
    {
        return 7; // colocar X 1,2
    }
    if (posicoes[1][0] == 'X' && posicoes[1][2] == 'X' && posicoes[1][1] == ' ')
    {
        return 8; // colocar X 1,1
    }
    if (posicoes[1][1] == 'X' && posicoes[1][2] == 'X' && posicoes[1][0] == ' ')
    {
        return 9; // colocar X 1,0
    }
    if (posicoes[2][0] == 'X' && posicoes[2][1] == 'X' && posicoes[2][2] == ' ')
    {
        return 10; // colocar X 2,2
    }
    if (posicoes[2][0] == 'X' && posicoes[2][2] == 'X' && posicoes[2][1] == ' ')
    {
        return 11; // colocar X 2,1
    }
    if (posicoes[2][1] == 'X' && posicoes[2][2] == 'X' && posicoes[2][0] == ' ')
    {
        return 12; // colocar X 2,0
    }
    if (posicoes[0][0] == 'X' && posicoes[1][0] == 'X' && posicoes[2][0] == ' ')
    {
        return 13; // colocar X 2,0
    }
    if (posicoes[1][0] == 'X' && posicoes[2][0] == 'X' && posicoes[0][0] == ' ')
    {
        return 14; // colocar X 0,0
    }
    if (posicoes[0][0] == 'X' && posicoes[2][0] == 'X' && posicoes[1][0] == ' ')
    {
        return 15; // colocar X 1,0
    }
    if (posicoes[0][1] == 'X' && posicoes[1][1] == 'X' && posicoes[2][1] == ' ')
    {
        return 16; // colocar X 2,1
    }
    if (posicoes[0][1] == 'X' && posicoes[2][1] == 'X' && posicoes[1][1] == ' ')
    {
        return 17; // colocar X 1,1
    }
    if (posicoes[1][1] == 'X' && posicoes[2][1] == 'X' && posicoes[0][1] == ' ')
    {
        return 18; // colocar X 0,1
    }
    if (posicoes[0][1] == 'X' && posicoes[1][1] == 'X' && posicoes[2][1] == ' ')
    {
        return 19; // colocar X 2,1
    }
    if (posicoes[0][2] == 'X' && posicoes[1][2] == 'X' && posicoes[2][2] == ' ')
    {
        return 20; // colocar X 2,2
    }
    if (posicoes[0][2] == 'X' && posicoes[2][2] == 'X' && posicoes[1][2] == ' ')
    {
        return 21; // colocar X 1,2
    }
    if (posicoes[1][2] == 'X' && posicoes[2][2] == 'X' && posicoes[0][2] == ' ')
    {
        return 22; // colocar X 0,2
    }
    if (posicoes[0][0] == 'X' && posicoes[1][1] == 'X' && posicoes[2][2] == ' ')
    {
        return 23; // colocar X 2,2
    }
    if (posicoes[0][0] == 'X' && posicoes[2][2] == 'X' && posicoes[1][1] == ' ')
    {
        return 24; // colocar X 1,1
    }
    if (posicoes[1][1] == 'X' && posicoes[2][2] == 'X' && posicoes[0][0] == ' ')
    {
        return 25; // colocar X 0,0
    }
    if (posicoes[0][2] == 'X' && posicoes[1][1] == 'X' && posicoes[2][0] == ' ')
    {
        return 26; // colocar O 2,0
    }
    if (posicoes[0][2] == 'X' && posicoes[2][0] == 'X' && posicoes[1][1] == ' ')
    {
        return 27; // colocar X 1,1
    }
    if (posicoes[1][1] == 'X' && posicoes[2][0] == 'X' && posicoes[0][2] == ' ')
    {
        return 28; // colocar X 0,2
    }
    return 1;
}
    int main() {
    char posicoes [3][3];
    int linha,coluna;
    int fim,jogada,inicio;
    int resposta, opc;
    opc = MenuPrincipal();
    switch (opc)
    {
        case 1:
            do {
                jogada = menuInicial(inicio);
                LimpaTabuleiro(posicoes);
                fim = 0;
                do {
                    Tabuleiro(posicoes);
                    if(verificador(posicoes) == 1)
                    {
                        fim = 1;
                        printf("\n\nO JOGO DEU VELHA!!!!");
                        break;
                    }
                    if(verificavencedor(posicoes) == 0)
                    {
                        printf("\n\n JOGADOR O VENCEDOR !!!!");
                        fim = 1;
                        break;
                    }
                    if(verificavencedor(posicoes) == 1)
                    {
                        printf("\n\n JOGADOR X VENCEDOR !!!!");
                        fim = 1;
                        break;
                    }
                    if(jogada % 2 == 0)
                    {
                        printf("\nJogador O");
                    }else{printf("\nJogador X"); }
                    printf("\n\nDigite a linha desejada: ");
                    scanf("%d", &linha);
                    printf("Digite a Coluna desejada: ");
                    scanf("%d", &coluna);
                    if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3)
                    {
                        linha = 0;
                        coluna = 0;
                        printf("\n Dado incorreto, informe novamente!!!!");
                    }
                    else if (posicoes[linha - 1][coluna - 1] != ' ')
                    {
                        linha = 0;
                        coluna = 0;
                        printf("\n Dado incorreto, informe novamente!!!!");
                    }
                    else
                    {
                        if (jogada % 2 == 0)
                        {
                            posicoes[linha - 1][coluna - 1] = 'O';
                        }
                        else
                        {
                            posicoes[linha - 1][coluna - 1] = 'X';
                        }
                        jogada++;
                    }
                } while (fim != 1);
                printf("\n\n\nDeseja jogar novamente? ");
                printf("\n 1 - SIM \n2 - NAO\n");
                scanf("%d",&resposta);
                printf("%d",resposta);
            }while(resposta != 2 );
            break;
        case 2:
            do {
                jogada = menuBoot(inicio);
                LimpaTabuleiro(posicoes);
                fim = 0;
                do {
                    Tabuleiro(posicoes);
                    int verificadorBOOT = verificadorBoot(posicoes);
                    int attachBOOT = attachBoot(posicoes);
                    if(verificador(posicoes) == 1)
                    {
                        fim = 1;
                        printf("\n\nO JOGO DEU VELHA!!!!");
                        break;
                    }
                    if(verificavencedor(posicoes) == 0)
                    {
                        printf("\n\n VOCE E O VENCEDOR !!!!");
                        fim = 1;
                        break;
                    }
                    if(verificavencedor(posicoes) == 1)
                    {
                        printf("\n\n INFELIZMENTE VOCE PERDEU !!!!");
                        fim = 1;
                        break;
                    }
                    if(jogada % 2 == 0)
                    {
                        printf("\nJogador O");
                    }else{printf("\nJogador X"); }

                    if(jogada % 2 == 0)
                    {
                        printf("\n\nDigite a linha desejada: ");
                        scanf("%d", &linha);
                        printf("Digite a Coluna desejada: ");
                        scanf("%d", &coluna);
                    }

                    if(jogada % 2 != 0)
                    {
                        if(attachBOOT == 1) {
                            if( verificadorBOOT == 1)
                            {
                                linha = rand()%3 + 1;
                                coluna = rand()%3 + 1;
                            }else
                            {
                                switch (verificadorBOOT) {
                                    case 4:
                                        linha = 1;
                                        coluna = 3;
                                        break;
                                    case 5:
                                        linha = 1;
                                        coluna = 2;
                                        break;
                                    case 6:
                                        linha = 1;
                                        coluna = 1;
                                        break;
                                    case 7:
                                        linha = 2;
                                        coluna = 3;
                                        break;
                                    case 8:
                                        linha = 2;
                                        coluna = 2;
                                        break;
                                    case 9:
                                        linha = 2;
                                        coluna = 1;
                                        break;
                                    case 10:
                                        linha = 3;
                                        coluna = 3;
                                        break;
                                    case 11:
                                        linha = 3;
                                        coluna = 2;
                                        break;
                                    case 12:
                                        linha = 3;
                                        coluna = 1;
                                        break;
                                    case 13:
                                        linha = 3;
                                        coluna = 1;
                                        break;
                                    case 14:
                                        linha = 1;
                                        coluna = 1;
                                        break;
                                    case 15:
                                        linha = 2;
                                        coluna = 1;
                                        break;
                                    case 16:
                                        linha = 3;
                                        coluna = 2;
                                        break;
                                    case 17:
                                        linha = 2;
                                        coluna = 2;
                                        break;
                                    case 18:
                                        linha = 1;
                                        coluna = 2;
                                        break;
                                    case 19:
                                        linha = 3;
                                        coluna = 2;
                                        break;
                                    case 20:
                                        linha = 3;
                                        coluna = 3;
                                        break;
                                    case 21:
                                        linha = 2;
                                        coluna = 3;
                                        break;
                                    case 22:
                                        linha = 1;
                                        coluna = 3;
                                        break;
                                    case 23:
                                        linha = 3;
                                        coluna = 3;
                                        break;
                                    case 24:
                                        linha = 2;
                                        coluna = 2;
                                        break;
                                    case 25:
                                        linha = 1;
                                        coluna = 1;
                                        break;
                                    case 26:
                                        linha = 3;
                                        coluna = 1;
                                        break;
                                    case 27:
                                        linha = 2;
                                        coluna = 2;
                                        break;
                                    case 28:
                                        linha = 1;
                                        coluna = 3;
                                        break;
                                }
                            }
                        }
                        else
                        {
                            switch (attachBOOT) {
                                case 4:
                                    linha = 1;
                                    coluna = 3;
                                    break;
                                case 5:
                                    linha = 1;
                                    coluna = 2;
                                    break;
                                case 6:
                                    linha = 1;
                                    coluna = 1;
                                    break;
                                case 7:
                                    linha = 2;
                                    coluna = 3;
                                    break;
                                case 8:
                                    linha = 2;
                                    coluna = 2;
                                    break;
                                case 9:
                                    linha = 2;
                                    coluna = 1;
                                    break;
                                case 10:
                                    linha = 3;
                                    coluna = 3;
                                    break;
                                case 11:
                                    linha = 3;
                                    coluna = 2;
                                    break;
                                case 12:
                                    linha = 3;
                                    coluna = 1;
                                    break;
                                case 13:
                                    linha = 3;
                                    coluna = 1;
                                    break;
                                case 14:
                                    linha = 1;
                                    coluna = 1;
                                    break;
                                case 15:
                                    linha = 2;
                                    coluna = 1;
                                    break;
                                case 16:
                                    linha = 3;
                                    coluna = 2;
                                    break;
                                case 17:
                                    linha = 2;
                                    coluna = 2;
                                    break;
                                case 18:
                                    linha = 1;
                                    coluna = 2;
                                    break;
                                case 19:
                                    linha = 3;
                                    coluna = 2;
                                    break;
                                case 20:
                                    linha = 3;
                                    coluna = 3;
                                    break;
                                case 21:
                                    linha = 3;
                                    coluna = 2;
                                    break;
                                case 22:
                                    linha = 1;
                                    coluna = 3;
                                    break;
                                case 23:
                                    linha = 3;
                                    coluna = 3;
                                    break;
                                case 24:
                                    linha = 2;
                                    coluna = 2;
                                    break;
                                case 25:
                                    linha = 1;
                                    coluna = 1;
                                    break;
                                case 26:
                                    linha = 3;
                                    coluna = 1;
                                    break;
                                case 27:
                                    linha = 2;
                                    coluna = 2;
                                    break;
                                case 28:
                                    linha = 1;
                                    coluna = 3;
                                    break;
                            }
                        }
                    }
                    if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3)
                    {
                        linha = 0;
                        coluna = 0;
                        printf("\n Dado incorreto, informe novamente!!!!");
                    }
                    else if (posicoes[linha - 1][coluna - 1] != ' ')
                    {
                        linha = 0;
                        coluna = 0;
                        printf("\n Dado incorreto, informe novamente!!!!");
                    }
                    else
                    {
                        if (jogada % 2 == 0)
                        {
                            posicoes[linha - 1][coluna - 1] = 'O';
                        }
                        else
                        {
                            posicoes[linha - 1][coluna - 1] = 'X';
                        }
                        jogada++;
                    }

                } while (fim != 1);
                printf("\n\n\nDeseja jogar novamente? ");
                printf("\n 1 - SIM \n2 - NAO\n");
                scanf("%d",&resposta);
                printf("%d",resposta);
            }while(resposta != 2 );
            break;
        default:
            printf("Opcao selecionada invalida!");
    }
    return 0;
}
