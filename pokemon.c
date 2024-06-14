#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include "PokemonUser.h"
#include "statusPoke.h"
#include "music.h"

void musicbattle(){

        // Caminho para o arquivo de som MP3
    const char *soundFile = "/mnt/c/Users/USER/Downloads/musica/Trainer Battle - Pokémon Red & Blue Extended.mp3";

    // Comando para tocar o som em loop usando mpg123
    char command[512];
    snprintf(command, sizeof(command), "mpg123 -q --loop -1 \"%s\" &", soundFile);

    // Executa o comando
    system(command);

    return;
}

int main(){

    EeveeSt Eevee;    VictiniSt Victini;  BulbasaurSt Bulbasaur;

    void clear_screen() {
        #ifdef _WIN32
         system("cls");
        #else
        system("clear");
        #endif
    } 

    clear_screen();

    music();
    
   //escolha do pokemon 
    int poke;

    printf("\n\n                                                    Escolha seu Pokemon: 1.Victini 2.Bulbasaur 3. Eevee\n");
    scanf("%d", &poke);

    clear_screen();


  int vida = 45;
        if(poke == 1){
            eeveeFront();
            victini();
            
        }

        else if(poke == 2){
            victiniFront();

            bulbasaur(&vida);
        }

        else if(poke == 3){
            bulbasaurFront();

            eevee();
        }
    //inicia a musica
    musicbattle();  

    for(; vida > 0;){
        int x;
         scanf("%d", &x); 

        if(x == 1){
            
            
            HP(&vida);
             
            clear_screen();


            victiniFront();

            bulbasaur(&vida);
        }
        else if(x == 2){
            clear_screen();


            victiniFront();

            bagbulba(&vida);
        }
    }
    // Para a música matando o processo mpg123
    system("pkill mpg123");
 //clear_screen();
return 0;
}