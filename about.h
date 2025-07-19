// about.h
#ifndef ABOUT_H
#define ABOUT_H
//Declare the Player_casino struct in the header file
#define RESET "\033[0m"
#define RED "\033[91m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"

struct Player_casino {
    char name[50];
    long int id;
    int credits;
};




void clear_input_buffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void delay(int milliseconds) {
    Sleep(milliseconds);
}
void autosave(struct Player_casino* player) {
    FILE *file, *tempFile;
    char line[100];
    int id, credits;
    char name[50];
    int found = 0;

    file = fopen("player_data.csv", "r");   
    tempFile = fopen("temp.csv", "w");     

    if (!file || !tempFile) {
        printf("Error opening file.\n");
        return;
    }

    
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%[^,],%d,%d", name, &id, &credits);

        
        if (id == player->id) {
            fprintf(tempFile, "%s,%d,%d\n", player->name, player->id, player->credits);
            found = 1;
        } else {
            
            fprintf(tempFile, "%s", line);
        }
    }

    
    if (!found) {
        fprintf(tempFile, "%s,%d,%d\n", player->name, player->id, player->credits);
    }

    fclose(file);
    fclose(tempFile);

    
    remove("player_data.csv");
    rename("temp.csv", "player_data.csv");

    printf("\nCredits autosaved successfully.\n");
}


int getIntegerInput() {
    int number;
    while (1) {
        //printf("Enter an integer: ");
        
        // Check if scanf successfully reads an integer
        if (scanf("%d", &number) == 1) {
            clear_input_buffer(); // Clear any extra input
            return number;      // Return the valid integer input
        } else {
            printf("Invalid input. Please enter an integer: ");
            clear_input_buffer(); // Clear invalid input
        }
    }
}
// Function definition
void about() {
    // Print details about the game
    printf(YELLOW "Welcome to Codecrafters!\n" RESET );
    printf( GREEN "This game is designed to be visually appealing while avoiding complex graphics libraries.\n");
    printf("Our goal is to help players understand core concepts while enjoying the gameplay experience.\n");
    printf("One of the key advantages of our game is the ability to save credits, allowing players to keep track of their progress and achievements.\n");
    printf("\n");

    // Problem statement
    printf("Problem Statement:\n");
    printf("To create a visually appealing game without complex graphics libraries to understand concepts.\n");
    printf("\n");

    // End credits with different colors for each member
    printf("Team Members:\n");
    printf(RED "1. Harsimran Singh - 2401030148\n" RESET);
    printf(CYAN "2. Mahi Gupta - 2401030135\n" RESET);
    printf(YELLOW "3. Shreysi Gupta - 2401030157\n" RESET);
    printf(BLUE "4. Aryan Sharma - 2401030159\n" RESET);
    delay(2000);
    printf("\n");
    printf(RED"                                .\n");
    printf("                                .:+:\n");
    printf("                               :=+++=-\n");
    printf("                             :=+++++++=:\n");
    printf("                           .=+++++++++++=\n");
    printf("                         .-+++++++++++++++.-\n");
    printf("                       .-+*+*************+++.-\n");
    printf("                       ++********************+: \n");
    printf("                    .. **********************+. .\n");
    printf("                  :=*: +*********************+ :*=: \n");
    printf("                .=***: +*********************+ -***=. \n");
    printf("               =*****+ :*********************+ =*****=\n");
    printf("             .+******* .*********************:.+*******. \n");
    printf("             .+*******..********************* :********. \n");
    printf("              +*******=.+******************** :*******= \n");
    printf("              +******** =******************** +*******- \n");
    printf("              =******** :******************+- ********- \n");
    printf("              -********=.:=***************=: =********- \n");
    printf("               *********+: .+************. :+*********: \n");
    printf("               ***********+. -+*******+- .=**********+. \n");
    printf("               *************-..-+***+-..-************+ \n");
    printf("               +++***********+= .=*=. -+***********+*+ \n");
    printf("               -*:.*************:   :*************:.*= \n");
    printf("                *:  :=***********= =***********+:  -*- \n");
    printf("                *-    :=********** +*********=:    =* \n");
    printf("                **  ..  .=******** +*******=.  .  .+* \n");
    printf("                +*. .==.   +****** +*****+.  .==  :** \n");
    printf("                -*- .=++-:  :=**** +**+=:  :=++=  :*+ \n");
    printf("                :**  -++++=:  :-** +*-:  -=+++=:  =*: \n");
    printf("                :**  .=++++++.   = -   :+*++++=.  ** \n");
    printf("                .+*-  :=++++=          .=++++=.  .** \n");
    printf("                .+*+.   :--:             :--:   .=** \n");
    printf("                 =**+=                        .=+**= \n");
    printf("                 -*****=                     -*****: \n");
    printf("                 -******+-.               .-+******: \n");
    printf("                 :+*******+-.           .-+********: \n");
    printf("                  -*********+-         -+*********- \n");
    printf("                   .=+********+-     :*********++. \n");
    printf("                     :=*********+:.:+********+=: \n");
    printf("                       :+**++++++*++*++++***+:. \n");
    printf("                         -+++++++++++++++++- \n");
    printf("                           =+++++++++++++=. \n");
    printf("                            :=+++++++++=: \n");
    printf("                              .+++++++: \n");
    printf("                                -+++- \n");
    printf("                                 .-. \n");
}

