#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#include "PokemonUser.h"
#include "statusPoke.h"
#include "music.h"
//DELAY
void sleep_ms(int milliseconds) {
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000;
    nanosleep(&ts, NULL);
}

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


void musicHP() {
    // Caminho para o arquivo de som MP3
    const char *soundFile = "/mnt/c/Users/USER/Downloads/musica/All Mini Shield Sounds (Fortnite) - Sound Effects for editing.mp3";

    // Comando para tocar o som uma vez usando mpg123
    char command[512];
    snprintf(command, sizeof(command), "mpg123 -q \"%s\"", soundFile);

    // Executa o comando
    system(command);

    // Opcional: Espera um tempo antes de continuar (por exemplo, 5 segundos)
    //sleep(5);

    return; // Finaliza a função
}

int main(){

    EeveeSt Eev = {55, 55, 50, 45, 65, 55, 3};    VictiniSt Vic = {100, 100, 100, 100, 100, 100, 3};  BulbasaurSt Bulba = {45, 49, 49, 45, 45, 65, 3};


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
    int x;   
    printf("\n\n                                                    Escolha seu Pokemon: 1.Victini 2.Bulbasaur 3. Eevee\n");
    scanf("%d", &poke);

    clear_screen();
     musicbattle(); 


        if(poke == 1){
           //PRINTA OS POKEMONS
            eeveeFront(Eev);
            victini(Vic);
        
            //INICIA A MECANICA DO JOGO
            for(; Eev.HP > 0;){
               
                scanf("%d", &x); 
//HP = Eev.HP; Attack = Vic.Attack; Defense = Eev.Defense;
                if(x == 1){
                                       
                    clear_screen();

                    eeveeAnima(Eev);
                    victini(Vic);
                    
                    sleep_ms(300);

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
        
            while(Vic.HP > 0){
                scanf("%d", &x);

                if(x == 1){

                    Hpp(&Bulba, &Vic, Vic.HP, Bulba.Attack, Vic.Defense);
                

                clear_screen();
                victiniFront(Vic);
                bulbasaur(Bulba);
            }
                else if(x == 2){
                
                    clear_screen();
                    victiniFront(Vic);
                    bulbaBAG(Bulba);          
                int r;
                scanf("%d", &r);
                if(r == 1){
                    pot(&Bulba, Bulba.potion, Bulba.HP);
                
                
                
                musicHP();
                
                
                
                
                
                
                }
                
                    clear_screen();
                    victiniFront(Vic);
                    bulbasaur(Bulba);
                
                
                
                    
                }  
               
                
            } 
       
       
       
       
       
       
       
       
       
        }

        else if(poke == 3){
            bulbasaurFront(Bulba);
            eevee(Eev);
            
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
        }
    
    



    
    // Para a música matando o processo mpg123
    system("pkill mpg123");
 //clear_screen();
return 0;
}