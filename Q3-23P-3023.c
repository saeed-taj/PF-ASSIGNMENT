#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // to predict the true and false  

 
 
 char position_test[][5][3] = {  // initiellize 3d array for easy and to think more clearly
    
    {"AC", "5C", "10C", "7C", "3S"},  // the deck of cards or test hands
    {"2C", "3D", "4S", "5H", "2D"},
    {"2C", "3D", "4S", "3H", "2D"},
    {"5S", "4C", "AD", "4S", "4H"},
    {"3H", "7H", "6S", "4D", "5S"},
    {"AC", "5C", "10C", "7C", "3C"},
    {"5C", "8D", "5H", "8S", "8H"},
    {"3D", "7H", "7S", "7C", "7D"},
    {"AS", "10S", "QS", "KS", "JS"},
                                       };

char suit(char *card) {
    
    char *finalone = card;
    
    while (*finalone != '\0') {  // while loop to predict empty space
    
        finalone++;
    }
    
    return *(finalone - 1);
}

int value(char *card) {
    if (card[0] == 'A') return 14;
    if (card[0] == 'J') return 11;
    if (card[0] == 'Q') return 12;
    if (card[0] == 'K') return 13;
    
    return card[0] - '0';
}

bool is_flush(char cards[][3]) {
   
    char s = suit(cards[0]);
   
  
    for (int i = 1; i < 5; i++) {  // for loop if not equals to s
  
        if (suit(cards[i]) != s){ 
        return false;
  }
    }
  
    return true;
}


void hand_dist(char cards[][3], int initial[]) {  // Set all elements of dist to 0 manually using a loop
    
    for (int i = 0; i < 15; i++) {
        initial[i] = 0;
    }
    
    for (int i = 0; i < 5; i++) {    // Check spreading    of card values
        initial[value(cards[i])]++;
    }
    
    initial[1] = initial[14]; // adjust value for Ace (14)
}

int highestone(char cards[][3]) {
   
    int dist[15];
  
   
    hand_dist(cards, dist);
 
    for (int value = 1; value <= 10; value++) {
 
        bool straight = true;
 
        for (int k = 0; k < 5; k++) {
 
            if (dist[value + k] != 1) {
 
                straight = false;
 
                break;
 
            }
 
        }
 
        if (straight) return value + 4;
 
    }
 
    return 0;
}

int card_count(char cards[][3], int num, int direct) {
    
    int tempo[15];
    
    hand_dist(cards, tempo);
    
    for (int value = 2; value <= 14; value++) {
    
        if (value == direct) {
        continue;
    }
    
        if (tempo[value] == num){
            return value;
    }
    
    }
    
    return 0;
}


int hand_rank(char cards[][3]) {
    
    if (highestone(cards) && is_flush(cards)) {
    return 8;
    }
    
    if (card_count(cards, 4, 0)) {
    
    return 7;
    }
    
    if (card_count(cards, 3, 0) && card_count(cards, 2, 0)) {
    
    return 6;
    }
    
    if (is_flush(cards)){ 
    return 5;
    }
    
    if (highestone(cards)){ 
    return 4;
    }
    
    if (card_count(cards, 3, 0)){ 
    return 3;
    }
    
    int couple1 = card_count(cards, 2, 0);
    
    if (couple1) {
    
        int couple2 = card_count(cards, 2, couple1);
    
        if (couple2) {
        return 2;
    }
        return 1;
    
    }
    
    return 0;
}


int check_strings(char hand1[][3], char hand2[][3]) {
     
      int result1 = hand_rank(hand1);
    
    int result2 = hand_rank(hand2);
    
    if (result1 < result2) {
    return -1; // hand1 is lower than the rank of hand2 thats why -1 is used 
     }
    
    if (result1 > result2){ 
    return 1;
    }
    
    return 0;
}

void pooker(char hand1[][3], char hand2[][3]) {
    
    int signature = check_strings(hand1, hand2);
    
    if (signature < 0) {
    printf("Player 1 wins\n");  // if player 1 is winner 
    }
    
    else if (signature > 0){ 
    printf("Player 2 wins\n"); // if player 2 is winner
    }
    
    else{ 
    printf("It's a tie\n");  // if it is a tie
}

}

void test_random_hands(int n) {
    
    for (int i = 0; i < n; i++) {
        
        char deck[52][3];
        
        char suits[] = {'D', 'C', 'H', 'S'};  
        
        int index = 0;
        
        for (int i = 0; i < 4; i++) {
        
            for (int j = 2; j <= 14; j++) {
        
                if (i < 11) {
        
                    deck[index][0] = i + '0';
                    deck[index][1] = suits[i];
                    deck[index][2] = '\0';
                }
                
                 else {
                
                    deck[index][0] = "JQKA"[i - 11];
                    deck[index][1] = suits[i];
                    deck[index][2] = '\0';
                }
                
                index++;
            }
        }
        
        for (int j = 0; j < 52; j++) {
            
            int k = rand() % 52;   // random function to print less than 52 because there are total 52 cards in poker
              
              char temp[3];
            
            temp[0] = deck[j][0];     // logic for random cards comparisan
            temp[1] = deck[j][1];
            temp[2] = deck[j][2];     // assigning values to temporary 
            deck[j][0] = deck[k][0];   // assigning values to deck
            deck[j][1] = deck[k][1];
            deck[j][2] = deck[k][2];
            deck[k][0] = temp[0];
            deck[k][1] = temp[1];
            deck[k][2] = temp[2];
        }
        
        pooker(deck, deck + 5);
        pooker(deck + 5, deck + 10);
    }
}

int main() {
    
    char hand1[5][3]; // 2d array 
    char hand2[5][3];  // 2d array

    
    printf("Enter the first input (AC 5C 10C 7C 3S): "); //  user will enter the first hand
       
       for (int i = 0; i < 5; i++) {
            scanf("%s", hand1[i]);
    }

    
    printf("Enter the second input (2C 3D 4S 5H 2D): "); // user will enter the second hand
       
        for (int i = 0; i < 5; i++) {
            scanf("%s", hand2[i]);
    }

    
    pooker(hand1, hand2); // Compare and display the comparison results

    return 0;
}