//MATHS ASYLUM
void vault1(int score,struct Player_casino* player);
void vault2(int score,struct Player_casino* player);
void vault3(int score,struct Player_casino* player);
void vault4(int score,struct Player_casino* player);
void vault5(int score,struct Player_casino* player);
void vault6(int score,struct Player_casino* player);
void vault7(int score,struct Player_casino* player);
void vault8(int score,struct Player_casino* player);
void vault9(int score,struct Player_casino* player);
void vault10(int score,struct Player_casino* player);
void vault11(int score,struct Player_casino* player);
void MATHS_ASYLUM(struct Player_casino* player);

void MATHS_ASYLUM(struct Player_casino* player)
{
    int intial_bet=0;
    printf("\033[1;33m");
    printf("\" M A T H S   A S Y L U M  :   E S C A P E   T H E   E Q U A T I O N S \"\n\n\n\n");
    printf("\033[1;32m");
    printf("I am you Chamberlane, CASPER\n\n");
    printf("Your task is to reach the topmost vault 10 by solving mathematical problems and open the secret box using your collected points\n");
    printf("On giving correct answer you will be awarded 30 credits\n");
    printf("On giving wrong answer, credits will be deducted and you will come to Vault 1\n");
    printf("if u surived till end , you get a huge tressure \n ");
    printf("ALL THE BEST %s\n\n\n\n",player->name);
    printf("\033[1;36m");
    printf("your current balance is %d \n",player->credits);
    autosave(player);
    int points=0;
    vault1(points,player);

}





