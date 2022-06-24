#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int check(char* mail){
int i=0; int c1=0,c2=0;

while (i<strlen(mail)){

if(mail[i]=='@' && i>1){c1=1; break;}

   i++;
}
i=i+3;
if (c1==1){

    while(i<strlen(mail)){


        if(mail[i]=='.' && i<strlen(mail)-2) {c2=1;break;}
        i++;


    }



}




if(c2==1) return 1;
else return 0;


}





int main()
{


char a[200];

FILE* fichier=NULL;


fichier=fopen("mail.txt","r");

if(fichier==NULL) printf("ERREUR LORS DE L'OUVERTURE DU FICHIER ASSUREZ VOUS QUE LE FICHIER SE TROUVE BIEN DANS \n LE REPERTOIRE DU PROGRAMME");
int k=0;

FILE* fichier2=NULL;
fichier2=fopen("mail_result.txt","a");
while(fscanf(fichier,"%s",a)!=EOF){




  if(check(a)==1){  printf("%s \n",a); k++;


fprintf(fichier2,"%s \n",a);

  }

}

fclose(fichier);
fclose(fichier2);

printf("\n Total extrac %d ... \n",k);

printf("\tGithub: TutasTech\n\tYoutube:Tutastech\n\ttelegram:tutastech\n\tmy_telegram:@thefaucon \n");


    system("pause");

    return 0;
}
