#include <stdio.h>
#include <stdlib.h>

typedef struct{                         // defines the hand "class" with the folowing atributes

    int first_deal;
    int second_deal;
    int increments;
    int bet;
    int total;
    char alive;
    char is_double;

}hand;



void test_hand(hand * h, hand * d){     // this function is used at the end of a game to compare the player's hands with the dealer's



    if ((*h).total == 21){              // checks for blackjack
        printf("you won 21",(*h).bet * 1.5, (*h).total);
        (*h).alive = 'n';
        }
    else{



    int dealer_total = play_dealer(&(*d));                  // see function definition


    if((*h).total > 21){                // checks for your bust
        printf("%d excedes 21 so you lost", (*h).total, (*h).bet);
        (*h).alive = 'n';
    }
    else if (dealer_total > 21){          // checks for dealer bust
        printf("the dealer busted with %d, you won", dealer_total);
        (*h).alive = 'n';
    }

    else if (dealer_total == 21){         // dealer balckjack
        printf("the dealer has blackjack, you lost");
        (*h).alive = 'n';
    }

    else if((*h).total > dealer_total){    // compares hands
        printf("You won with %d agaisnt the dealer with %d", (*h).total, dealer_total);
        (*h).alive = 'n';
    }

    else{
        printf("you lost, the dealer had %d", dealer_total);
        (*h).alive = 'n';
    }
    }

}

void new_card(hand * h, char temp, hand * d){     // used on the game loop to ask the player to draw
    printf("your total is %d and the dealers first deal is %d, do you want aditional cards? y/n ", (*h).total, (*d).first_deal);
    scanf("%c", &temp);
    if(temp == 'y') {  // if the player wants another card
        (*h).increments = (*h).increments + rand() % 12;
        (*h).total = (*h).total + (*h).increments;
        if ((*h).total >= 21) //  maskes sure the player cant ask for a card after passing 21
        {
        test_hand(&(*h), &(*d));
        }
       }
    else if (temp == 'n') {     // If the player doesn't want anymore cards, hands the hand
        test_hand(&(*h), &(*d));
       }
   }

int play_dealer(hand * d){    // simulates the the dealer drawing in a casino (dealer draws to 17)

    (*d).total = (*d).first_deal + (*d).second_deal;

    if ((*d).total == 21){
        return (*d).total;
    }

    while((*d).total < 17){
        (*d).increments =  (*d).increments + rand() % 12;
        (*d).total = (*d).total + (*d).increments;

    }

    return (*d).total;

}



int main(){

    hand dealer; // creates two instances of the hand "class"
    hand hand;

    hand.alive = 'y';

    hand.is_double = 'n';

    time_t t;
                                // this two inicializes the RNG
    srand((unsigned) time(&t));

    hand.first_deal= rand() % 12;
    hand.second_deal = rand() % 12;
    hand.total = hand.first_deal + hand.second_deal;
    hand.increments = 0;
    hand.bet = 10;

    dealer.first_deal = rand() % 12;
    dealer.second_deal = rand() % 12;


    while (hand.alive == 'y')  // game loop
    {
        char temp = 'n'; // this is here for the y/n of the new card, dont know why is here tho
        new_card(&hand, temp, &dealer);
    }
}
