#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototypes
void shuffle_cards(char v[]);
void sum_card(int *sum, char card);
void start_game(char v[], int *psum, int *csum);

int main(int argc, char **argv){
  srand(time (NULL));
  char deck[52], cards[13] =
    { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };

  int k = 0, opc = 0, player = 0, cmp = 0, deck_pos = 47;

  //show cards
  for (int i = 0; i <= 12; i++){
      printf ("%c ", cards[i]);
  }

  //fill deck
  for (int j = 0; j <= 51; j++){
      if (k == 13){
	    k = 0;
	  }
      deck[j] = cards[k];
      k++;
  }

  //show deck
  printf ("\n");
  for (int l = 0; l <= 51; l++){
      printf ("%c ", deck[l]);
  }

  //shuffle and give 2 cards
  start_game(deck, &player, &cmp);

  //show shuffle deck
  printf ("\n");
  for (int l = 0; l <= 51; l++){
      printf ("%c ", deck[l]);
  }

  while (opc != 3){
      // printf("\n%d ---- COMPUTER\n%d ---- PLAYER\n", cmp, player);
      printf ("\n%d ---- COMPUTER\n%d ---- PLAYER\n", cmp, player);
      printf ("\n\n1- BUY CARD\n2- STOP\n3- EXIT\n");
      scanf ("%d", &opc);
      switch (opc){
	    case 1:
	        sum_card(&player, deck[deck_pos]);
	        deck_pos--;
	        break;
	    case 2:
	        break;
	    case 3:
	        break;
	    default:
	        continue;
	  }
  }

  return 0;
}

//start game
void start_game(char v[], int *psum, int *csum){
    shuffle_cards(v);
    sum_card(psum, v[51]);
    sum_card(psum, v[50]);
    sum_card(csum, v[49]);
    sum_card(csum, v[48]);
}

//shuffle cards
void shuffle_cards(char v[]){
  char tmp;
  for (int m = 0; m <= 51; m++){
      int pos = rand () % 52;
      tmp = v[m];
      v[m] = v[pos];
      v[pos] = tmp;
  }
}

//add cards to sum
void sum_card(int *sum, char card){
  if (card == 'A'){
      *sum += 1;
    }else if (card == '2'){
      *sum += 2;
    }else if (card == '3'){
      *sum += 3;
    }else if (card == '4'){
      *sum += 4;
    }else if (card == '5'){
      *sum += 5;
    }else if (card == '6'){
      *sum += 6;
    }else if (card == '7'){
      *sum += 7;
    }else if (card == '8'){
      *sum += 8;
    }else if (card == '9'){
      *sum += 9;
    }else{
      *sum += 10;
    }
}
