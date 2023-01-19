#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 7

int avoirtaille(){
int taille;
printf("\n choisissez la dificult \n\n 0 FACILE \n 1 MOYEN \n 2 DIFFICILE \n 3 EXTREME \n\n ");
scanf("%d",&taille);
switch (taille){
   case 0: taille=12; break;
   case 1: taille=16; break;
   case 2: taille=25; break;
   case 3: taille=30; break;
   default:taille=12;
}
return taille;
}
void remplirtableau (int tab[],int taille){
int i;
for(i=0;i<=taille;i++){
    tab[i]=i+1;
}}

void melangertableau (int tab[],int taille){
int i,j,x;
srand(time(NULL));
for(i=0;i<taille;i++){
        j=rand()%taille;
        x=tab[i];
        tab[i]=tab[j];
        tab[j]=x;
}
}

void affichertableau (int tab[],int taille){
int i;
for(i=0;i<taille;i++){
    printf("%d ",tab[i]);
} printf("\n");}

void remplirtableau2d (int tab[],int tab2d[M][M],int tabledessaie[M][M],int tablefaux[M][M],int taille){
int i,j,imax,jmax,clk=0;
switch (taille){
   case 12: imax=4;jmax=3; break;
   case 16: imax=4;jmax=4; break;
   case 25: imax=5;jmax=5; break;
   case 30: imax=6;jmax=5; break;
   default:imax=4;jmax=3;}

   for(i=0;i<imax;i++){
        for(j=0;j<jmax;j++){
       tab2d[i][j]=tab[clk];tabledessaie[i][j]=77;tablefaux[i][j]=77; clk++; }

}
 printf("\n");}

 void creerdespaires (int tab[],int taille){
int i;
for(i=0;i<taille;i++){
    if (tab[i]>(taille/2)) tab[i]=tab[i]-taille/2 ;
    else tab[i]=tab[i];
}

}

 void affichertable2d (int tableau[M][M],int taille){
 int i,j,imax,jmax;
 switch (taille){
   case 12: imax=4;jmax=3; break;
   case 16: imax=4;jmax=4; break;
   case 25: imax=5;jmax=5; break;
   case 30: imax=6;jmax=5; break;
   default:imax=4;jmax=3;}printf("\n\n    ");
   for(j=0;j<jmax;j++){
    printf("%5d",j+1);}
    printf("\n\n");
    for(i=0;i<imax;i++){
        printf("\n %d   ",i+1);
        for(j=0;j<jmax;j++){
           printf(" %3d ",tableau[i][j]); } } }



void delay(int seconds){
    int mseconds = seconds*1000 ;// Convertir vers milliseconds
    clock_t debut = clock(); // Stockage de de nombre de tick actuelle
    while (clock() < debut + mseconds);
}
int comparerlesvaleur(int tab2d[M][M],int tabledessaie[M][M],int tablefaux[M][M],int taille,int nbrpair){
     int l1,c1,l2,c2;
    printf("\n\n Veuillez donner les cordonnees de la premier valeur ");
    scanf("%d %d",&l1,&c1);
    printf("\n Veuillez donner les cordonner de la deuxiemme valeur ");
    scanf("%d %d",&l2,&c2);
    l1--;c1--;l2--;c2--;system("cls");
    if(tab2d[l1][c1]==tab2d[l2][c2]){
        printf("\n BRAVOS! les valeurs semblabe \n");
        tabledessaie[l1][c1]=tab2d[l1][c1];
        tabledessaie[l2][c2]=tab2d[l1][c1];
        nbrpair++;
        return nbrpair;}

    else {
            printf("\n les valeurs ne sont pas semblabe \n");
            tablefaux[l1][c1]=tab2d[l1][c1];
            tablefaux[l2][c2]=tab2d[l2][c2];
            return nbrpair;}
    }

void melangertableaufaux (int tablefaux[M][M],int taille){

int i,j,imax,jmax;
switch (taille){
   case 12: imax=4;jmax=3; break;
   case 16: imax=4;jmax=4; break;
   case 25: imax=5;jmax=5; break;
   case 30: imax=6;jmax=5; break;
   default:imax=4;jmax=3;}

   for(i=0;i<imax;i++){
        for(j=0;j<jmax;j++){
       tablefaux[i][j]=77; }}}



int main()
{
    int klc,nbrpair=0,comparer;
    printf("  ******************* MENU *******************  \n\n\n VOULEZ VOUS JOUER?\n\n \n 1 pour Memory\n 2 pour wordle \n 0 pour quitter\n\n ");
    scanf("%d",&klc);
if (klc==0) return 0;

if (klc==1){
    int tab[40],tab2d[M][M],tabledessaie[M][M],tablefaux[M][M];
    int taille=avoirtaille();
    remplirtableau (tab,taille);
    melangertableau(tab,taille);
    creerdespaires(tab,taille);
    remplirtableau2d(tab,tab2d,tabledessaie,tablefaux,taille);
    //le jeux commance
    delay(1); printf("\n 10 second pour memorizer le tableau\n");
    affichertable2d (tab2d,taille);
    delay(10);
    system("cls");
    affichertable2d (tabledessaie,taille);

    while(nbrpair<(taille/2)){
     delay(1);
     printf("\n\n le nombre de pair actuellement trouvee est %d/%d",nbrpair,taille/2);
     comparer=nbrpair;
     nbrpair=comparerlesvaleur(tab2d,tabledessaie,tablefaux,taille,nbrpair);
     if(comparer==nbrpair) {affichertable2d (tablefaux,taille);system("pause");system("cls");melangertableaufaux (tablefaux,taille);affichertable2d (tabledessaie,taille);}
        else {affichertable2d (tabledessaie,taille);}
         }

    return 0;}

if (klc==2){
            printf("ce jeux nest pas encors fini \n\n");
    return 0;}
}