void vault1(int score,struct Player_casino* player)
{
    srand(time(0));
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 1\n");
    printf("\033[1;32m");
    printf("Your Riddle is - ");
    int answer;
    int vault_1_reward=30;
    int ch=rand()%10;
    char response[10];
    printf("\033[1;0m");
    switch(ch)
    {
    case 0:
        printf("Solve this BODMAS equation - 8+3x(12-4)/2\n");
        answer=getIntegerInput();
        if(answer==20)
        {
            score+=vault_1_reward;
            
            printf("\"Yes! You did it!\"\n");
            
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);
            
            fflush(stdin);
            
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            
            printf("\"No way! You lost!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 1:
        printf("Solve this BODMAS equation -  5^2-(6x3)+(10-6)\n");
        answer=getIntegerInput();
        if(answer==14)
        {
            score+=vault_1_reward;
            
            printf("\"Victory is ours!\"\n");
            
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);
            
            fflush(stdin);
            
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        else
        {
            printf("\"I can't believe it!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 2:
        printf("Solve this BODMAS equation - 45/5+12x(3-1) \n");
        answer=getIntegerInput();
        if(answer==33)
        {
            score+=vault_1_reward;
            printf("\"Unbelievable!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        else
        {
            printf("\"We were so close!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 3:
        printf("Solve this BODMAS equation - (6+4)x(12/3)-5\n");
        answer=getIntegerInput();
        if(answer==35)
        {
            score+=vault_1_reward;
            printf("\"You won!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        else
        {
            printf("\"Gutted!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 4:
        printf("Solve this BODMAS equation - 8+(15/3)^2-9\n");
        answer=getIntegerInput();
        if(answer==24)
        {
            score+=vault_1_reward;
            printf("\"That was epic!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }

        }
        else
        {
            printf("\"Oh no\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);


            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 5:
        printf("Solve this BODMAS equation - 4x(7+2)-3^2\n");
        answer=getIntegerInput();
        if(answer==27)
        {
            score+=vault_1_reward;
            printf("\033[1;32m");
            printf("\"Can't believe you pulled it off!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);

            fflush(stdin);
            printf("\033[1;36m");
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("\033[1;33m");
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }

        }
        else
        {   printf("\033[1;32m");
            printf("\"This is so frustrating!\"\n");
            printf("\033[1;33m");
            printf("Your score is %d points\n",score);
            printf("\033[1;32m");
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            printf("\033[1;36m");
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("\033[1;33m");
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 6:
        printf("Solve this BODMAS equation - 36/(2x3)+8x(2+1)\n");
        answer=getIntegerInput();
        if(answer==30)
        {
            score+=vault_1_reward;
            printf("\"Score!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);
        
            fflush(stdin); 
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        else
        {
            printf("\"Ugh, we almost had it!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 7:
        printf("Solve this BODMAS equation - (5+2x4)-(3^2+6)\n");
        answer=getIntegerInput();
        if(answer==-2)
        {
            score+=vault_1_reward;
            printf("\"We nailed it!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        else
        {
            printf("\"What a bummer!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 8:
        printf("Solve this BODMAS equation - 12+8/3-(4+2)^2\n");
        answer=getIntegerInput();
        if(answer==-18)
        {
            score+=vault_1_reward;
            printf("\"Champion!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        else
        {
            printf("\"Defeated!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 9:
        printf("Solve this BODMAS equation - (3x4)+9/3-7+2^3\n");
        answer=getIntegerInput();
        if(answer==17)
        {
            score+=vault_1_reward;
            printf("\"Incredible!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);

            fflush(stdin);            
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted \n");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        else
        {
            printf("\"Not our day!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            };
        }
        break;
    default:
        printf("Solve this BODMAS equation - 20/4+6x(3+1)-5\n");
        answer=getIntegerInput();
        if(answer==24)
        {
            score+=vault_1_reward;
            printf("\"Absolutely phenomenal!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_1_reward;
            autosave(player);

            fflush(stdin);           
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault2(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        else
        {
            printf("\"Next time, for sure!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            autosave(player);

            fflush(stdin);            
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
    }
}


void vault2(int score,struct Player_casino* player)
{
    srand(time(0));
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 2\n");
    printf("\033[1;32m");
    printf("Your Riddle is - ");
    printf("\033[1;0m");
    int answer;
    float answer_7;
    int vault_2_reward = 30;
    int valut_2_loss=20;
    int ch=rand()%10;
    char response[10];
    switch(ch)
    {
    case 0:
        printf("Find the number of terms in an A.P. whose first term a=5, common difference d=3, and last term l=50\n");
        answer=getIntegerInput();
        if(answer==16)
        {
            score+=vault_2_reward;
            printf("\"Yes! You did it!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+= vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"No way! You lost!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 1:
        printf("Find the 8th term of a G.P. where first term a=3 and common ratio r=2\n");
        answer=getIntegerInput();
        if(answer==384)
        {
            score+=vault_2_reward;
            printf("\"Victory is ours!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"I can't believe it!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 2:
        printf("If 12, x, and 4 are in H.P. , then find the value of x\n");
        answer=getIntegerInput();
        if(answer==6)
        {
            score+=vault_2_reward;
            printf("\"Unbelievable!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"You were so close!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 3:
        printf("If the sum of first 20 terms of an A.P. is 400 and 20th term is 50, then find the first term\n");
        answer=getIntegerInput();
        if(answer==10)
        {
            score+=vault_2_reward;
            printf("\"You won!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"Gutted!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 4:
        printf("In a GP, the 4th term is 16 and the 7th term is 128. Find the common ratio\n");
        answer=getIntegerInput();
        if(answer==2)
        {
            score+=vault_2_reward;
            printf("\"That was epic!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=20;
            printf("\"Oh no, not again!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 5:
        printf("The first and second terms of an HP are 10 and 15, respectively. Find the third term\n");
        answer=getIntegerInput();
        if(answer==30)
        {
            score+=vault_2_reward;
            printf("\"Can't believe we pulled it off!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"This is so frustrating!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 6:
        printf("If the 6th term of an AP is 20 and the 10th term is 36, find the first term\n");
        answer=getIntegerInput();
        if(answer==0)
        {
            score+=vault_2_reward;
            printf("\"We nailed it!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"Ugh, we almost had it!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-= valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 7:
        
        printf(" Find the sum to infinity of a GP where a=5 and r=0.6\n");
        scanf("%f",&answer_7);
        if(answer_7==12.5)
        {
            score+=vault_2_reward;
            printf("\"Score!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"What a bummer!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 8:
        printf("If 8, x, 24 are in H.P., then find the value of x\n");
        answer=getIntegerInput();
        if(answer==12)
        {
            score+=vault_2_reward;
            printf("\"Champion!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"You got crushed!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 9:
        printf("Find the number of terms in an AP where the first term a=3, the common difference d=5, and the last term l=78\n");
        answer=getIntegerInput();
        if(answer==16)
        {
            score+=vault_2_reward;
            printf("\"Incredible!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-=valut_2_loss;
            printf("\"Heartbreaking!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    default:
        printf("The second term of a GP is 12, and the fifth term is 96. Find the common ratio\n");
        answer=getIntegerInput();
        if(answer==2)
        {
            score+=vault_2_reward;
            printf("\"Winner!\"\n");
            printf("Your score is %d points\n",score);
            player->credits+=vault_2_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault3(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score-= valut_2_loss;
            printf("\"Next time, for sure!\"\n");
            printf("Your score is %d points\n",score);
            printf("Try Again\n\n");
            player->credits-=valut_2_loss;
            autosave(player);
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
    }
}

void vault3(int score, struct Player_casino* player) {
    srand(time(0));
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 3\n");
    printf("\033[1;32m");
    printf("Your Trigonometry Challenge is - ");
    printf("\033[1;0m");
    int vault_reward = 30, vault_loss = 20;
    int answer;
    float answer_7;
    int ch = rand() % 10;
    char response[10];

    switch (ch) {
    case 0:
        printf("What is the value of sin(30°) + cos(60°)?\n");
        answer=getIntegerInput();
        if (answer == 1) {
            score += vault_reward;
            printf("\"Yes! You did it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"No way! You lost!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 1:
        printf("If tan(x) = 1 and x is in the range [0°, 90°], what is x?\n");
        answer=getIntegerInput();
        if (answer == 45) {
            score += vault_reward;
            printf("\"Victory is ours!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"I can't believe it!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 2:
        printf("Calculate sin^2(45°) + cos^2(45°).\n");
        answer=getIntegerInput();
        if (answer == 1) {
            score += vault_reward;
            printf("\"Unbelievable!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"You were so close!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 3:
        printf("What is the value of sec(60°)? (Round to nearest whole number)\n");
        answer=getIntegerInput();
        if (answer == 2) {
            score += vault_reward;
            printf("\"You won!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Gutted!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 4:
        printf("If cos(x) = 0.5 and x is between 0° and 90°, find x.\n");
        answer=getIntegerInput();
        if (answer == 60) {
            score += vault_reward;
            printf("\"That was epic!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Oh no, not again!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 5:
        printf("Find the value of cot(45°).\n");
        answer=getIntegerInput();
        if (answer == 1) {
            score += vault_reward;
            printf("\"Can't believe we pulled it off!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"This is so frustrating!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 6:
        printf("What is the value of sin(90° - 30°)?\n");
        scanf("%f", &answer_7);
        if (answer_7 == 0.5) {
            score += vault_reward;
            printf("\"We nailed it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Ugh, we almost had it!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 7:
        printf("If sin(A) = 0.6 and A is acute, find cos(A) to the nearest whole number.\n");
        scanf("%f", &answer_7);
        if (answer_7 == 0.8) {
            score += vault_reward;
            printf("\"Score!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"What a bummer!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 8:
        printf("What is the value of sin(30°) * cos(60°)? (nearest whole number)\n");
        scanf("%f", &answer_7);
        if (answer_7 == 0.25) {
            score += vault_reward;
            printf("\"Champion!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"You got crushed!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 9:
        printf("If tan(2A) = 1, where 0° < 2A < 90°, what is A?\n");
        scanf("%f", &answer_7);
        if (answer_7 == 22.5) {
            score += vault_reward;
            printf("\"Incredible!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Heartbreaking!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    default:
        printf("If sec(45°) = x, find x to the nearest whole number.\n");
        scanf("%f", &answer_7);
        if (answer_7 == 1.414) {
            score += vault_reward;
            printf("\"Winner!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault4(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Next time, for sure!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
    }
}


void vault4(int score, struct Player_casino* player)
{
    srand(time(0));
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 4\n");
    printf("\033[1;32m");
    printf("Your Coordinate Geometry Challenge is - ");
    printf("\033[1;0m");
    int answer;
    float answer_7;

    int vault_reward = 30;
    int vault_loss = 20;
    char response[10]; 
    int ch = rand() % 10;
    switch (ch)
    {
    case 0:
        printf("Find the distance between the points (3, 4) and (7, 1). (Round to the nearest whole number)\n");
        answer=getIntegerInput();
        if (answer == 5)
        {
            score += vault_reward;
            printf("\"Yes! You did it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"No way! You lost!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 1:
        printf("Find the midpoint of the line segment connecting (2, -3) and (8, 5).\n");
        int x_mid, y_mid;
        scanf("%d %d", &x_mid, &y_mid);
        if (x_mid == 5 && y_mid == 1)
        {
            score += vault_reward;
            printf("\"Victory is ours!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"I can't believe it!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 2:
        printf("Find the slope of a line passing through points (1, 2) and (3, 6).\n");
        answer=getIntegerInput();
        if (answer == 2)
        {
            score += vault_reward;
            printf("\"Unbelievable!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"You were so close!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 3:
        printf("What is the equation of a line with slope 2 passing through point (1, 3)? (Enter answer as ax+by+c=0, with integer coefficients)\n");
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a == 2 && b == -1 && c == -1)
        {
            score += vault_reward;
            printf("\"You won!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Gutted!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 4:
        printf("Find the radius of a circle with equation x^2 + y^2 - 4x + 6y - 12 = 0.\n");
        answer=getIntegerInput();
        if (answer == 5)
        {
            score += vault_reward;
            printf("\"That was epic!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Oh no, not again!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 5:
        printf("Find the length of the perpendicular drawn from point (1, -2) to the line 3x + 4y + 5 = 0.\n");
        answer=getIntegerInput();
        if (answer == 5)
        {
            score += vault_reward;
            printf("\"Can't believe we pulled it off!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"This is so frustrating!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 6:
        printf("Find the x-intercept of a line 2x - 3y + 6 = 0.\n");
        answer=getIntegerInput();
        if (answer == -3)
        {
            score += vault_reward;
            printf("\"We nailed it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Ugh, we almost had it!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 7:
        printf("If the slope of a line is -3 and it passes through (2, 5), what is the y-intercept?\n");
        answer=getIntegerInput();
        if (answer == 11)
        {
            score += vault_reward;
            printf("\"Score!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"What a bummer!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 8:
        printf("Find the area of a triangle with vertices at (0,0), (6,0), and (3,6).\n");
        answer=getIntegerInput();
        if (answer == 18)
        {
            score += vault_reward;
            printf("\"Champion!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"You got crushed!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    case 9:
        printf("Find the equation of a line passing through (3, -2) and parallel to 4x - 5y = 7.\n");
        int par_a, par_b, par_c;
        scanf("%d %d %d", &par_a, &par_b, &par_c);
        if (par_a == 4 && par_b == -5 && par_c == -23)
        {
            score += vault_reward;
            printf("\"Incredible!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Heartbreaking!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    default:
        printf("What is the slope of a line perpendicular to one with slope 3/4?\n");
        answer=getIntegerInput();
        if (answer == -4)
        {
            score += vault_reward;
            printf("\"Winner!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault5(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Next time, for sure!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    }
}


void vault5(int score, struct Player_casino* player) 
{
    srand(time(0));
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 5\n");
    printf("\033[1;32m");
    printf("Your Permutation and Combination Challenge is - ");
    printf("\033[1;0m");
    int answer;
    float answer_7; // for cases requiring float answers
    int vault_reward = 30; // reward points
    int vault_loss = 40; // loss points
    int ch = rand() % 10;
    char response[10]; 
    switch (ch)
    {
        case 0:
            printf("How many ways can you arrange the letters in the word 'BOOK'? (Consider identical letters)\n");
            answer=getIntegerInput();
            if (answer == 12) 
            {
                score += vault_reward;
                printf("\"Yes! You did it!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"No way! You lost!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 1:
            printf("In how many ways can you choose 3 students from a class of 10?\n");
            answer=getIntegerInput();
            if (answer == 120) 
            {
                score += vault_reward;
                printf("\"Victory is ours!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"I can't believe it!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 2:
            printf("If a committee of 4 is to be formed from 8 people, how many different committees can be formed?\n");
            answer=getIntegerInput();
            if (answer == 70) 
            {
                score += vault_reward;
                printf("\"Unbelievable!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"You were so close!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 3:
            printf("How many different ways can 5 books be arranged on a shelf?\n");
            answer=getIntegerInput();
            if (answer == 120) 
            {
                score += vault_reward;
                printf("\"You won!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"Gutted!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 4:
            printf("If you have 7 different colored balls, how many ways can you choose 2 balls?\n");
            answer=getIntegerInput();
            if (answer == 21) 
            {
                score += vault_reward;
                printf("\"That was epic!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"Oh no, not again!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 5:
            printf("How many different ways can the letters of the word 'MISSISSIPPI' be arranged?\n");
            answer=getIntegerInput();
            if (answer == 34650) 
            {
                score += vault_reward;
                printf("\"Can't believe we pulled it off!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"This is so frustrating!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 6:
            printf("In how many ways can you select 3 cards from a standard deck of 52 cards?\n");
            answer=getIntegerInput();
            if (answer == 22100) 
            {
                score += vault_reward;
                printf("\"We nailed it!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"Ugh, we almost had it!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 7:
            printf("If you roll a die, how many different outcomes can you get?\n");
            answer=getIntegerInput();
            if (answer == 6) 
            {
                score += vault_reward;
                printf("\"Score!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"What a bummer!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 8:
            printf("How many ways can 4 students be seated in a row of 4 chairs?\n");
            answer=getIntegerInput();
            if (answer == 24) 
            {
                score += vault_reward;
                printf("\"Champion!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"You got crushed!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        case 9:
            printf("How many ways can you form a team of 3 from a group of 6 people?\n");
            answer=getIntegerInput();;
            if (answer == 20) 
            {
                score += vault_reward;
                printf("\"Incredible!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"Heartbreaking!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
            break;
        default:
            printf("How many different ways can you arrange the digits in the number 112233?\n");
            answer=getIntegerInput();
            if (answer == 90) 
            {
                score += vault_reward;
                printf("\"Winner!\"\n");
                printf("Your score is %d points\n", score);
                player->credits += vault_reward;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault6(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
            }
            else 
            {
                score -= vault_loss;
                printf("\"Next time, for sure!\"\n");
                printf("Your score is %d points\n", score);
                printf("Try Again\n\n");
                player->credits -= vault_loss;
                autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
            }
    }
}


void vault6(int score, struct Player_casino* player)
{
    srand(time(0));
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 6\n current score- %d \n",score);
    printf("\033[1;32m");
    printf("Your Limits and Continuity Challenge is - ");
    printf("\033[1;0m");

    float answer_7;
    int  vault_reward = 30, vault_loss = 40;
    int ch = rand() % 10;
    char response[10]; 
    switch (ch)
    {
    case 0:
        printf("What is the limit of f(x) = x^2 as x approaches 2?\n");
        scanf("%f", &answer_7);
        if (answer_7 == 4.0) 
        {
            score += vault_reward;
            printf("\"Yes! You did it!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"No way! You lost!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 1:
        printf("Evaluate the limit: lim (x -> 1) (x^2 - 1)/(x - 1).\n");
        scanf("%f", &answer_7);
        if (answer_7 == 2.0) 
        {
            score += vault_reward;
            printf("\"Victory is ours!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"I can't believe it!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 2:
        printf("If f(x) = 1/x, is f continuous at x = 0?\n(Answer 1 for Yes, 0 for No)\n");
        scanf("%f", &answer_7);
        if (answer_7 == 0.0) 
        {
            score += vault_reward;
            printf("\"Unbelievable!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"You were so close!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 3:
        printf("What is the limit of f(x) = (2x^2 - 8)/(x - 4) as x approaches 4?\n");
        scanf("%f", &answer_7);
        if (answer_7 == 8.0) 
        {
            score += vault_reward;
            printf("\"You won!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Gutted!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);
 
            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 4:
        printf("Find the limit of f(x) = (x^2 - 1)/(x - 1) as x approaches 1.\n");
        scanf("%f", &answer_7);
        if (answer_7 == 2.0) 
        {
            score += vault_reward;
            printf("\"That was epic!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Oh no, not again!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 5:
        printf("What is the limit of f(x) = (3x^2 + 2x)/(x) as x approaches 0?\n");
        scanf("%f", &answer_7);
        if (answer_7 == 0.0) 
        {
            score += vault_reward;
            printf("\"Can't believe we pulled it off!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"This is so frustrating!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 6:
        printf("Is the function f(x) = |x| continuous at x = 0? (Answer 1 for Yes, 0 for No)\n");
        scanf("%f", &answer_7);
        if (answer_7 == 1.0) 
        {
            score += vault_reward;
            printf("\"We nailed it!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Ugh, we almost had it!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 7:
        printf("What is the limit of f(x) = sin(x)/x as x approaches 0?\n");
        scanf("%f", &answer_7);
        if (answer_7 == 1.0) 
        {
            score += vault_reward;
            printf("\"Score!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"What a bummer!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 8:
        printf("Evaluate the limit: lim (x -> ∞) (2x^2 - 3x)/(x^2).\n");
        scanf("%f", &answer_7);
        if (answer_7 == 2.0) 
        {
            score += vault_reward;
            printf("\"Champion!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"You got crushed!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 9:
        printf("Determine the continuity of f(x) = {x, x < 1; 1, x = 1; 2, x > 1} at x = 1. (Answer 1 for Continuous, 0 for Discontinuous)\n");
        scanf("%f", &answer_7);
        if (answer_7 == 0.0) 
        {
            score += vault_reward;
            printf("\"Incredible!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Heartbreaking!\"\nYour score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    default:
        printf("Evaluate the limit: lim (x -> 3) (x^3 - 27)/(x - 3).\n");
        scanf("%f", &answer_7);
        if (answer_7 == 27.0) 
        {
            score += vault_reward;
            printf("\"Winner!\"\nYour score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault7(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Next time, for sure!\"\nYour score is %.0f points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
    }
}




void vault7(int score, struct Player_casino* player) {
    srand(time(0));
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 7\n");
    printf("\033[1;32m");
    printf("Your Probability Challenge is - ");
    printf("\033[1;0m");
    char answer[20];  // Answer format: "x/y" or "x/y and z/w"
    int vault_reward = 25;   // Reward points for correct answers
    int vault_loss = 60;     // Points deducted for incorrect answers
    float variable_7;        // Placeholder for any float calculations
    int ch = rand() % 10;
    char response[10]; 
    switch (ch) {
    case 0:
        printf("If a six-sided die is rolled twice, what is the probability of rolling a sum of 8 or more?\n");
        printf("Answer in the format 'x/y': ");
        scanf("%s", answer);
        if (strcmp(answer, "15/36") == 0) {
            score += vault_reward;
            printf("Correct! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Incorrect! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 1:
        printf("In a group of 10 people, what is the probability that at least two share the same birthday?\n");
        scanf("%s", answer);
        if (strcmp(answer, "11/12") == 0) {
            score += vault_reward;
            printf("Great! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Sorry, that's wrong! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 2:
        printf("You draw 3 cards from a deck of 52 without replacement. What is the probability that all are hearts?\n");
        scanf("%s", answer);
        if (strcmp(answer, "11/850") == 0) {
            score += vault_reward;
            printf("Well done! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Incorrect! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 3:
        printf("If you roll a die 3 times, what is the probability of rolling exactly one 5?\n");
        scanf("%s", answer);
        if (strcmp(answer, "75/216") == 0) {
            score += vault_reward;
            printf("Nice job! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Oh no! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 4:
        printf("A box contains 6 red and 4 green balls. If you draw two balls without replacement, what is the probability that both are red?\n");
        scanf("%s", answer);
        if (strcmp(answer, "3/15") == 0) {
            score += vault_reward;
            printf("Excellent! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Incorrect! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 5:
        printf("If two coins are flipped, what is the probability that both are heads?\n");
        scanf("%s", answer);
        if (strcmp(answer, "1/4") == 0) {
            score += vault_reward;
            printf("That's correct! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Incorrect! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 6:
        printf("You roll a six-sided die and draw a card from a standard deck. What is the probability of rolling a 4 and drawing a Queen?\n");
        scanf("%s", answer);
        if (strcmp(answer, "1/78") == 0) {
            score += vault_reward;
            printf("Correct! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Sorry, that's incorrect! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 7:
        printf("What is the probability of drawing two aces consecutively from a deck of 52 cards without replacement?\n");
        scanf("%s", answer);
        if (strcmp(answer, "1/221") == 0) {
            score += vault_reward;
            printf("Correct! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Incorrect! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            fgets(answer, sizeof(answer), stdin);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 8:
        printf("If a fair coin is flipped twice, what is the probability of getting at least one tail?\n");
        clear_input_buffer();
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0'; 
        
        if (strcmp(answer, "3/4") == 0) {
            score += vault_reward;
            printf("Great! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
             
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Incorrect! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 9:
        printf("A bag contains 5 black and 7 white marbles. If two marbles are drawn without replacement, what is the probability that both are black?\n");
        scanf("%s", answer);
        if (strcmp(answer, "10/66") == 0) {
            score += vault_reward;
            printf("Well done! You've gained %d points!\n", vault_reward);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault8(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("Incorrect! You've lost %d points.\n", vault_loss);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    }
}


void vault8(int score, struct Player_casino* player)
{
    clear_input_buffer();
    printf("\033[1;33m");
    printf("\n current score %d \nWELCOME TO VAULT 8\n",score);
    printf("\033[1;32m");
    printf("Your Probability Challenge is - ");
    printf("\033[1;0m");
    char answer[50];  // To store answer as a string for comparison
    int vault_reward = 30;
    int vault_loss = 70;
    int ch = rand() % 10;
    char response[10]; 
    vault_reward = 30;
    switch (ch)
    {
    case 0:
        printf("If two fair six-sided dice are rolled, what is the probability that the sum of the numbers rolled is greater than 9? What is the probability of rolling a sum of 7 given that the sum is greater than 9?\n");
        printf("Answer in the format 'x/y and z/w': ");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "5/36 and 1/3") == 0)
        {   vault_reward = 30;
            score += vault_reward;
            printf("\"Yes! You did it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {   
            vault_loss=20;
            score -= vault_loss;
            printf("\"No way! You lost!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 1:
        printf("In a standard deck of 52 cards, you draw 4 cards without replacement. What is the probability that exactly 2 of them are Aces and 2 are Kings?\n");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "132/270725") == 0)
        {   
            vault_reward = 30;
            score += vault_reward;
            printf("\"Victory is ours!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            vault_loss=20;
            score -= vault_loss;
            printf("\"I can't believe it!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 2:
        printf("A box contains 5 red balls, 3 blue balls, and 2 green balls. If two balls are drawn without replacement, what is the probability that the second ball drawn is blue given that the first ball drawn was red?\n");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "3/9") == 0)
        {
            vault_reward = 30;
            score += vault_reward;
            printf("\"Unbelievable!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            vault_loss=20;
            score -= vault_loss;
            printf("\"You were so close!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 3:
        printf("If the probability of event A occurring is 0.3 and the probability of event B occurring is 0.5, what is the probability that at least one of the events occurs? Additionally, if A and B are dependent events with a joint probability of 0.1, what is the probability of both A and B occurring?\n");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "0.55 and 0.1") == 0)
        {
            vault_reward = 30;
            score += vault_reward;
            printf("\"You won!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            vault_loss=20;
            score -= vault_loss;
            printf("\"Gutted!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 4:
        printf("In a class of 30 students, 18 are girls, and 10 boys play sports. If you randomly select a student, what is the probability that the student is a boy given that they are involved in sports?\n");
        scanf("%s", answer);
        if (strcmp(answer, "10/30") == 0)
        {   
            vault_reward = 30;
            score += vault_reward;
            printf("\"That was epic!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {   
            vault_loss=20;
            score -= vault_loss;
            printf("\"Oh no, not again!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 5:
        printf("If you flip a fair coin 5 times, what is the probability of getting at least 3 heads? Additionally, if you have already obtained 2 heads, what is the probability of getting a total of 4 heads after the 5 flips?\n");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "0.5 and 0.5") == 0)
        {
            vault_reward = 30;
            score += vault_reward;
            printf("\"Can't believe we pulled it off!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            vault_loss=20;
            score -= vault_loss;
            printf("\"This is so frustrating!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 6:
        printf("A jar contains 6 green, 4 yellow, 2 red, and 3 blue marbles. If you draw two marbles at random, what is the probability that both are of the same color? If the first marble drawn is green, what is the probability that the second marble drawn is yellow?\n");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "27/66 and 4/11") == 0)
        {
            vault_reward = 30;
            score += vault_reward;
            printf("\"We nailed it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            score -= vault_loss;
            printf("\"Ugh, we almost had it!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 7:
        printf("In a survey of 200 people, 120 liked chocolate, 80 liked vanilla, and 50 liked both. What is the probability that a randomly selected person likes neither chocolate nor vanilla? If you randomly select one person who likes chocolate, what is the probability they also like vanilla?\n");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "30/200 and 50/120") == 0)
        {
            vault_reward = 30;
            score += vault_reward;
            printf("\"Score!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            vault_loss=20;
            score -= vault_loss;
            printf("\"That stings!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 8:
        printf("You draw 3 cards from a standard deck of 52 cards without replacement. What is the probability that at least one card is a Queen? If at least one card drawn is a Queen, what is the probability that exactly one of the drawn cards is a Queen?\n");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "1 - (48/52)(47/51)(46/50) and (12/52)(40/51)(39/50)/P(at least one Queen)") == 0)
        {   
            vault_reward = 30;
            printf("reward is %d",vault_reward);
            score += vault_reward;
            printf("\nAwesome!!!\n");
            
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            printf("Your balance %d\n",player->credits);
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {
            vault_loss=20;
            score -= vault_loss;
            printf("\"Back to the drawing board!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 9:
        printf("If a box contains 10 bulbs, 4 of which are defective, and you randomly choose 3 bulbs, what is the probability that all 3 are non-defective? If you know that at least one of the selected bulbs is defective, what is the probability that exactly one of the three bulbs is defective?\n");
        scanf("%[^\n]", answer);
        if (strcmp(answer, "C(6,3)/C(10,3) and (C(4,1)*C(6,2)/C(10,3))") == 0)
        {
            vault_reward = 30;
            score += vault_reward;
            printf("\"Yes! That's how it's done!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault9(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        }
        else
        {   vault_loss=20;
            score -= vault_loss;
            printf("\"Oh no, try again!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    }
}


void vault9(int score, struct Player_casino* player) {
    clear_input_buffer();
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 9\n");
    printf("\033[1;32m");
    printf("Your Integration Challenge is - ");
    printf("\033[1;0m");
    char answer[100];
    int vault_reward = 30; // Reward points for correct answers
    int vault_loss = 80;   // Points deducted for incorrect answers
    int ch = rand() % 10;
    char response[10]; 

    switch (ch) {
    case 0:
        printf("Evaluate the integral ∫(0 to 1) x^3 * (1 - x)^2 dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/60") == 0) {
            score += vault_reward;
            printf("\"Yes! You did it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"No way! You lost!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 1:
        printf("Compute integration (0 to infinity) x^3 * e^(-x) dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "6") == 0) {
            score += vault_reward;
            printf("\"Victory is ours!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"I can't believe it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 2:
        printf("Evaluate integration (1 to infinity) 1/(x^3) dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/2") == 0) {
            score += vault_reward;
            printf("\"Unbelievable!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"You were so close!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 3:
        printf("Find the value of integration (0 to π/2) sin^2(x) dx. (If your answer contains pi, write Pi)\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "Pi/4") == 0) {
            score += vault_reward;
            printf("\"You won!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Gutted!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 4:
        printf("Evaluate the Beta function B(2, 3).\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/12") == 0) {
            score += vault_reward;
            printf("\"That was epic!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Oh no, not again!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 5:
        printf("Find the integral integration (0 to 1) x^2 ln(x) dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "-1/9") == 0) {
            score += vault_reward;
            printf("\"Can't believe we pulled it off!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"This is so frustrating!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 6:
        printf("Evaluate the integral integration (0 to 1) (ln(x))^2 dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "2") == 0) {
            score += vault_reward;
            printf("\"We nailed it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Ugh, we almost had it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 7:
        printf("Calculate the integral integration (0 to infinity) e^(-x^2) dx. (If your answer contains pi, write Pi)\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "sqrt(Pi)/2") == 0) {
            score += vault_reward;
            printf("\"Score!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"That stings!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 8:
        printf("Using the Gamma function, evaluate Γ(5).\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "24") == 0) {
            score += vault_reward;
            printf("\"Awesome!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Back to the drawing board!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 9:
        printf("Evaluate integration (0 to π/2) cos(x)^3 dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "2/3") == 0) {
            score += vault_reward;
            printf("\"Yes! That's how it's done!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            
            fflush(stdin);
            printf("Do you want to continue to the next vault? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault10(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
            }
        } else {
            score -= vault_loss;
            printf("\"Oh no, try again!\"\n");
            printf("Your score is %d points\n", score);
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    }
}

void vault10(int score, struct Player_casino* player)
{   
    clear_input_buffer();
    printf("\033[1;33m");
    printf("WELCOME TO VAULT 10\n");
    printf("\033[1;32m");
    printf("Your Integration Challenge is - ");
    printf("\033[1;0m");
    char answer[100];
    int vault_reward = 30;
    int vault_loss = 90;
    int ch = rand() % 10;
    char response[10]; 
    switch (ch)
    {
    case 0:
        printf("Evaluate the double integral (0 to 1, 0 to 1) (x^2 + y^2) dx dy.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/3") == 0)
        {
            score += vault_reward;
            printf("\"Yes! You did it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"No way! You lost!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 1:
        printf("Compute double integral(0 to 1, 0 to sqrt(1 - x^2)) x * y dy dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/8") == 0)
        {
            score += vault_reward;
            printf("\"Victory is ours!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"I can't believe it!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 2:
        printf("Evaluate double integral(0 to 1, 0 to 1-x) (x + y) dx dy.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/3") == 0)
        {
            score += vault_reward;
            printf("\"Unbelievable!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"You were so close!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 3:
        printf("Find the value of f(x)(0 to 1, 0 to x) e^(x+y) dy dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "(e - 1)/2") == 0)
        {
            score += vault_reward;
            printf("\"You won!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"Gutted!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 4:
        printf("Evaluate the triple integral (0 to 1, 0 to x, 0 to y) z dz dy dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/24") == 0)
        {
            score += vault_reward;
            printf("\"That was epic!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"Oh no, not again!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 5:
        printf("Find the triple integral (0 to 1, 0 to x, 0 to y^2) z dx dy dz.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/12") == 0)
        {
            score += vault_reward;
            printf("\"Can't believe we pulled it off!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"This is so frustrating!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 6:
        printf("Evaluate the double integral (0 to π, 0 to π) sin(x) * cos(y) dx dy.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "0") == 0)
        {
            score += vault_reward;
            printf("\"We nailed it!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"Ugh, we almost had it!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 7:
        printf("Calculate the double integral (0 to 1, 0 to 1) (x^2 * y + y^2 * x) dx dy.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "11/120") == 0)
        {
            score += vault_reward;
            printf("\"Score!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"That stings!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 8:
        printf("Using spherical coordinates, evaluate the triple integral (B) sqrt(x^2 + y^2 + z^2) dV, where B is the unit ball.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "3/8") == 0)
        {
            score += vault_reward;
            printf("\"Awesome!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"Back to the drawing board!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;

    case 9:
        printf("Evaluate the double integral (0 to 1, 0 to x) (x^3 - y^3) dy dx.\n");
        printf("Answer: ");
        fgets(answer, sizeof(answer), stdin);
        answer[strcspn(answer, "\n")] = '\0';
        if (strcmp(answer, "1/8") == 0)
        {
            score += vault_reward;
            printf("\"Yes! That's how it's done!\"\n");
            printf("Your score is %d points\n", score);
            player->credits += vault_reward;
            autosave(player);
            vault11(score, player);
        }
        else
        {
            score -= vault_loss;
            printf("\"Oh no, try again!\"\n");
            printf("Your score is %d points\n", score);
            printf("Try Again\n\n");
            player->credits -= vault_loss;
            autosave(player);

            fflush(stdin);
            printf("Do you want to continue to the  vault 1? (yes/YES/y): (not continuing will have consequences) ");
            scanf("%s",response);
            if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0 || strcmp(response, "y") == 0)
            {
                vault1(score, player);
            }  else {
                printf("Thanks for playing since you quit 20%% of the score will be deducted");
                player->credits-= (score*0.2);
                autosave(player);
            }
        }
        break;
    }
}


void vault11(int score, struct Player_casino* player)
{
    printf("\033[1;32m");
    printf("congratulation %s !!!!!!!!!!!! YOU WON!! \n\n",player->name);
    printf("Since you survied such a dangreous journey your all credits will be 100X\n\n");
    player->credits*=100;
    autosave(player);
    printf("\033[1;33m");
    printf("Your current Balance: %d ",player->credits);

}

#endif // ABOUT_H
