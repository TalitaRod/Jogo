#include <iostream>

using namespace std;



int jogador(int tabuleiro[3][3]) {
    int jogador1=1,i,j;
    cout<<"1=x  2=o";
    cout<<"\nJogador 1 = 1";
    cout<<"\nJogador 2 = 2";


    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            tabuleiro[i][j]=0;
        }
    }
    return jogador1;
}

void resultado(int tabuleiro[3][3]){
    int i,j;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<tabuleiro[i][j]<< " " ;

        }
        cout<<"\n";
    }

}

int ganhador(int tabuleiro[3][3]){
    int cont=0;

    if((tabuleiro[0][0] & tabuleiro[1][1] & tabuleiro[2][2]) ==1) {
        cont=1;
    }
    else if((tabuleiro[0][0] & tabuleiro [0][1] & tabuleiro [0][2]) ==1) {
        cont=1;

    }
    else if((tabuleiro[1][0] & tabuleiro[1][1] & tabuleiro[1][2])==1) {
        cont=1;

    }
    else if((tabuleiro[2][0] & tabuleiro [2][1] & tabuleiro [2][2]) ==1) {
        cont=1;

    }
    else if((tabuleiro[0][0] & tabuleiro[1][0] & tabuleiro[2][0])==1) {
        cont=1;

    }
    else if((tabuleiro[0][1] & tabuleiro [1][1] & tabuleiro [2][1]) ==1) {
        cont=1;

    }
    else if((tabuleiro[0][2] & tabuleiro[1][2] & tabuleiro[2][2])==1) {
        cont=1;

    }
    else if((tabuleiro[0][2] & tabuleiro [1][1] & tabuleiro [2][0]) ==1) {
        cont=1;
    }

    else if((tabuleiro[0][0] & tabuleiro[1][1] & tabuleiro[2][2]) ==1) {
        cont=2;
    }
    else if((tabuleiro[0][0] & tabuleiro [0][1] & tabuleiro [0][2]) ==1) {
        cont=2;
    }
    else if((tabuleiro[1][0] & tabuleiro[1][1] & tabuleiro[1][2])==1) {
        cont=2;
    }
    else if((tabuleiro[2][0] & tabuleiro [2][1] & tabuleiro [2][2]) ==1) {
        cont=2;
    }
    else if((tabuleiro[0][0] & tabuleiro[1][0] & tabuleiro[2][0])==1) {
        cont=2;
    }

    else if((tabuleiro[0][1] & tabuleiro [1][1] & tabuleiro [2][1]) ==1) {
        cont=2;
    }
    else if((tabuleiro[0][2] & tabuleiro[1][2] & tabuleiro[2][2])==1) {
        cont=2;

    }
    else if((tabuleiro[0][2] && tabuleiro [1][1] && tabuleiro [2][0]) ==1) {
        cont=2;
    }
    else {
        cont=3;


    }

    return cont;


}

bool verificador(int tabuleiro[3][3]) {
    int tab=0;
    tab=ganhador(tabuleiro);
    if(tab =! (3 || 0)){
        return true;
    }
    else if(tab =! (1 || 2 || 3)) {
        return false;
    }


}

int custo(int tabuleiro[3][3]) {
    ganhador(tabuleiro);

    if(ganhador(tabuleiro)==3) {
        return 0;
    }
    else if(ganhador(tabuleiro)==1) {
        return 1;
    }
    else if(ganhador(tabuleiro)==2) {
        return -1;
    }

}

