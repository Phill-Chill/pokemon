#include "PokemonUser.h"
#include <stdio.h>
#include "statusPoke.h"    
   
    void Hp(VictiniSt *Vic, EeveeSt *Eev, int HP, int Attack, int Defense){

       Eev -> HP -= (Vic->Attack / Eev->Defense);
        if(Eev->HP < 0){Eev->HP = 0;}
    };

    void Hpp(BulbasaurSt *Bulba, VictiniSt *Vic, int HP, int Attack, int Defense){
        Vic -> HP -= (Bulba->Attack - Vic->Defense)*-1;
         if(Vic->HP < 0){Vic->HP = 0;}
    }

    void pot(BulbasaurSt *Bulba,int potion, int HP){
        Bulba-> potion --;
        Bulba -> HP += 15;
    }

    void victini(VictiniSt Vic){

printf("                                                              ███                                   \n");
printf("                                                             ████                                   \n");
printf("                                                           ██████                                   \n");
printf("                              ██████                     █████▓▓█                                   \n");
printf("                               ████████                 █████▓▒▓█                                   \n");
printf("                                ████████               █████▓▒▓█                                    \n");
printf("                                 █████████           ████████▒▓█                                    \n");
printf("                                   ██████████      █████████▒▓██                                    \n");
printf("                                    ███████████   ██████████▓██                                     \n");
printf("                                     ███████████████████████▓██                                     \n");
printf("                                      █████████████████████▓██                                      \n");
printf("                                       ████████████████████▓██                                      \n");
printf("                                         ████████████████████                                       \n");
printf("                                         █████████████▒▒▒▒██                                        \n");
printf("                                        ██▒▒▓███▓████▒▒▒▒▒▒██                                       \n");
printf("                                       ██▒▒▒▒███▓▓██▒▒▒▒▒▒▒▒██                                      \n");
printf("                                       ██▒▒▒█▓▒▒█▒█▒▒▒▒▒▒▒▒▒██                                      \n");
printf("                                       ██▓▒▒▒▓██▒▒▒▒▒▒▒▒▒▒▒▒██                                      \n");
printf("                                        ██▓▒▒▓██▓▒▒▒▒▒▒▒▒▒▒██                                       \n");
printf("                                         ████▒▒▒▒▒▒▒▒▒▒▒▓███                                        \n");
printf("                                      ███   ███▓▒▒▒▒▒████                                           \n");
printf("                                     ██▓▓█   ███▓▓▓▓▓███ ███                                        \n");
printf("                                   ██▓█▓▒▒██▓▓▓█▒▒▒██▒▒██▒▒███ ███                                  \n");
printf("                                  ████▓▒▓▒▒██▓██▓▓█▓███▒▒▓█▓▒█████                                  \n");
printf("                                   ███▓█▒▒▒▒▓██▒▒▒▒█▒▒▒▒▓▒▒▒██▒▓███                                 \n");
printf("                                     ██▒▒▓▒▒▒▒█▒▒█▒▒▒▒▒▒▒██▓████          |//////////////////////////////\n");
printf("                                     ███▒▒▓███▒▓▒▒█▓▓█▒▒▓▒▒████           | Victini     1.Attacks    ///\n");
printf("                                       ████▓██▒▒▒█▓▒▓▒▒▒▓███              |             2.Bag       /// \n");
printf("                                        ███▓▓▓▓██████████▓██              | HP:%03d/100             ///\n",Vic.HP);
printf("                                        ██████████████▓▓████              |//////////////////////////   \n");
printf("                                        █████        ████████                                       \n");
}

    void bulbasaur(BulbasaurSt Bulba){
        

    printf("                                      █▓▒▓▒▓█                                                       \n");
    printf("                                     █▓███▒░▒▓███           ███                                     \n");
    printf("                                     █▓▓▓▓▓░░▒▒░▒█████    ██▓░██                                    \n");
    printf("                                    █▓▒▒░░░▒▓▓░░▒▓███▓▓█▓▒▓▒░▒██                                    \n");
    printf("                                   █▓▒▒░░░░░▒▒▓▓▓▒▒▒▒▓▓▓█▓░░▒▓██                                    \n");
    printf("                                 █▓▒▒░    ░░▒▒▒▒▒██▓▒▒▒▒▓██▓▓▓███                                   \n");
    printf("                                 █▒▒▒░   ░▒▒▒▒▒▒▒▒▒▒█▓▒▒▒██▓▓▓▒▓█                                   \n");
    printf("                                █▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒██▓▓▓▒░▓█                                  \n");
    printf("                                █▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓▒██▓▓▓▓▓▓██                                  \n");
    printf("                                 ██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓▓██▓▓▓▓▓▓██                                   \n");
    printf("                                  ██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒███▓████████                                    \n");
    printf("                                  ██████▓▒▒▒▒▒▒█████▓▓▓▓▓▓▓▓▓██      |//////////////////////////////\n");
    printf("                                 ██▓▓▓██████████▓▓███▒░▓██▓▓▓██      | Bulbasaur   1.Attacks    /// \n");
    printf("                                 ██████████▓▓██▓▓▓▓██▓▒▒██▓▓██       |             2.Bag       ///  \n");
    printf("                                 █████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓██       | HP:%02d/45               /// \n",Bulba.HP);
    printf("                                  ████████▓▓▓▓██▓▓▓▓▓▓▓██████        |//////////////////////////   \n");
    printf("                                   ███████████████████▓██                                           \n");
    }

    void eevee(EeveeSt Eev){

    printf("                                                        ██                                          \n");
    printf("                                                       █▓▓██                                        \n");
    printf("                                                      █▒▒▒▓██                                       \n");
    printf("                                                      █▓▒▒▒██                                       \n");
    printf("                                    ██▒▓██            █▓▒▓▒▒██                                      \n");
    printf("                                    ██▓▒▒▒▓▓██        █▓▓▓▓▓██                                      \n");
    printf("                                     ██▓▓▓▒▒▒▒██       ██▓▓▓██                                      \n");
    printf("                                      ██▓▓▓▓▓▓▒▒█      ██▓▓▓██                                      \n");
    printf("                                       ███▓▓▓▓▓▓▓██ ███▓██▓██                                       \n");
    printf("                               ████      █████▓▓▓█▓▓▒▓▒▒███▓▓▓█                                     \n");
    printf("                               █▒░░▒▓▓▓█     ████▒▒▒▒▒▒▒▓▓▓▓▓▒▓█                                    \n");
    printf("                                ██▒    ▒█     ██▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓██                                   \n");
    printf("                               ██▒▓▒     ▒█   ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██                                   \n");
    printf("                               █▓▒▒▒░ ░░  ░██ ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███                                  \n");
    printf("                              █▓▒▒▒▒▒▒▒▓▒░▒▒▓████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██                                  \n");
    printf("                              ██▒▒▒▓▓▓▓▓▓▓▒▒▒▓█░█▓▓███████▓▓▓▓▓██                                   \n");
    printf("                             ██▓▓▒▓▓▓▓▓▓▓▓▓▒▒▒▓█▓▒▒░░░░░░▒▒▒▓███                                    \n");
    printf("                             ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█░░░░░░░░░░░░░░▒▒▒▒                                  \n");
    printf("                             ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██░░░░░░░░░░░░░░░░▒▒                                 \n");
    printf("                             ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██░░░▒░░░░░░░░░░░░░▒                                 \n");
    printf("                             ███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██░█░▒░░░░░░░░░░░▓██                                 \n");
    printf("                              ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████▓█▒░░░░▒░░▒▓▓█                                  \n");
    printf("                               ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓███▓░▓▓██                                     ");     printf("  |//////////////////////////////\n");  
    printf("                                ██▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓█████                                      ");     printf("  | Eeevee      1.Attacks    /// \n");
    printf("                                 ████▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓███                                      ");     printf("  |             2.Bag       ///  \n");
    printf("                                    ██████████▓▓▓▓▓▓▓▓▓███▓▒▒██                                     ");     printf("  | HP:%02d/55               ///   \n", Eev.HP);
    printf("                                          ████████████████████                                      ");     printf("  |//////////////////////////     \n");
    printf("                                                █████████                                           ");     printf("                                 \n");   
                                                                                                                          




  
    
    }

    void bulbasaurFront(BulbasaurSt Bulba){

 printf("                                                                                                                                                                 \n");                                
 printf("                                                                                                                                          ▓▓▓▓███                \n");                                
 printf("             ||||||||||||||||||||||||                                                                                          ▒▒▒▒▒▓▓▓▓▓▓▒▒▒▓█▓██               \n");                                
 printf("             | Bulbasaur   -------- |                                                                                       ▒▒▒▒░░░░░░░░░▒▒▒▒▒▓▓██               \n");                                
 printf("             |             -------- |                                                                        ████         ▒▒░░░░░░▒▓▓▒▒▒▒░▒▒▒▒▒▓██               \n");                                
 printf("             | HP:%02d/45           |                                                                       ▓▒░░▓██ ▓▓▓▓▓▓▓▓▓▓▓▓██▒░▒█░░░░░░▒▒▒▓▓▓█              \n", Bulba.HP);                                
 printf("             ||||||||||||||||||||||||                                                                       ▓▒░▒░▒▒▒░░░▒▒▒▒░▒▒▒▒░░░░▒█░░░░░░▒▒▒▓▓▓▓██            \n");                                
 printf("                                                                                                            ▓▓▓░░░░░░▒▓▓▓▓▒░░▒▒▒▒▒▒▒▒▓█▒░░░░▒▒▒▒▓▓▒▒██           \n");                                
 printf("                                                                                                            ▓▒░░░░░░▒▓▓▓▒░░░░▒▒▒▒▒▒▒▒▓█▒░░░▒▒▒▒▒▒▓▓▒▓██          \n");                                
 printf("                                                                                                           ▓▓▓░░░░░░░░░░░░░░░▒▒░▒▓▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▓▓▒▒▓█          \n");                                
 printf("                                                                                                           █▓▓▒░░░░░░▒▓▒░░░▒▓▓▓▒ ░▓▓▓▓▓██▓▒▒▒▒▒▒▒▓▓▒▒▓█          \n");                                
 printf("                                                                                                         ▓▓▒▓▒░▒▒░░░▒▓▒▒░░▒▒▓▒▓▓▒ ▒▒▓▓▓██▓▓▒▒▒▒▒▓▓▒▒▒▓█          \n");                                
 printf("                                                                                                         ▓▓░▒▓░▒▒░░░░░░░░░▒▓█░▒▒▒ ░▒▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▒██           \n");                                
 printf("                                                                                                         ▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓██           \n");                                
 printf("                                                                                                         ██▓██▓▒▒▒▒▒▒▒▓▒▒▒▒▒▒▒▒▓████▓▓▓▓▓▓▓▓█▓▓▓▓███             \n");                                
 printf("                                                                                                           █▓▒░▓▓▓▒▒▒▒▒▓▓█████▒▒▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓██            \n");                                
 printf("                                                                                                            ████▓▓▓▓█▓▓▒▒▒▒▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓██            \n");                                
 printf("                                                                                                                ███▓▓▓▓▓▓▓▓▓▓▓████▓▓▓▓▓▓▓▓█▓▓▓▓█▓▓▓▓██           \n");                                
 printf("                                                                                                                ▓▓▒▓▓▓██▓▓▓▓▓▓▓▓▓▒▒▒▓▓▓▓██▓▓▓▓███▓▓▓██           \n");                                
 printf("                                                                                                                 ▓▓▓▒▒▒▓███▓▓▓▓▓▓▓▒▒▒▓▓▓██▓▓▓▓███▓▓▓██           \n");                                
 printf("                                                                                                                 ▓▓▒▒▒▒▒▓▓████▓▓▒▓▓▒▒▓▓▓███▓▓▓▓▓▓▓▓██            \n");                                
 printf("                                                                                                                  ▓▓▒▒▒▒▓▓██  ▓▒▒▒▒▒▒▓██ ██▒▓▓░▓▒▒█              \n");                                
 printf("                                                                                                                 █▓▒█▓▓█▓██  █▓▒▒▒▒▒▒▓██   ███████               \n");                                
 printf("                                                                                                                   ██████    █████████                           \n");                                
 printf("                                                                                                                                                                 \n");                                
 printf("                                                                                                                                                                 \n");                                
 printf("                                                                                                                                                                 \n");                                
 printf("                                                                                                                                                                 \n");                                
                                                                           
    }                                                                       
                                                                       
    void victiniFront(VictiniSt Vic){                                                                       
                                                                       
printf("                                                                                                                                  ████             \n");                        
printf("                                                                                                                                  ████             \n");                        
printf("              ||||||||||||||||||||||||                                                                                            █▓██             \n");                        
printf("              | Victini     -------- |                                                                                           ██▓▓██            \n");                        
printf("              |             -------- |                                                                                           ██▓▓██            \n");                        
printf("              | HP:%02d/100            |                                                                                           █▓▓▓██            \n", Vic.HP);                        
printf("              ||||||||||||||||||||||||                                                                                          █▓▓▓▓██            \n");                        
printf("                                                                                                    █▓█▓▓▓█████                 █▓▓▓▓▓██           \n");                        
printf("                                                                                                     █▒▒▓▓▓▓▓▓▓███████         ██▓▓▓▓▓██           \n");                        
printf("                                                                                                       █▒   ░▓██▓▓▓▓▓▓███      █▓▓▓▓▓▓██           \n");                        
printf("                                                                                                        ██▓░ ░▒▒▒▓▓██▓▓▓▓▓▓█████▓▓▓▓▓▓██           \n");                        
printf("                                                                                                          ███▓▒▓███▓▓▓▓██▓▓▓▓▓▓█▓▓▓▓▓▓██           \n");                        
printf("                                                                                                             ██▒▒▓█████▓▓▓█▓▓▓▓▓▓▓▓▓▓██            \n");                        
printf("                                                                                                               ██▒▒▓██████▒ ▓█▓▓▓▓▓▓▓███           \n");                        
printf("                                                                                                                ███▒▒▓██░     ░▒▓▓▓▓▓▒░▒██         \n");                        
printf("                                                                                                                  ██▓▒▓   ▒▒▓█▓░ ░▓▓▓▒▒▒░██        \n");                        
printf("                                                                                                                    ██   █▒  ▓██░  ▒▓▒▒██▓▓█       \n");                        
printf("                                                                                                                    ██   █████▒▓░    ▒▓▒▒▓██       \n");                        
printf("                                                                                                                    ██   ░█▓▒▒▓▒ ▒░░▓▒░░░░▒█       \n");                        
printf("                                                                                                                ███  ██    ░▒░   ▓█▓▓█▒  ▒█        \n");                        
printf("                                                                                                         █▓▓▓█████▓█▓▓██▒░       ░▓▓▓░░▒▓█         \n");                        
printf("                                                                                                         █▓░  ▓█▓███ ░██  ██░       ▓██  ███       \n");                        
printf("                                                                                                          ██▓░ ▒████▓▒  ░▒▒▒░▒░▒▒▒▓█████▓▒▓██      \n");                        
printf("                                                                                                           █▓░▒▒▒███▓▒ ░▓▓███▓▒  ░▓█▓▒▒▒▓██████    \n");                        
printf("                                                                                                            ██▒░ ░▒▓██████ ██░▒░  ▒▓█▓░    ▒██     \n");                        
printf("                                                                                                             ██▓██▓▒▒▒██▒██░   ▓░▒░▓█▓███ ░███     \n");                        
printf("                                                                                                              ████▒▒▒█▒▒█░      ░    ░▓███████     \n");                        
printf("                                                                                                                 ███▓███▒▒░░      ░░░░▒██          \n");                        
printf("                                                                                                                      ██▓▒▒▒▒▒▒▓▓▓▒▒▒▒▒██          \n");                        
printf("                                                                                                                      ██▓█▒▒▒██████████▓██         \n");                        
printf("                                                                                                                     ████████        █████         \n");  
                                                                       
    }                                                                       
                                                                       
    void eeveeFront(EeveeSt Eev){                                                                       
                                                                       
printf("                                                                                                                                                   \n");                        
printf("                                                                                                               ▓▓▓▓                                \n");                        
printf("              ||||||||||||||||||||||||                                                                        ▓▓▒▒▓                                \n");                        
printf("              | Eevee       -------- |                                                                       ▓▓▓▓█▓█                               \n");                        
printf("              |             -------- |                                                                       ▓▓▓██▓█               ▓▓▓             \n");                        
printf("              | HP:%02d/55             |                                                                      █▓▓███▓█          ▓▓▒▒▒▒▓█             \n", Eev.HP);                        
printf("              ||||||||||||||||||||||||                                                                      █▓▓██▓█          ▓▒▒▓██▓██             \n");                        
printf("                                                                                                            █▓▓██▓█       ▓▒▒█████▓██              \n");                        
printf("                                                                                                             ███▓███    ▓▓▒▓█████▓██               \n");                        
printf("                                                                                                            ▓▓▓▓▒▒▓▒███▓▒▓█████▓▓██                \n");                        
printf("                                                                                                           ▓▓▒▒▒▒▒▒▓▒▒▓▒▓▒███▓▓██       ▓▓▓        \n");                        
printf("                                                                                                          ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓███   ▓▒▒▒▒▒▒▓█        \n");                        
printf("                                                                                                         ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██    ▓▒▒░░░▒▒▓█         \n");                        
printf("                                                                                                         █▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓██  ▓▓▒░░░░░░░░▒█        \n");                        
printf("                                                                                                         ███▓▒▒▒▒▒▒▓░█▒▒▓▓██  ▓▒▒░▒▒░░░░░░▒█       \n");                        
printf("                                                                                                        █▓▒▒▓▓▒▒▒▒▓███▒▓▓▓▒██▓▓▓▒▒▓▒▒▒▒░░░▒▓█      \n");                        
printf("                                                                                                         ▓▒▒▒▒▒▒▒▒▒▓▓▒▒▓▓▒░░▒▓▓▓▓▓▓▓▓▓▓▒░▒▓▓█      \n");                        
printf("                                                                                                       ▒▒▒▓▓▓▒▒▓▓▒▒▒▓▓▓▓▓░░░░▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓█      \n");                        
printf("                                                                                                      ▒░░░░▒▒▒▒▓▓▓▓▓▓▓▒░░░░░▒█▓▓▓▓▓▓▓▓▓▓▓▓▓▓█      \n");                        
printf("                                                                                                      ▒░░░░░░░░░░░░░▒░░▒▒░░▒▓█▓▓▓▓▓▓▓▓▓▓▓▓▓██      \n");                        
printf("                                                                                                       ▓▒▒░░░░░░░░░░░▒░░▒░░▓██▓▓▓▓▓▓▓▓▓▓▓▓██       \n");                        
printf("                                                                                                        ██▒░░░░░░░░░▒▒░▒▒▒█▓▓▓█▓▓▓▓▓▓▓▓▓▓██        \n");                        
printf("                                                                                                          █▓▒░░░▒▒░▒█▓▒█▓▓▓▓▓▓▓██▓▓▓▓▓███          \n");                        
printf("                                                                                                           █▓▓▓▒▒▒██▓▓▓▓▓█▓▓▓▓▓████████            \n");                        
printf("                                                                                                            █▓▓█▓▓█▓█▒▒▓█▓▓▓▓▓▓██                  \n");                        
printf("                                                                                                          █▓▓▓▓▓▓███▓▒▒▒█▓▓▓▓▓██                   \n");                        
printf("                                                                                                          █▓▓▓▓████▒▒▒▒▓██████                     \n");                        
printf("                                                                                                           █████ ██▓████                           \n");                        
printf("                                                                                                                                                   \n");                        
printf("                                                                                                                                                   \n"); 
    }                                                                      

