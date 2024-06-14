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

    EeveeSt Eev = {55, 55, 50, 45, 65, 55};    VictiniSt Vic = {100, 100, 100, 100, 100, 100};  BulbasaurSt Bulba = {45, 49, 49, 45, 45, 65};


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
    


        if(poke == 1){
           //PRINTA OS POKEMONS
            eeveeFront(Eev);
            victini(Vic);
            musicbattle(); 
            //INICIA A MECANICA DO JOGO
            for(; Eev.HP > 0;){
                int x;
                scanf("%d", &x); 
//HP = Eev.HP; Attack = Vic.Attack; Defense = Eev.Defense;
                if(x == 1){
            
            
                    Hp(&Vic, &Eev, Vic.HP, Eev.Attack, Vic.Defense);
             
                    clear_screen();


                    eeveeFront(Eev);
                    victini(Vic);
                }
                else if(x == 2){
                    clear_screen();


                    eeveeFront(Eev);
                    victiniBAG(Vic);

                }
            }
        
        
        
        
        
        
        }

        else if(poke == 2){
            victiniFront(Vic);
            bulbasaur(Bulba);
        
       
       
       
       
       
       
       
       
       
       
        }

        else if(poke == 3){
            bulbasaurFront(Bulba);
            eevee(Eev);
            
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
        }
    //inicia a musica
    



    
    // Para a música matando o processo mpg123
    system("pkill mpg123");
 //clear_screen();
return 0;
}