#include <stdio.h>
#include <ctype.h>
#define SIZE 100

int main(int argc, char const *argv[])
{
  char message[SIZE] = {};
  char c;
  int i = 0;

  char biff_lang[6][2] = {{'A', 4},
                          {'B', 8},
                          {'E', 3},
                          {'I', 1},
                          {'O', 0},
                          {'S', 5}};

  printf("Enter your message: ");
  while ((c = getchar()) != '\n')
  {
    message[i++] = toupper(c);
  }

  printf("In B1FF-speak: ");

  for (int i = 0; i < SIZE; i++)
  {
    short replaced = 0;
    for (int j = 0; j < 6; j++)
    {
      if (message[i] == biff_lang[j][0])
      {
        printf("%d", biff_lang[j][1]);
        replaced = 1;
      }
    }

    if (replaced)
    {
      continue;
    }

    printf("%c", message[i]);
  }

  printf("!!!!!!!!!!!!!!!!");

  return 0;
}


// for (i = 0; i < MAX_SIZE; i++) {
//         switch (c = toupper(message[i])) {
//             case 'A':
//                 putchar('4');
//                 break;
//             case 'B':
//                 putchar('8');
//                 break;
//             case 'E':
//                 putchar('3');
//                 break;
//             case 'I':
//                 putchar('1');
//                 break;
//             case 'O':
//                 putchar('0');
//                 break;
//             case 'S':
//                 putchar('5');
//                 break;
//             default:
//                 putchar(c);
//                 break;
//         }
//     }

