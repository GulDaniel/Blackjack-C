#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main (int argc, char **argv)
{

  srand (time (NULL));
  char tmp, deck[52], cards[13] =
    { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };

  int k = 0, opc = 0, player = 0, cmp = 0, deck_pos = 47;

  //show cards
  for (int i = 0; i <= 12; i++)
    {
      printf ("%c ", cards[i]);
    }

  //fill deck
  for (int j = 0; j <= 51; j++)
    {
      if (k == 13)
	{
	  k = 0;
	}
      deck[j] = cards[k];
      k++;
    }

  //show deck
  printf ("\n");
  for (int l = 0; l <= 51; l++)
    {
      printf ("%c ", deck[l]);
    }

  //shufle the deck
  for (int m = 0; m <= 51; m++)
    {
      int pos = rand () % 52;
      tmp = deck[m];
      deck[m] = deck[pos];
      deck[pos] = tmp;
    }

  //show shuffle deck
  printf ("\n");
  for (int l = 0; l <= 51; l++)
    {
      printf ("%c ", deck[l]);
    }

  //start the game
  for (int n = 51; n >= 50; n--)
    {
      switch (deck[n])
	{
	case 'A':
	  player += 1;
	  break;
	case '2':
	  player += 2;
	  break;
	case '3':
	  player += 3;
	  break;
	case '4':
	  player += 4;
	  break;
	case '5':
	  player += 5;
	  break;
	case '6':
	  player += 6;
	  break;
	case '7':
	  player += 7;
	  break;
	case '8':
	  player += 8;
	  break;
	case '9':
	  player += 9;
	  break;
	case 'T':
	  player += 10;
	  break;
	case 'Q':
	  player += 10;
	  break;
	case 'K':
	  player += 10;
	  break;
	}
    }

  for (int o = 49; o >= 48; o--)
    {
      switch (deck[o])
	{
	case 'A':
	  cmp += 1;
	  break;
	case '2':
	  cmp += 2;
	  break;
	case '3':
	  cmp += 3;
	  break;
	case '4':
	  cmp += 4;
	  break;
	case '5':
	  cmp += 5;
	  break;
	case '6':
	  cmp += 6;
	  break;
	case '7':
	  cmp += 7;
	  break;
	case '8':
	  cmp += 8;
	  break;
	case '9':
	  cmp += 9;
	  break;
	case 'T':
	  cmp += 10;
	  break;
	case 'Q':
	  cmp += 10;
	  break;
	case 'K':
	  cmp += 10;
	  break;
	}
    }

  while (opc != 3)
    {
      // printf("\n%d ---- COMPUTER\n%d ---- PLAYER\n", cmp, player);
      printf ("\n%d ---- COMPUTER\n%d ---- PLAYER\n", cmp, player);
      printf ("\n\n1- BUY CARD\n2- STOP\n3- EXIT\n");
      scanf ("%d", &opc);
      switch (opc)
	{
	case 1:
	  switch (deck[deck_pos])
	    {
	    case 'A':
	      player += 1;
	      break;
	    case '2':
	      player += 2;
	      break;
	    case '3':
	      player += 3;
	      break;
	    case '4':
	      player += 4;
	      break;
	    case '5':
	      player += 5;
	      break;
	    case '6':
	      player += 6;
	      break;
	    case '7':
	      player += 7;
	      break;
	    case '8':
	      player += 8;
	      break;
	    case '9':
	      player += 9;
	      break;
	    case 'T':
	      player += 10;
	      break;
	    case 'Q':
	      player += 10;
	      break;
	    case 'K':
	      player += 10;
	      break;
	    }
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
