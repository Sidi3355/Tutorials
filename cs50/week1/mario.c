#include <stdio.h>
#include <cs50.h>

int height;
int get_height();
void pyramid();

int main(void) {

    pyramid();

}

int get_height() {


        do {
        height = get_int("How tall is the pyramid?\n");
        }

        while (height < 1 || height > 8);

        return height;

    }

void pyramid() {

    height = get_height();

    for (int row = 0; row < height; row++) {

        for (int col = 0; col < 2*height+2; col++) {

            if (row + col > height - 2 && col != height && col != height + 1 && col - row < height + 3)

                printf("#");

            else

                printf(" ");

        }

        printf("\n");
    }
}
