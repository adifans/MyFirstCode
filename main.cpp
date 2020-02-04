//Beginning C++ w/Professor Foster
//Adventure #1
//TO DO: clarity RE: srand(time(0)) vs book pg 65
//clarity RE: line 37 & 38 (is this satisfied by line 47?)
//github.com link: 
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>

// welcome the player
int main () {
	cout << "Welcome to reddit.\n";
	cout << "While lurking in your favorite smug and self-affirming,\n politicially-oriented subreddit,\n you come across a user with a different opinion!\n The audacity!\n You attempt to leave with your \n pre-determined notions still intact.\n  Unfortunately, the other user senses\n weakness and moves in for the kill!\n  You frantically hit F5 to refresh\n and soon see their first smarmy reply\n to your smug self-affirmation.\n";
// set up the game
    int health = 10, attack, block, turns;
//     seed the random number generator
	srand(time(0));
// start the loop
	while (true) {
		//     add 1 to turns
		++turns;
//     start the encounter
	
//         randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
		int attack = rand() % 4;
		int block = rand() % 4;
		//         if block is greater or equal to attack, successful block
		if(block >= attack) {
			cout << "You successfully employ a meme stolen from a chan site!\n  You have " << health << " reddit karma remaining.\n";
//         otherwise, subtract attack value from health.
		} 
		if(attack < block) {
			health -= block;
			cout << "The enemy's unoriginal content is devastating!\n You have " << health << " reddit karma remaining.\n";
		}
// keep looping while health is greater than zero and fewer than 4 turns have happened
		// if(health > 0 && turns < 4)
		// 	continue;

// If the player's health is below a certain number, tell them to go see the doctor.
		if(health < 3) {
				cout << "You consider logging into\n one of your many alternate accounts in order to\n upvote your flagging post, but wonder if that will\n be too obvious to your opponent.\n";
		}
// if health is greater than 0, congratulate player
// otherwise, tell the player they're dead.
// Make the number of turns before the adventure is over random.
		if(health > 0 && turns > rand() % 10 + 4) {
			cout << "You have managed to survive the threat posed by reasoned discourse!\n";
			break;
		} else if (health <= 0) {
			cout << "You have been publicly humiliated!\n Time to delete this account and start another next week.\n";
			break;
		} 
	}
// Beyond the Requirements
// Beyond effort and polish (some of which is described below), here are some other things you can do to improve your grade:

//1. Incorporate sleep() to change the pacing of the game and not have it all come out at once.
//2. Send me a link in the comments to your assignment hosted publicly, like on github.com (good for showing off what you know to future employers)
//3. Ask the player if they'd like to see all of the numbers used in the game (a debug mode) and if they do, post them at every point they're used.
return 0;
}