
#define UNIT_TEST

#include "../card.c"

int main(int argc, char* argv[]){

	char card[54];
	
	ASSERT(TRUE == is_three_cards(card, 2));
	return 0;
}

