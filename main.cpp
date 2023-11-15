#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> get_maze(){
    vector<string> maze = {("#S##############"),
                           ("#           ####"),
                           ("#  ## ## ##### #"),
                           ("## ##  # #     #"),
                           ("## #####    ####"),
                           ("## #############"),
                           ("##             #"),
                           ("##############Q#")};
    return maze;
}


int main(){
    auto maze = get_maze();

    for (int i = 0; i < maze.size(); ++i) {
        cout << maze[i] << '\n';
    }
}
