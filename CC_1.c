#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
char tab[25][50];
int leite=1, farinha=0, trigo=0,cont=0,jog=1,cabra=-102,lin,col,pos1,pos2,hp=0,rpss=0;
//funcoes
void start()
{
    srand(time(NULL));
    //limpeza inicial de tab
    for (int i=0; i<25; i++)
    {
        for(int j=0; j<50; j++)
        {
            tab[i][j]=' ';
        }
    }
    //lama 3-3
    for(int i=0; i<3; i++)
    {
        pos1=rand()%(25-3);
        pos2=rand()%(50-2);
        tab[pos1][pos2]='~';
        tab[pos1][pos2+1]='~';
        tab[pos1][pos2+2]='~';
        tab[pos1+1][pos2]='~';
        tab[pos1+1][pos2+1]='~';
        tab[pos1+1][pos2+2]='~';
    }
    //lama 2-2-2
    for(int i=0; i<3; i++)
    {
        pos1=rand()%(25-3);
        pos2=rand()%(50-2);
        tab[pos1][pos2]='~';
        tab[pos1+1][pos2]='~';
        tab[pos1+2][pos2]='~';
        tab[pos1][pos2+1]='~';
        tab[pos1+1][pos2+1]='~';
        tab[pos1+2][pos2+1]='~';
    }
    // 5broto
    while(cont<5)
    {
        pos1=rand()%25;
        pos2=rand()%50;
        if (tab[pos1][pos2]=' ')
        {
            tab[pos1][pos2]='t';
            cont++;
        }
    }
    cont=0;
    //11raposas
    while(cont<11)
    {
        pos1=rand()%25;
        pos2=rand()%50;
        if(tab[pos1][pos2]=' ')
        {
            tab[pos1][pos2]='R';
            cont++;
        }
    }
    cont=0;
    //5 cabras
    while(cont<5)
    {
        pos1=rand()%25;
        pos2=rand()%50;
        if (tab[pos1][pos2]=' ')
        {
            tab[pos1][pos2]=("%c",cabra);
            cont++;
        }
    }
    cont=0;
}
void tela()
{
    printf("\n                                                   %c%c%c                                %c%c%c\n",201,205,187,201,205,187);
    printf("                                                   %c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c\n",186,200,205,203,205,205,205,205,205,205,205,205,205,187,201,205,187,201,205,205,205,205,205,187,201,205,205,205,205,205,205,205,203,205,188,186);
    printf("                                                   %c%c%c%c%c %c%c%c %c%c%c %c%c %c%c %c%c%c %c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,185,201,205,187,201,205,187,186,186,186,186,201,205,187,186,186,201,205,205,205,205,202,205,205,205,188,201,205,205,205,205,205,205,205,187);
    printf("                                                       %c %c %c %c %c %c%c %c%c %c %c %c%c  %c%c%c%c%c     %c  %c%c%c%c%c%c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,200,205,205,205,187,186,201,205,205,205,205,188);
    printf("                                                       %c %c %c %c %c %c%c %c%c %c %c %c%c  %c%c%c%c%c     %c  %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,201,205,205,205,188,186,186);
    printf("                                                       %c %c %c%c%c %c %c%c %c%c %c %c %c%c  %c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c\n",186,186,200,205,188,186,186,186,186,186,186,186,186,186,200,205,205,205,205,187,201,187,186,200,205,205,205,205,187);
    printf("                                                       %c%c%c     %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c\n",200,205,188,200,205,188,200,205,188,200,205,188,200,205,188,200,205,205,205,205,205,205,205,188,200,188,200,205,205,205,205,205,205,205,188);
    printf("                                                  00000000001111111111222222222233333333334444444444\n");
    printf("                                                  01234567890123456789012345678901234567890123456789\n");
    printf("                                                 %c",201);
    for (int i=0; i<50; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",187);
    for(int i=0; i<25; i++)
    {
        printf("                                               %2d%c", i,186);
        for(int j=0; j<50; j++)
        {
            printf("%c",tab[i][j]);
        }
        printf("%c",186);
        printf("\n");
    }
    printf("                                                 %c",204);

    for (int i=0; i<50; i++)
    {
        printf("%c",205);
    }
    printf("%c",185);
    //botaos
    printf("\n                                         (?)Ajuda%c   Leite=%2d    Farinha=%2d    Trigo=%2d    R.E=%3d  %c ",186,leite,farinha,trigo,rpss,186);
    printf("Rodada %d\n", jog);
    printf("                                                 %c",200);
    for (int i=0; i<50; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",188);
    printf("                                     %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187,201,205,205,205,205,205,205,205,205,205,205,205,205,187,201,205,205,205,205,205,205,205,187,201,205,205,205,205,205,205,205,205,205,205,187,201,205,205,205,205,205,205,205,205,205,205,205,187,201,205,205,205,205,205,205,187);
    printf("                                     %c(c)olher%c  %c(f)ertilizar%c  %c(m)over%c  %co(rdenhar)%c  %c(a)limentar%c  %c(s)air%c\n",186,186,186,186,186,186,186,186,186,186,186,186);
    printf("                                     %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,205,188,200,205,205,205,205,205,205,205,205,205,205,205,205,188,200,205,205,205,205,205,205,205,188,200,205,205,205,205,205,205,205,205,205,205,188,200,205,205,205,205,205,205,205,205,205,205,205,188,200,205,205,205,205,205,205,188);


}
void fertilizar()
{
    if(farinha>0)
    {
        printf("                                     Linha,Coluna: ");
        scanf("%d,%d",&lin,&col);
        if(((lin>=0)&&(lin<25))&&((col>=0)&&(col<50)))
        {
            if(tab[lin][col]=='t')
            {
                tab[lin][col]='T';
                jog++;
                farinha--;
                rpss++;
                system("cls");
            }
            else
            {
                system("cls");
                printf("\n                                            Coordenada n%co possui trigo(t)\n\n\a",160);
            }
        }
        else
        {
            system("cls");
            printf("\n                                         Coordenadas Inv%clidas\n\n\a",160);
        }
    }
    else
    {
        system("cls");
        printf("\n                                         Sem saldo de Farinha\n\n\a");
    }
}
void colher()
{
    printf("                                     Linha,Coluna: ");
    scanf("%d,%d",&lin,&col);
    if(((lin>=0)&&(lin<25))&&((col>=0)&&(col<50)))
    {
        if(tab[lin][col]=='T')
        {
            tab[lin][col]=' ';
            jog++;
            trigo++;
            rpss++;
            system("cls");
        }
        else
        {
            system("cls");
            printf("\n                                                 Coordenada N%co Possui Trigo para colher(T)\n\n\a",198);
        }
    }
    else
    {
        system("cls");
        printf("\n                                         Coordenadas Inv%clidas\n\n\a",160);
    }
}
void ordenhar()
{
    printf("                                     Linha,Coluna: ");
    scanf("%d,%d",&lin,&col);
    if(((lin>=0)&&(lin<25))&&((col>=0)&&(col<50)))
    {
        if(tab[lin][col]=='U')
        {
            tab[lin][col]=cabra;
            jog++;
            leite++;
            rpss++;
            system("cls");
        }
        else
        {
            system("cls");
            printf("\n                                            Coordenada N%co Possui Cabra Sem Chifre(U)\n\n\a",198);
        }
    }
    else
    {
        system("cls");
        printf("\n                                         Coordenadas Inv%clidas\n\n\a",160);
    }
}
void alimentar()
{
    cont=0;
    printf("                                     Linha,Coluna: ");
    scanf("%d,%d",&lin,&col);
    if(((lin>=0)&&(lin<25))&&((col>=0)&&(col<50)))
    {
        //cabrita u
        if(tab[lin][col]=='u')
        {
            if(leite>0)
            {
                tab[lin][col]=cabra;
                jog++;
                leite--;
                cont++;
                system("cls");
            }
            else
            {
                system("cls");
                printf("\n                                                              Coordenada N%co Possui Leite(u)\n\n\a",198);
            }
        }
        else
        {
            system("cls");
            printf("\n                                                              Coordenada N%co Cabra ou Cabrita(u/%c)\n\n\a",198,-102);
        }
        //Cabra Ü
        if((tab[lin][col]==cabra) &&(tab[lin][col+2]==' ')&&(tab[lin][col+1]==cabra)&& (cont==0))
        {
            if(trigo>0)
            {
                tab[lin][col+2]='u';
                jog++;
                trigo--;
                system("cls");
            }
            else
            {
                system("cls");
                printf("\n                                                              Coordenada N%co Possui Trigo(T)\n\n\a",198);
            }
        }
        else
        {
            system("cls");
            printf("\n                                                              Coordenada N%co Possui Cabra a direita ou Posic%co Livre 2 casas a direita (u/%c)\n\n\a",198,198,-102);
        }
    }
    else
    {
        system("cls");
        printf("\n                                                           Coordenadas Inv%clidas\n\n\a",160);
    }
}
void mover()
{
    cont=0;
    printf("                                     Linha,Coluna: ");
    scanf("%d,%d",&lin,&col);
    if(((lin>=0)&&(lin<25))&&((col>=0)&&(col<50)))
    {
        //cabrita u
        if(tab[lin][col]=='u')
        {
            printf("                                     Linha,Coluna: ");
            scanf("%d,%d",&pos1,&pos2);
            if(((pos1>=0)||(pos1<25))&&((pos2>=0)||(pos2<50))&&(tab[pos1][pos2]==' '))
            {
                if(((lin==pos1)&&(col==pos2+1))||
                        ((lin==pos1)&&(col==pos2-1))||
                        ((lin==pos1-1)&&(col==pos2))||
                        ((lin==pos1+1)&&(col==pos2))||
                        ((lin==pos1-1)&&(col==pos2-1))||
                        ((lin==pos1+1)&&(col==pos2+1))||
                        ((lin==pos1+1)&&(col==pos2-1))||
                        ((lin==pos1-1)&&(col==pos2+1)))
                {
                    tab[pos1][pos2]='u';
                    tab[lin][col]=' ';
                    jog++;
                    cont++;
                    system("cls");
                }
                else
                {
                    system("cls");
                    printf("\n                                                     Posi%c%co N%co %c Vizinha\n\n\a",135,198,198,130);
                }
            }
            else
            {
                system("cls");
                printf("\n                                                     Coordenadas Inv%lidas\n\n\a",160);
            }
        }
        //cabrita U
        if(tab[lin][col]=='U')
        {
            printf("                                     Linha,Coluna: ");
            scanf("%d,%d",&pos1,&pos2);
            if(((pos1>=0)||(pos1<25))&&((pos2>=0)||(pos2<50))&&(tab[pos1][pos2]==' '))
            {
                if(((lin==pos1)&&(col==pos2+1))||
                        ((lin==pos1)&&(col==pos2-1))||
                        ((lin==pos1-1)&&(col==pos2))||
                        ((lin==pos1+1)&&(col==pos2))||
                        ((lin==pos1-1)&&(col==pos2-1))||
                        ((lin==pos1+1)&&(col==pos2+1))||
                        ((lin==pos1+1)&&(col==pos2-1))||
                        ((lin==pos1-1)&&(col==pos2+1)))
                {
                    tab[pos1][pos2]='U';
                    tab[lin][col]=' ';
                    jog++;
                    cont++;
                    system("cls");
                }
                else
                {
                    system("cls");
                    printf("\n                                                     Posi%c%co N%co %c Vizinha\n\n\a",135,198,198,130);
                }
            }
            else
            {
                system("cls");
                printf("\n                                                     Coordenadas Inv%lidas\n\n\a",160);
            }
        }
        //cabrita Ü
        if(tab[lin][col]==cabra)
        {
            printf("                                     Linha,Coluna: ");
            scanf("%d,%d",&pos1,&pos2);
            if(((pos1>=0)&&(pos1<25))&&((pos2>=0)&&(pos2<50))&&(tab[pos1][pos2]==' '))
            {
                if(((lin==pos1)&&(col==pos2+1))||
                        ((lin==pos1)&&(col==pos2-1))||
                        ((lin==pos1-1)&&(col==pos2))||
                        ((lin==pos1+1)&&(col==pos2))||
                        ((lin==pos1-1)&&(col==pos2-1))||
                        ((lin==pos1+1)&&(col==pos2+1))||
                        ((lin==pos1+1)&&(col==pos2-1))||
                        ((lin==pos1-1)&&(col==pos2+1)))
                {
                    tab[pos1][pos2]=cabra;
                    tab[lin][col]=' ';
                    jog++;
                    cont++;
                    system("cls");
                }
                else
                {
                    system("cls");
                    printf("\n                                                     Posi%c%co N%co %c Vizinha\n\n\a",135,198,198,130);
                }
            }
            if(((pos1>=0)||(pos1<25))&&((pos2>=0)||(pos2<50))&&(tab[pos1][pos2]=='R'))
            {
                if(((lin==pos1)&&(col==pos2+1))||
                        ((lin==pos1)&&(col==pos2-1))||
                        ((lin==pos1-1)&&(col==pos2))||
                        ((lin==pos1+1)&&(col==pos2))||
                        ((lin==pos1-1)&&(col==pos2-1))||
                        ((lin==pos1+1)&&(col==pos2+1))||
                        ((lin==pos1+1)&&(col==pos2-1))||
                        ((lin==pos1-1)&&(col==pos2+1)))
                {
                    tab[pos1][pos2]='U';
                    tab[lin][col]=' ';
                    jog++;
                    rpss++;
                    rpss++;
                    rpss++;
                    rpss++;
                    farinha++;
                    cont++;
                    system("cls");
                }
                else
                {
                    system("cls");
                    printf("\n                                                     Posi%c%co N%co %c Vizinha\n\n\a",135,198,198,130);
                }
            }
        }
        if(cont==0)
        {
            system("cls");
            printf("\n                                                        Coordenada N%co Possui Cabras V%clidas(u/U/%c)\n\n\a",198,160,-102,160);
        }
    }
    else
    {
        system("cls");
        printf("\n                                                            Coordenadas inv%clidas\n\n\a",160);
    }
}
void noite()
{
    rpss++;
    rpss++;
    //limpando raposa
    for (int i=0; i<25; i++)
    {
        for(int j=0; j<50; j++)
        {
            if(tab[i][j]=='R')
            {
                tab[i][j]=' ';
            }
        }
    }
    //novas raposas
    while(cont<11)
    {
        pos1=rand()%25;
        pos2=rand()%50;
        if ((tab[pos1][pos2]==' ')||(tab[pos1][pos2]=='u')||(tab[pos1][pos2]=='U')||(tab[pos1][pos2]==cabra))
        {
            tab[pos1][pos2]='R';
            cont++;
        }
    }
    cont=0;
    //evoluções
    for (int i=0; i<25; i++)
    {
        for(int j=0; j<50; j++)
        {
            //broto
            if(tab[i][j]==' ')
            {
                hp=rand()%1250;
                if(hp==1)
                {
                    tab[i][j]='t';
                }
            }
            //cabra
            if(tab[i][j]=='U')
            {
                hp=rand()%100;
                if(hp<30)
                {
                    tab[i][j]=cabra;
                }
            }
        }
    }
}
void ajuda()
{
    system("cls");
    printf("                                                                  INSTRU%c%cES PARA JOGAR\n\n\n",128,229);
    printf("                                                        OBJETIVO DO JOGO ALCAN%cAR 100 PONTOS NO O.C\n\n",128);
    printf("            R= Raposa     %c= Lama     u= Cabrita     U= Cabra S/Chifre     %c= Cabra C/Chifre     t= Broto de Trigo     T= Trigo    R.E= Raposas Eliminadas\n\n\n",126,cabra);
    printf("                          Fertilizar Broto de Trigo (t): \n\n");
    printf("                                *Necessita de Saldo de Farinha;\n");
    printf("                                *Broto de Trigo Selecionado Evolui Para Trigo (T);\n");
    printf("                                *- 1 Farinha;\n\n\n");
    printf("                          Colher Trigo (T): \n\n");
    printf("                                *+ 1 Trigo;\n\n\n");
    printf("                          Ordenhar Cabra S/Chifre(U): \n\n");
    printf("                                *Cabra Selecionado Evolui Para Cabra C/Chifre(%c);\n",cabra);
    printf("                                *+ 1 Leite;\n\n\n");
    printf("                          Alimentar Cabrita(u) ou Cabra C/Chifre(%c): \n\n",cabra);
    printf("                                Cabrita(u):\n\n");
    printf("                                    *Necessita de Saldo de Leite;\n");
    printf("                                    *Cabrita Selecionada Evolui Para Cabra C/Chifre(%c);\n",cabra);
    printf("                                    *- 1 Leite;\n\n\n");
    printf("                                Cabra C/Chifre(%c):\n\n",cabra);
    printf("                                    *Necessita de Saldo de Trigo;\n");
    printf("                                    *Necessita de Posi%%o Livres a Direta;\n",135,198);
    printf("                                    *Cabra C/Chifre Selecionada Evolui Para Cabrita (u);\n");
    printf("                                    *- 1 Trigo;\n\n\n");
    printf("                          Movimentar Cabrita(u), Cabra S/Chifre(u) Cabra C/Chifre(%c): \n\n",cabra);
    printf("                                    *Qualquer Cabra Selecionada apenas pode movimentar 1 casa ao seu redor que esteja livre;\n\n");
    printf("                                     Cabra C/Chifre(%c):\n\n",cabra);
    printf("                                         *Se Possuir Raposa (R) ao seu redor, Cabra C/Chifre pode elimina-l%c;\n",160);
    printf("                                         *Ap%cs elimina-l%c:\n",162,160);
    printf("                                            *+ 1 Farinha;\n");
    printf("                                                                                                                        Bom Divertimento,\n");
    printf("                                                                                                                  Eduardo Alves Carvalho\n");
    printf("                                                                  PRESSIONE ENTER PARA CONTINUAR\n");


    getchar();
}
//principal
int main(int argc, char *argv[])
{
    char mov=' ';
    start();
    ajuda();
    getchar();
    system("cls");
    while(mov!='s')
    {
        if(jog>0&&jog<8)
        {
            system("color f1");
        }
        else
        {
            system("color 06");
            jog=0;
            noite();
        }
        tela();
        mov=getch();
        switch(mov)
        {
        case 'f'://fertilziar
            fertilizar();
            break;
        case 'c'://colher
            colher();
            break;
        case 'o'://ordenhar
            ordenhar();
            break;
        case 'a'://alimentar
            alimentar();
            break;
        case 'm'://mover
            mover();
            break;
        case '?':
            ajuda();
            jog--;
            system("cls");
        case 'n'://next(oculto do usuario)
            jog++;
            leite++;
            farinha++;
            trigo++;
            system("cls");
            break;
        default:
            system("cls");
            printf("                                                                  Op%c%co Inv%clida\a",135,198,160 );
        }
        if(rpss==100)
        {
            mov='s';
        }
    }
    system("cls");
    if(rpss==100)
    {
        printf("                                                              Parab%cns Vo%c%c Alcan%cou o Obejtivo\n",130,135,136,128);
    }
    printf("                                                            FOI LEGAL CULTIVAR COM VO%c%c INVOCADOR\n",128,210);
    printf("                                                                     NOS VEMOS EM BREVE");
    return 0;
}
