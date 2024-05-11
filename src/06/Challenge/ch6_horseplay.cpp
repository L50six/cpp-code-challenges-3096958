// C++ Code Challenges, LinkedIn Learning

// Challenge #6: Horseplay
// Write a function that takes in the location of a knight in a chessboard and returns a vector of strings with the possible locations it might move to.
// The locations are expressed as strings in algebraic notation.
// Print the list on the terminal.
// Don't worry about other pieces on the chessboard.

#include <iostream>
#include <vector>
#include <string>

// knight_moves()
// Summary: This function receives a string with the location of a knight in a chessboard and returns a vector of strings with the possible locations it might move to.
// Arguments:
//           knight: The knight's location.
// Returns: An STL vector of strings with the possible locations to move.
std::vector<std::string> knight_moves(std::string knight){
    std::vector<std::string> moves;

    // Write your code here
	struct KnightMove {
			int dx;
			int dy;
	}

	vector<KnightMove> KnightMoves = {
		{1,2},{-1,2},{-1,-2}, {1,-2},
		{2,1},{-2,1},{-2,-1},{2,-1}
    };

	x = static_cast<int>(knight[[0]);
	y = static_cast<int>(knight[[1]);

	//  needs assci offset

	for (const KnightMove& move: KnightMoves) {
		x += move.dx;
		y += move.dy;
		if ((x > 0) && (x<9) && (y > 0) && (y<9)) {
			moves.push_back(std::itos(x),std::itos(y))
			// columns need to be converrted to letterw. 
		}
	}

    return moves;
}

// Main function
int main(){
    std::string knight;
    
    std::cout << "Enter the location of the knight: " << std::flush;
    std::cin >> knight;

    std::vector<std::string> the_moves = knight_moves(knight);
    std::cout << std::endl << "Possible moves from " << knight << ": ";

    for (auto element : the_moves)
        std::cout << element << " ";
    std::cout << std::endl << std::endl << std::flush;
    return 0;
}