void acoes(int tabuleiro[3][3]) {
    int l,c,l2,c2,i,j,l3,c3,l4,c4,res=0;
    res=verificador(tabuleiro);


    cout<<"\nFaca uma jogada: \nlinha: ";
    cin>>l;
    cout<<"coluna: ";
    cin>>c;
    tabuleiro[l][c]=1;

    if(tabuleiro[0][0]==1) {
        tabuleiro[0][1]=2;
    }
    else if(tabuleiro[0][1]==1) {
        tabuleiro[0][2]=2;
    }
    else if(tabuleiro[0][2]==1) {
        tabuleiro[0][1]=2;
    }
    else if(tabuleiro[1][0]==1) {
        tabuleiro[1][1]=2;
    }
    else if(tabuleiro[1][1]==1){
        tabuleiro[1][2]=2;
    }
    else if(tabuleiro[1][2]==1){
        tabuleiro[1][1]=2;
    }
    else if(tabuleiro[2][0]==1) {
        tabuleiro[2][1]=2;
    }
    else if(tabuleiro[2][1]==1) {
        tabuleiro[2][2]=2;
    }
    else if(tabuleiro[2][2]==1) {
        tabuleiro[2][1]=2;
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<tabuleiro[i][j]<< " " ;

        }
        cout<<"\n";
    }

    cout<<"Linha: ";
    cin>>l2;
    cout<<"Coluna: ";
    cin>>c2;

    tabuleiro[l2][c2]=1;

    if((tabuleiro[0][0] & tabuleiro[1][0]) ==1) {
        tabuleiro[2][0]=2;
    }
    else if((tabuleiro[0][1] & tabuleiro[1][1]) ==1) {
        tabuleiro[2][1]=2;
    }
    else if((tabuleiro[0][2] & tabuleiro[1][2]) ==1) {
        tabuleiro[2][2]=2;
    }
    else if((tabuleiro[0][0] & tabuleiro[0][1]) ==1) {
        tabuleiro[0][2]=2;
    }
    else if((tabuleiro[1][0] & tabuleiro[1][1]) ==1) {
        tabuleiro[1][2]=2;
    }
    else if((tabuleiro[2][0] & tabuleiro[2][1]) ==1) {
        tabuleiro[2][2]=2;
    }
    else if((tabuleiro[2][0] & tabuleiro[1][0]) ==1) {
        tabuleiro[0][0]=2;
    }
    else if((tabuleiro[2][1] & tabuleiro[1][1]) ==1) {
        tabuleiro[0][1]=2;
    }
    else if((tabuleiro[2][2] & tabuleiro[1][2]) ==1) {
        tabuleiro[0][2]=2;
    }
    else if((tabuleiro[2][0] & tabuleiro[0][1]) ==1) {
        tabuleiro[0][0]=2;
    }
    else if((tabuleiro[1][2] & tabuleiro[1][1]) ==1) {
        tabuleiro[1][0]=2;
    }
    else if((tabuleiro[2][2] & tabuleiro[2][1]) ==1) {
        tabuleiro[2][0]=2;
    }
    else if(tabuleiro[1][0]==1 & tabuleiro[1][1]==1 && tabuleiro[1][2]==2){
        tabuleiro[2][0]=2;
    }
    else if(tabuleiro[2][0]==1 & tabuleiro[2][1]==1 && tabuleiro[2][2]==2) {
        tabuleiro[1][0]=2;
    }


    ///DIAGONAIS
    else if(tabuleiro[0][0]==1 & tabuleiro[1][1] ==1) {
        tabuleiro[2][2]=2;
    }
    else if(tabuleiro[2][2]==1 & tabuleiro[1][1] ==1) {
        tabuleiro[0][0]=2;
    }
    else if(tabuleiro[0][2]==1 & tabuleiro[1][1] ==1) {
        tabuleiro[2][0]=2;
    }
    else if(tabuleiro[2][0]==1 & tabuleiro[1][1] ==1) {
        tabuleiro[0][2]=2;
    }

    else if(tabuleiro[1][1]==1 & tabuleiro[2][2] ==1) {
        tabuleiro[0][0]=2;
    }
    else if(tabuleiro[0][0]==1 & tabuleiro[1][1] ==1) {
        tabuleiro[2][2]=2;
    }


    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<tabuleiro[i][j]<< " " ;

        }
        cout<<"\n";
    }

    cout<<"Linha: ";
    cin>>l3;
    cout<<"Coluna: ";
    cin>>c3;

    tabuleiro[l3][c3]=1;


    if((tabuleiro[2][2] & tabuleiro[2][1])==1) {
        tabuleiro[2][0]=2;
    }
    else if((tabuleiro[2][1] & tabuleiro[1][1])==1) {
        tabuleiro[0][1]=2;
    }
    else if((tabuleiro[1][2] & tabuleiro[1][1])==1) {
        tabuleiro[0][1]=2;
    }
    else if((tabuleiro[1][0] & tabuleiro[1][1])==1) {
        tabuleiro[1][2]=2;
    }
    else if((tabuleiro[2][0] & tabuleiro[2][1])==1) {
        tabuleiro[2][2]=2;
    }
    else if((tabuleiro[2][0] & tabuleiro[1][1])==1) {
        tabuleiro[0][2]=2;
    }
       else if(tabuleiro[0][0]==1 & tabuleiro[1][1]==1) {
        tabuleiro[2][2]=2;
    }
    else if(tabuleiro[2][2]==1 & tabuleiro[1][1]==1) {
        tabuleiro[0][0]=2;
    }
    else if(tabuleiro[0][2]==1 & tabuleiro[1][1]==1) {
        tabuleiro[2][0]=2;
    }

    else if(tabuleiro[1][1]==1 & tabuleiro[2][2]==1) {
        tabuleiro[0][0]=2;
    }
    else if(tabuleiro[0][0]==1 & tabuleiro[1][1]==1) {
        tabuleiro[2][2]=2;
    }
        if((tabuleiro[0][0] & tabuleiro[1][0])==1) {
        tabuleiro[2][0]=2;
    }
    else if((tabuleiro[0][1] & tabuleiro[1][1])==1) {
        tabuleiro[2][1]=2;
    }
    else if((tabuleiro[0][2] & tabuleiro[1][2])==1) {
        tabuleiro[2][2]=2;
    }
    else if((tabuleiro[0][0] & tabuleiro[0][1])==1) {
        tabuleiro[0][2]=2;
    }
    else if((tabuleiro[1][0] & tabuleiro[1][1])==1) {
        tabuleiro[1][2]=2;
    }
    else if((tabuleiro[2][0] & tabuleiro[2][1])==1) {
        tabuleiro[2][2]=2;
    }
    else if((tabuleiro[2][0] & tabuleiro[1][0])==1) {
        tabuleiro[0][0]=2;
    }
    else if((tabuleiro[2][1] & tabuleiro[1][1])==1) {
        tabuleiro[0][1]=2;
    }
    else if((tabuleiro[2][2] & tabuleiro[1][2])==1) {
        tabuleiro[0][2]=2;
    }
    else if((tabuleiro[2][0] & tabuleiro[0][1])==1) {
        tabuleiro[0][0]=2;
    }
    else if((tabuleiro[1][2] & tabuleiro[1][1])==1) {
        tabuleiro[1][0]=2;
    }
    else if((tabuleiro[2][2] & tabuleiro[2][1])==1) {
        tabuleiro[2][0]=2;
    }


    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<tabuleiro[i][j]<< " " ;

        }
        cout<<"\n";
    }

    cout<<"Linha: ";
    cin>>l4;
    cout<<"Coluna: ";
    cin>>c4;
    tabuleiro[l4][c4]=1;

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<tabuleiro[i][j]<< " " ;

        }
        cout<<"\n";
    }
    if(verificador(tabuleiro)==true) {
        cout<<"O jogo nao terminou";

    }
    else {
        cout<<"O jogo acabou!";
        custo(tabuleiro);
    }
}



int main()
{
    int tab [3][3];
    jogador(tab);
    acoes(tab);
    ganhador(tab);
    cout<<custo(tab);
    return 0;
}