//BAG ABERTA SPRITES

    void bulbaBAG(BulbasaurSt Bulba){

    printf("                                      █▓▒▓▒▓█                                                       \n");
    printf("                                     █▓███▒░▒▓███           ███                                     \n");
    printf("                                     █▓▓▓▓▓░░▒▒░▒█████    ██▓░██                                    \n");
    printf("                                    █▓▒▒░░░▒▓▓░░▒▓███▓▓█▓▒▓▒░▒██                                    \n");
    printf("                                   █▓▒▒░░░░░▒▒▓▓▓▒▒▒▒▓▓▓█▓░░▒▓██                                    \n");
    printf("                                 █▓▒▒░    ░░▒▒▒▒▒██▓▒▒▒▒▓██▓▓▓███                                   \n");
    printf("                                 █▒▒▒░   ░▒▒▒▒▒▒▒▒▒▒█▓▒▒▒██▓▓▓▒▓█    |//////////////////////////|   \n");
    printf("                                █▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒██▓▓▓▒░▓█   |::::::::::::::::::::::::::|   \n");
    printf("                                █▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓▒██▓▓▓▓▓▓██   |:1.POTION..............x%d:|   \n",Bulba.potion);
    printf("                                 ██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓▓██▓▓▓▓▓▓██    |::::::::::::::::::::::::::|   \n");
    printf("                                  ██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒███▓████████     |::::::::::::::::::::::::::|   \n");
    printf("                                  ██████▓▒▒▒▒▒▒█████▓▓▓▓▓▓▓▓▓██      |::::::::::::::::::::::::::|   \n");
    printf("                                 ██▓▓▓██████████▓▓███▒░▓██▓▓▓██      |::::::::::::::::::::::::::|   \n");
    printf("                                 ██████████▓▓██▓▓▓▓██▓▒▒██▓▓██       |__________________________|   \n");
    printf("                                 █████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓██       | HP:%02d/45                 |   \n",Bulba.HP);
    printf("                                  ████████▓▓▓▓██▓▓▓▓▓▓▓██████        |//////////////////////////|   \n");
    printf("                                   ███████████████████▓██                                           \n");                                                               
                                                                                                    
    }                                                                               

        void victiniBAG(VictiniSt Vic){                                             
                                                                                            
printf("                                                              ███                                   \n");
printf("                                                             ████                                   \n");
printf("                                                           ██████                                   \n");
printf("                              ██████                     █████▓▓█                                   \n");
printf("                               ████████                 █████▓▒▓█                                   \n");
printf("                                ████████               █████▓▒▓█                                    \n");
printf("                                 █████████           ████████▒▓█                                    \n");
printf("                                   ██████████      █████████▒▓██                                    \n");
printf("                                    ███████████   ██████████▓██                                     \n");
printf("                                     ███████████████████████▓██                                     \n");
printf("                                      █████████████████████▓██                                      \n");
printf("                                       ████████████████████▓██                                      \n");
printf("                                         ████████████████████                                       \n");
printf("                                         █████████████▒▒▒▒██                                        \n");
printf("                                        ██▒▒▓███▓████▒▒▒▒▒▒██                                       \n");
printf("                                       ██▒▒▒▒███▓▓██▒▒▒▒▒▒▒▒██                                      \n");
printf("                                       ██▒▒▒█▓▒▒█▒█▒▒▒▒▒▒▒▒▒██                                      \n");
printf("                                       ██▓▒▒▒▓██▒▒▒▒▒▒▒▒▒▒▒▒██                                      \n");
printf("                                        ██▓▒▒▓██▓▒▒▒▒▒▒▒▒▒▒██                                       \n");
printf("                                         ████▒▒▒▒▒▒▒▒▒▒▒▓███                                        \n");
printf("                                      ███   ███▓▒▒▒▒▒████                 |//////////////////////////|\n");
printf("                                     ██▓▓█   ███▓▓▓▓▓███ ███              |::::::::::::::::::::::::::|\n");
printf("                                   ██▓█▓▒▒██▓▓▓█▒▒▒██▒▒██▒▒███ ███        |:1.POTION..............x2:|\n");
printf("                                  ████▓▒▓▒▒██▓██▓▓█▓███▒▒▓█▓▒█████        |::::::::::::::::::::::::::|\n");
printf("                                   ███▓█▒▒▒▒▓██▒▒▒▒█▒▒▒▒▓▒▒▒██▒▓███       |::::::::::::::::::::::::::|\n");
printf("                                     ██▒▒▓▒▒▒▒█▒▒█▒▒▒▒▒▒▒██▓████          |::::::::::::::::::::::::::|\n");
printf("                                     ███▒▒▓███▒▓▒▒█▓▓█▒▒▓▒▒████           |::::::::::::::::::::::::::|\n");
printf("                                       ████▓██▒▒▒█▓▒▓▒▒▒▓███              |Press 0 and Enter to back!|\n");
printf("                                        ███▓▓▓▓██████████▓██              | HP:%02d/100               |\n",Vic.HP);
printf("                                        ██████████████▓▓████              |//////////////////////////|\n");
printf("                                        █████        ████████                                       \n");
}

//ANIMAÇÃO

void eeveeAnima(EeveeSt Eev){                                                                       
                                                                       
printf("                                         \n");                        
printf("                                         \n");                        
printf("              ||||||||||||||||||||||||   \n");                        
printf("              | Eevee       -------- |   \n");                        
printf("              |             -------- |   \n");                        
printf("              | HP:%02d/55             |   \n", Eev.HP);                        
printf("              ||||||||||||||||||||||||   \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                         \n");                        
printf("                                                                                    \n"); 
    }  